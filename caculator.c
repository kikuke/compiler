#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_BUFFER_SIZE 2048
#define PROMPT "CALCULATOR> "
#define EXIT_INPUT "exit\n"

typedef enum {
    ERROR, PLUS, MINUS, STAR, DIVIDE, NUMBER, LPAREN, RPAREN, END
} TOKEN;

char *print_token[] = {
    "ERROR", "PLUS", "MINUS", "STAR", "DIVIDE", "NUMBER", "LPAREN", "RPAREN", "END"
};

typedef enum {
    INT, FLT
} CAL_TYPE;

typedef union
{
    int i;
    float f;
} CAL_VAL;

typedef struct {
    CAL_TYPE type;
    CAL_VAL val;
} CAL_STRUCT;

void rewind_buffer();
void get_token();
CAL_STRUCT expression();
CAL_STRUCT term();
CAL_STRUCT factor();
void print_warning(const CAL_STRUCT *lOp, const CAL_STRUCT *rOp);
void print_error(char *exp_val);
// s_idx는 시작주소, e_idx는 끝 바로 이후 주소
void set_now_num_int(size_t s_idx, size_t e_idx);
void set_now_num_float(size_t s_idx, size_t e_idx);
void CAL_STRUCT_calculator(CAL_STRUCT *target, const CAL_STRUCT *source, TOKEN op);

CAL_STRUCT now_num;
TOKEN now_token;

size_t buf_idx;
size_t token_s_idx;
char buffer[MAX_BUFFER_SIZE];

void main() {
    //Todo: 주석처리 하고 차례차례 테스트해보기
    CAL_STRUCT result;

    printf("%s", PROMPT);
    while (strcmp(fgets(buffer, MAX_BUFFER_SIZE, stdin), EXIT_INPUT)) {
        rewind_buffer();

        get_token();
        result = expression();
        if (now_token != END)
            print_error("END");
        else {
            if (result.type == INT) {
                printf("RESULT: %i\n", result.val.i);
            } else if (result.type == FLT) {
                printf("RESULT: %f\n", result.val.f);
            } else {
                fputs("Undefined CAL_TYPE", stderr);
                exit(1);
            }
        }

        printf("%s", PROMPT);
    }

    exit(0);
}

CAL_STRUCT expression() {
    CAL_STRUCT result;
    TOKEN op;
    CAL_STRUCT rOp;
    
    result = term();
    while (now_token == PLUS || now_token == MINUS) {
        op = now_token;
        get_token();
        rOp = term();
        CAL_STRUCT_calculator(&result, &rOp, op);
    }
    return result;
}

CAL_STRUCT term() {
    CAL_STRUCT result;
    TOKEN op;
    CAL_STRUCT rOp;

    result = factor();
    while (now_token == STAR || now_token == DIVIDE) {
        op = now_token;
        get_token();
        rOp = factor();
        CAL_STRUCT_calculator(&result, &rOp, op);
    }
    return result;
}

CAL_STRUCT factor() {
    CAL_STRUCT result;

    if (now_token == NUMBER) {
        result = now_num;
        get_token();
    }
    else if (now_token == LPAREN) {
        get_token();
        result = expression();
        if (now_token == RPAREN)
            get_token();
        else
            print_error("RPAREN");
    }
    else
        print_error("NUMBER | LPAREN");
    return result;
}

