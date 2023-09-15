#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_BUFFER_SIZE 2048
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

void init_buffer();
void get_token();
CAL_STRUCT expression();
CAL_STRUCT term();
CAL_STRUCT factor();
void error(char *exp_val);
// s_idx는 시작주소, e_idx는 끝 바로 이후 주소
void set_now_num_int(size_t s_idx, size_t e_idx);
void set_now_num_float(size_t s_idx, size_t e_idx);

CAL_STRUCT now_num;
TOKEN now_token;

size_t buf_idx;
char buffer[MAX_BUFFER_SIZE];

void main() {
    //Todo: 주석처리 하고 차례차례 테스트해보기
    CAL_STRUCT result;

    while (strcmp(fgets(buffer, MAX_BUFFER_SIZE, stdin), EXIT_INPUT)) {
        init_buffer();

        get_token();
        result = expression();
        if (now_token != END)
            error("END");
        else {
            if (now_num.type == INT) {
                printf("RESULT: %i\n", now_num.val.i);
            } else if (now_num.type == FLT) {
                printf("RESULT: %f\n", now_num.val.f);
            }
            else {
                fputs("Undefined CAL_TYPE", stderr);
                exit(1);
            }
        }
    }

    exit(0);
}
CAL_STRUCT expression() {
    CAL_STRUCT result;
//test
        get_token();
    //result = term();
    while (now_token == PLUS || now_token == MINUS) {
        get_token();
        //result += term();
    }
    return result;
}

/*

CAL_STRUCT term() {
    CAL_STRUCT result;

    result = factor();
    while (now_token == STAR) {
        get_token();
        result *= factor();
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
            error();
    }
    else
        error();
    return result;
}
*/

void get_token() {
    char ch  = ' ';
    size_t s_idx = buf_idx;

    while (ch == ' ' || ch == '\t')
        ch = buffer[buf_idx++];

    if (isdigit(ch)) {
        // 숫자 파싱
        while (isdigit(ch))
            ch = buffer[buf_idx++];
        
        if (ch == '.') {
            // 소수인 경우
            while (isdigit(ch))
                ch = buffer[buf_idx++];
            set_now_num_float(s_idx, buf_idx);
        } else {
            // 정수인 경우
            set_now_num_int(s_idx, buf_idx);
        }

        now_token = NUMBER;
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
        error("PLUS | MINUS | STAR | DIVIDE | NUMBER | LPAREN | RPAREN");
    }
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

//Todo: warning 메시지 출력 함수
void error(char *exp_val) {
    printf("Syntax Error in idx: %lu - Character: %c\n", buf_idx - 1, buffer[buf_idx - 1]);
    printf("Now Token: %s\n", print_token[now_token]);
    printf("Expected: < %s >\n", exp_val);
}

void init_buffer() {
    buf_idx = 0;
}