void CAL_STRUCT_calculator(CAL_STRUCT *target, const CAL_STRUCT *source, TOKEN op) {

    if (target->type != source->type)
        print_warning(target, source);
    
    switch (op)
    {
    case PLUS:
        if (target->type == INT) {
            if (source->type == INT)
                target->val.i += source->val.i;
            else
                target->val.i += source->val.f;
        } else {
            if (source->type == INT)
                target->val.f += source->val.i;
            else
                target->val.f += source->val.f;
        }
        break;

    case MINUS:
        if (target->type == INT) {
            if (source->type == INT)
                target->val.i -= source->val.i;
            else
                target->val.i -= source->val.f;
        } else {
            if (source->type == INT)
                target->val.f -= source->val.i;
            else
                target->val.f -= source->val.f;
        }
        break;

    case STAR:
        if (target->type == INT) {
            if (source->type == INT)
                target->val.i *= source->val.i;
            else
                target->val.i *= source->val.f;
        } else {
            if (source->type == INT)
                target->val.f *= source->val.i;
            else
                target->val.f *= source->val.f;
        }
        break;

    case DIVIDE:
        if (target->type == INT) {
            if (source->type == INT)
                target->val.i /= source->val.i;
            else
                target->val.i /= source->val.f;
        } else {
            if (source->type == INT)
                target->val.f /= source->val.i;
            else
                target->val.f /= source->val.f;
        }
        break;
    
    default:
        print_error("PLUS | MINUS | STAR | DIVIDE");
        break;
    }
}

void get_token() {
    char ch;
    token_s_idx = buf_idx;

    ch = buffer[buf_idx];
    while (ch == ' ' || ch == '\t')
        ch = buffer[++buf_idx];

    if (isdigit(ch)) {
        // 숫자 파싱
        while (isdigit(ch))
            ch = buffer[++buf_idx];
        
        if (ch == '.') {
            // 소수인 경우
            do
                ch = buffer[++buf_idx];
            while (isdigit(ch));
            
            set_now_num_float(token_s_idx, buf_idx);
        } else {
            // 정수인 경우
            set_now_num_int(token_s_idx, buf_idx);
        }

        now_token = NUMBER;
        return;
    } else if (ch == '+')
        now_token = PLUS;
    else if (ch == '-')
        now_token = MINUS;
    else if (ch == '*')
        now_token = STAR;
    else if (ch == '/')
        now_token = DIVIDE;
    else if (ch == '(')
        now_token = LPAREN;
    else if (ch == ')')
        now_token = RPAREN;
    else if (ch == '\n')
        now_token = END;
    else {
        now_token = ERROR;
        print_error("PLUS | MINUS | STAR | DIVIDE | NUMBER | LPAREN | RPAREN");
    }

    buf_idx++;
}

void set_now_num_int(size_t s_idx, size_t e_idx) {
    int num = -1;
    char num_buf[MAX_BUFFER_SIZE] = {};
    size_t len = e_idx - s_idx;

    memcpy(num_buf, buffer + s_idx, len);
    num_buf[len] = '\0';
    num = atoi(num_buf);

    now_num.type = INT;
    now_num.val.i = num;
}

void set_now_num_float(size_t s_idx, size_t e_idx) {
    float num = -1;
    char num_buf[MAX_BUFFER_SIZE] = {};
    size_t len = e_idx - s_idx;

    memcpy(num_buf, buffer + s_idx, len);
    num_buf[len] = '\0';
    num = atof(num_buf);

    now_num.type = FLT;
    now_num.val.f = num;
}

void print_warning(const CAL_STRUCT *lOp, const CAL_STRUCT *rOp) {
    if (lOp->type == INT)
        printf("Warning: Right Operand Implicit Contraction\n");
    else
        printf("Warning: Right Operand Implicit Expansion\n");

    if (lOp->type == INT)
        printf("    Left Operand: %d\n", lOp->val.i);
    else
        printf("    Left Operand: %f\n", lOp->val.f);

    if (rOp->type == INT)
        printf("    Right Operand: %d\n", rOp->val.i);
    else
        printf("    Right Operand: %f\n", rOp->val.f);
    
    printf("    Right Operand Index: %lu\n", token_s_idx);
}

void print_error(char *exp_val) {
    printf("Syntax Error in idx: %lu - Character: %c\n", buf_idx - 1, buffer[buf_idx - 1]);
    printf("    Now Token: %s\n", print_token[now_token]);
    printf("    Expected: < %s >\n", exp_val);
}

void rewind_buffer() {
    buf_idx = 0;
}