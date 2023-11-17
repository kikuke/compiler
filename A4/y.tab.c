/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include <stdio.h>
#include "type.h"
#include "support.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;
extern char *yytext;

#line 87 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 261,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    PLUSPLUS = 266,                /* PLUSPLUS  */
    MINUSMINUS = 267,              /* MINUSMINUS  */
    AMP = 268,                     /* AMP  */
    BARBAR = 269,                  /* BARBAR  */
    AMPAMP = 270,                  /* AMPAMP  */
    ARROW = 271,                   /* ARROW  */
    SEMICOLON = 272,               /* SEMICOLON  */
    LSS = 273,                     /* LSS  */
    GTR = 274,                     /* GTR  */
    LEQ = 275,                     /* LEQ  */
    GEQ = 276,                     /* GEQ  */
    EQL = 277,                     /* EQL  */
    NEQ = 278,                     /* NEQ  */
    DOTDOTDOT = 279,               /* DOTDOTDOT  */
    LP = 280,                      /* LP  */
    RP = 281,                      /* RP  */
    LB = 282,                      /* LB  */
    RB = 283,                      /* RB  */
    LR = 284,                      /* LR  */
    RR = 285,                      /* RR  */
    PERIOD = 286,                  /* PERIOD  */
    COMMA = 287,                   /* COMMA  */
    EXCL = 288,                    /* EXCL  */
    STAR = 289,                    /* STAR  */
    SLASH = 290,                   /* SLASH  */
    PERCENT = 291,                 /* PERCENT  */
    ASSIGN = 292,                  /* ASSIGN  */
    COLON = 293,                   /* COLON  */
    AUTO_SYM = 294,                /* AUTO_SYM  */
    STATIC_SYM = 295,              /* STATIC_SYM  */
    TYPEDEF_SYM = 296,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 297,              /* STRUCT_SYM  */
    ENUM_SYM = 298,                /* ENUM_SYM  */
    SIZEOF_SYM = 299,              /* SIZEOF_SYM  */
    UNION_SYM = 300,               /* UNION_SYM  */
    IF_SYM = 301,                  /* IF_SYM  */
    ELSE_SYM = 302,                /* ELSE_SYM  */
    WHILE_SYM = 303,               /* WHILE_SYM  */
    DO_SYM = 304,                  /* DO_SYM  */
    FOR_SYM = 305,                 /* FOR_SYM  */
    CONTINUE_SYM = 306,            /* CONTINUE_SYM  */
    BREAK_SYM = 307,               /* BREAK_SYM  */
    RETURN_SYM = 308,              /* RETURN_SYM  */
    SWITCH_SYM = 309,              /* SWITCH_SYM  */
    CASE_SYM = 310,                /* CASE_SYM  */
    DEFAULT_SYM = 311              /* DEFAULT_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_PLUSPLUS = 11,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 12,                /* MINUSMINUS  */
  YYSYMBOL_AMP = 13,                       /* AMP  */
  YYSYMBOL_BARBAR = 14,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 15,                    /* AMPAMP  */
  YYSYMBOL_ARROW = 16,                     /* ARROW  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_LSS = 18,                       /* LSS  */
  YYSYMBOL_GTR = 19,                       /* GTR  */
  YYSYMBOL_LEQ = 20,                       /* LEQ  */
  YYSYMBOL_GEQ = 21,                       /* GEQ  */
  YYSYMBOL_EQL = 22,                       /* EQL  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_DOTDOTDOT = 24,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 25,                        /* LP  */
  YYSYMBOL_RP = 26,                        /* RP  */
  YYSYMBOL_LB = 27,                        /* LB  */
  YYSYMBOL_RB = 28,                        /* RB  */
  YYSYMBOL_LR = 29,                        /* LR  */
  YYSYMBOL_RR = 30,                        /* RR  */
  YYSYMBOL_PERIOD = 31,                    /* PERIOD  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_EXCL = 33,                      /* EXCL  */
  YYSYMBOL_STAR = 34,                      /* STAR  */
  YYSYMBOL_SLASH = 35,                     /* SLASH  */
  YYSYMBOL_PERCENT = 36,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 37,                    /* ASSIGN  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_AUTO_SYM = 39,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 40,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 41,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 42,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 43,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 44,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 45,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 46,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 47,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 48,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 49,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 50,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 51,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 52,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 53,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 54,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 55,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 56,               /* DEFAULT_SYM  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_translate_unit = 59,            /* translate_unit  */
  YYSYMBOL_external_declaration = 60,      /* external_declaration  */
  YYSYMBOL_function_definition = 61,       /* function_definition  */
  YYSYMBOL_62_1 = 62,                      /* @1  */
  YYSYMBOL_declaration_list_opt = 63,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 64,          /* declaration_list  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 66,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 67,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 68,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 69,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 70,           /* init_declarator  */
  YYSYMBOL_initializer = 71,               /* initializer  */
  YYSYMBOL_initializer_list = 72,          /* initializer_list  */
  YYSYMBOL_type_specifier = 73,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 74,     /* struct_type_specifier  */
  YYSYMBOL_75_2 = 75,                      /* @2  */
  YYSYMBOL_76_3 = 76,                      /* @3  */
  YYSYMBOL_77_4 = 77,                      /* @4  */
  YYSYMBOL_78_5 = 78,                      /* @5  */
  YYSYMBOL_struct_or_union = 79,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 80,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 81,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 82,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 83,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 84,       /* enum_type_specifier  */
  YYSYMBOL_85_6 = 85,                      /* @6  */
  YYSYMBOL_86_7 = 86,                      /* @7  */
  YYSYMBOL_enumerator_list = 87,           /* enumerator_list  */
  YYSYMBOL_enumerator = 88,                /* enumerator  */
  YYSYMBOL_89_8 = 89,                      /* @8  */
  YYSYMBOL_declarator = 90,                /* declarator  */
  YYSYMBOL_pointer = 91,                   /* pointer  */
  YYSYMBOL_direct_declarator = 92,         /* direct_declarator  */
  YYSYMBOL_93_9 = 93,                      /* @9  */
  YYSYMBOL_parameter_type_list_opt = 94,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 95,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 96,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 97,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 98,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 99,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 100, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 101,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_labeled_statement = 104,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 105,       /* compound_statement  */
  YYSYMBOL_106_10 = 106,                   /* @10  */
  YYSYMBOL_expression_statement = 107,     /* expression_statement  */
  YYSYMBOL_selection_statement = 108,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 109,      /* iteration_statement  */
  YYSYMBOL_for_expression = 110,           /* for_expression  */
  YYSYMBOL_expression_opt = 111,           /* expression_opt  */
  YYSYMBOL_jump_statement = 112,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 113,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 114,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 115,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_comma_expression = 118,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 119,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 120,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 121,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 122,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 123,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 124,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 125,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 126,      /* equality_expression  */
  YYSYMBOL_relational_expression = 127,    /* relational_expression  */
  YYSYMBOL_shift_expression = 128,         /* shift_expression  */
  YYSYMBOL_additive_expression = 129,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 130, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 131,          /* cast_expression  */
  YYSYMBOL_unary_expression = 132,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 133,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 134,       /* primary_expression  */
  YYSYMBOL_type_name = 135                 /* type_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    27,    28,    32,    33,    37,    37,    41,
      42,    46,    47,    51,    55,    56,    57,    58,    62,    63,
      64,    68,    69,    73,    74,    78,    79,    83,    84,    88,
      89,    93,    94,    95,    99,    99,    99,   100,   100,   100,
     101,   105,   106,   110,   111,   115,   119,   120,   124,   128,
     128,   129,   129,   130,   134,   135,   139,   140,   140,   144,
     145,   149,   150,   154,   155,   156,   157,   157,   161,   162,
     166,   167,   171,   172,   176,   177,   181,   182,   186,   187,
     188,   192,   193,   194,   195,   196,   200,   201,   205,   206,
     210,   211,   212,   213,   214,   215,   219,   220,   224,   224,
     228,   229,   233,   234,   235,   239,   240,   241,   245,   249,
     250,   254,   255,   256,   260,   261,   265,   266,   270,   271,
     275,   279,   283,   287,   288,   292,   296,   297,   301,   302,
     306,   310,   314,   318,   319,   320,   324,   325,   326,   327,
     328,   332,   336,   337,   338,   342,   343,   344,   345,   349,
     350,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   367,   368,   369,   370,   371,   372,   373,   377,   378,
     379,   380,   381,   382,   386
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS",
  "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB",
  "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "$accept", "program",
  "translate_unit", "external_declaration", "function_definition", "@1",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@2", "@3", "@4", "@5", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@6", "@7", "enumerator_list", "enumerator", "@8", "declarator",
  "pointer", "direct_declarator", "@9", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@10",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     112,  -223,  -223,  -223,  -223,  -223,    25,  -223,    35,   112,
    -223,  -223,  -223,    54,   112,   112,  -223,    41,  -223,    27,
      56,  -223,  -223,  -223,    54,    80,    72,    99,  -223,    43,
      88,     6,  -223,  -223,   120,   127,   131,   166,   139,  -223,
    -223,    54,   325,   143,     6,  -223,   365,   152,  -223,   166,
     147,    98,  -223,  -223,  -223,   156,  -223,  -223,  -223,  -223,
    -223,   365,   365,   405,   405,   365,   261,   325,   365,   365,
     445,  -223,  -223,  -223,  -223,  -223,  -223,   194,   210,  -223,
    -223,  -223,    38,   104,  -223,   129,   107,  -223,   172,   218,
    -223,  -223,  -223,   112,   199,  -223,  -223,    33,   158,   185,
    -223,   166,  -223,  -223,  -223,   365,  -223,  -223,  -223,    59,
     202,   209,  -223,   162,  -223,  -223,   261,  -223,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,  -223,  -223,   234,   365,   365,   235,   112,   164,
     213,  -223,   214,  -223,  -223,    33,    54,    28,  -223,  -223,
     365,  -223,     9,   365,   180,  -223,  -223,   196,  -223,   365,
    -223,   325,   216,   210,  -223,   104,   104,  -223,  -223,  -223,
    -223,   107,   107,  -223,  -223,  -223,  -223,  -223,   221,   220,
    -223,   222,  -223,   207,   112,  -223,    54,   284,  -223,   134,
    -223,  -223,   105,   128,    60,  -223,  -223,  -223,  -223,  -223,
     228,   249,   248,   196,   112,   365,  -223,  -223,  -223,  -223,
     365,  -223,  -223,   223,   252,   207,   253,   262,   263,   365,
     256,   365,   244,   254,   207,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   266,  -223,  -223,  -223,  -223,  -223,    54,  -223,
    -223,  -223,   259,   264,  -223,   365,   365,   241,   365,  -223,
    -223,   273,  -223,   365,   255,   207,  -223,  -223,  -223,  -223,
    -223,  -223,   265,   270,   272,   281,   282,  -223,   286,   207,
    -223,   207,   207,   365,   207,   365,   207,  -223,   251,  -223,
     287,  -223,   291,  -223,   207,   293,   365,  -223,  -223,  -223
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    33,    18,    19,    20,    41,    51,    42,     0,     2,
       3,     5,     6,    21,    15,    14,    31,    37,    32,    53,
       0,     1,     4,    63,     0,    61,     0,    22,    23,    25,
       0,    60,    17,    16,    40,     0,     0,     0,     0,    62,
      13,     0,     0,     0,    59,    66,   118,     0,    38,     0,
      56,     0,    54,    64,    24,    25,   168,   170,   169,   171,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,   120,   121,   122,   123,   125,   126,   128,
     130,   131,   132,   133,   136,   141,   142,   145,   149,   151,
     161,    98,     8,    68,     0,   119,    35,     0,     0,     0,
      52,     0,   158,   149,   157,     0,   152,   153,   154,    76,
       0,     0,    29,     0,   156,   155,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,     0,   114,     0,     0,     9,    76,
       0,    69,    70,    72,    65,     0,     0,     0,    43,    50,
       0,    55,    68,   118,    79,   174,    77,    78,   173,     0,
      28,     0,     0,   127,   129,   134,   135,   137,   138,   139,
     140,   143,   144,   146,   147,   148,   124,   165,     0,   115,
     116,     0,   164,    86,    10,    11,    21,    68,    74,    79,
      75,    67,     0,     0,     0,    46,    48,    39,    44,    58,
       0,     0,     0,    80,    68,   118,   150,    30,   160,   163,
       0,   162,   100,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,    87,    88,    90,    91,    92,    93,
      94,    95,     0,    12,    71,    73,    36,    45,     0,    84,
      81,    82,     0,     0,   117,     0,     0,     0,   109,   112,
     113,     0,   110,     0,     0,     0,    99,    89,   101,    47,
      85,    83,     0,     0,     0,     0,     0,   111,     0,     0,
      97,     0,     0,     0,     0,   109,     0,    96,   102,   105,
       0,   107,     0,   104,     0,     0,   109,   103,   106,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,   305,  -223,  -223,  -223,  -223,  -129,     2,
    -223,  -223,  -223,   274,   -44,  -223,   -78,  -223,  -223,  -223,
    -223,  -223,  -223,   171,  -127,  -223,    79,  -223,  -223,  -223,
     271,   238,  -223,   -12,   -19,   -25,  -223,   -83,  -223,  -223,
     130,   182,  -125,  -124,  -223,  -223,   -89,  -223,   276,  -223,
    -223,  -223,  -223,  -223,  -222,  -223,  -223,  -223,  -146,   -43,
     -42,  -223,  -123,  -223,  -223,   224,   225,  -223,  -223,  -223,
      55,    77,  -223,    70,   -47,   -23,  -223,  -223,   227
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    43,   183,   184,    12,   139,
      14,    26,    27,    28,    71,   113,    15,    16,    47,   145,
      35,    97,    17,   147,   148,   194,   195,    18,    36,    20,
      51,    52,    99,    38,    30,    31,    93,   200,   141,   142,
     143,   155,   156,   157,   223,   224,   225,   226,   227,   138,
     228,   229,   230,   265,   251,   231,   178,   179,    94,    72,
     232,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    29,    13,    95,    73,    44,    39,   202,   176,   185,
     140,    13,   180,     1,   102,   104,    32,    33,   108,   146,
     198,   114,   115,   112,   110,    73,   266,   201,    19,    55,
     203,    45,     1,    46,   152,    21,   153,     1,   103,   103,
     106,   107,   103,    25,    34,   103,   103,   117,     2,     3,
       4,     5,     6,   282,     7,   233,   -49,    23,   197,   243,
     120,   121,   201,   110,   289,   203,   198,   146,   109,   146,
       5,     6,    -7,     7,   110,     5,     6,   237,     7,    24,
      42,   173,   174,   175,   152,    37,   153,   244,    25,    40,
     154,    23,   238,    25,   181,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   199,     1,
      95,    73,   206,    24,    25,   146,     1,   207,   109,    73,
     189,   242,   122,   123,   124,   125,   247,   188,   100,   234,
     101,    41,     1,   154,   196,   257,   103,    23,   126,   127,
     186,   128,   129,   130,     2,     3,     4,     5,     6,   -34,
       7,     2,     3,     4,     5,     6,    48,     7,   236,   187,
      49,   153,    95,    73,    44,    53,   270,    23,   189,    50,
       5,     6,    91,     7,    55,   165,   166,   252,   254,    73,
     277,    96,   278,   279,   -57,   281,   186,   283,   149,   187,
     101,   153,   160,    42,   161,   287,   171,   172,    25,   167,
     168,   169,   170,   262,   263,   152,   252,   153,   118,   131,
      56,   268,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   204,   150,   205,   212,   119,   196,   144,   158,   132,
     133,   280,    66,   252,   134,   159,    91,   177,   182,   191,
      68,    69,   208,   135,   252,   136,   192,   209,   245,   137,
     211,    70,   210,   213,   239,   214,   215,   216,   217,   218,
     219,   220,   221,   222,    56,     1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   240,   241,   246,   248,   249,
     250,   253,   255,   258,   256,   260,    66,    23,     1,   264,
     267,   271,   261,   269,    68,    69,   272,   273,   284,   275,
       2,     3,     4,     5,     6,    70,     7,   274,   286,   187,
     288,   153,   276,   285,    22,    54,   193,   259,    25,    92,
      98,   190,   235,     2,     3,     4,     5,     6,    56,     7,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   151,
       0,     0,   163,   162,   164,     0,     0,     0,     0,     0,
      66,     0,     0,     0,    67,     0,     0,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    70,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    70,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    70,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      42,    13,     0,    46,    46,    30,    25,   153,   131,   138,
      93,     9,   135,     4,    61,    62,    14,    15,    65,    97,
     147,    68,    69,    67,    66,    67,   248,   152,     3,    41,
     154,    25,     4,    27,    25,     0,    27,     4,    61,    62,
      63,    64,    65,    34,     3,    68,    69,    70,    39,    40,
      41,    42,    43,   275,    45,   184,    29,     3,    30,   205,
      22,    23,   187,   105,   286,   189,   193,   145,    66,   147,
      42,    43,    29,    45,   116,    42,    43,    17,    45,    25,
      37,   128,   129,   130,    25,    29,    27,   210,    34,    17,
     109,     3,    32,    34,   136,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   150,     4,
     153,   153,   159,    25,    34,   193,     4,   161,   116,   161,
     139,   204,    18,    19,    20,    21,   215,   139,    30,    24,
      32,    32,     4,   152,   146,   224,   159,     3,     9,    10,
     138,    34,    35,    36,    39,    40,    41,    42,    43,    29,
      45,    39,    40,    41,    42,    43,    29,    45,    30,    25,
      29,    27,   205,   205,   189,    26,   255,     3,   187,     3,
      42,    43,    29,    45,   186,   120,   121,   219,   221,   221,
     269,    29,   271,   272,    37,   274,   184,   276,    30,    25,
      32,    27,    30,    37,    32,   284,   126,   127,    34,   122,
     123,   124,   125,   245,   246,    25,   248,    27,    14,    37,
       3,   253,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    25,    37,    27,    17,    15,   238,    28,    26,    11,
      12,   273,    25,   275,    16,    26,    29,     3,     3,    26,
      33,    34,    26,    25,   286,    27,    32,    26,    25,    31,
      28,    44,    32,    46,    26,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    26,    28,    25,    25,    17,
      17,    25,    38,    17,    30,    26,    25,     3,     4,    48,
      17,    26,    28,    38,    33,    34,    26,    25,    47,    17,
      39,    40,    41,    42,    43,    44,    45,    26,    17,    25,
      17,    27,    26,    26,     9,    41,   145,   238,    34,    43,
      49,   139,   192,    39,    40,    41,    42,    43,     3,    45,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   101,
      -1,    -1,   118,   116,   119,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    44,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    44,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    44,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    39,    40,    41,    42,    43,    45,    58,    59,
      60,    61,    65,    66,    67,    73,    74,    79,    84,     3,
      86,     0,    60,     3,    25,    34,    68,    69,    70,    90,
      91,    92,    66,    66,     3,    77,    85,    29,    90,    91,
      17,    32,    37,    62,    92,    25,    27,    75,    29,    29,
       3,    87,    88,    26,    70,    90,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    25,    29,    33,    34,
      44,    71,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,    29,   105,    93,   115,   116,    29,    78,    87,    89,
      30,    32,   131,   132,   131,    25,   132,   132,   131,    66,
     117,   135,    71,    72,   131,   131,    25,   132,    14,    15,
      22,    23,    18,    19,    20,    21,     9,    10,    34,    35,
      36,    37,    11,    12,    16,    25,    27,    31,   106,    66,
      94,    95,    96,    97,    28,    76,    73,    80,    81,    30,
      37,    88,    25,    27,    91,    98,    99,   100,    26,    26,
      30,    32,   135,   122,   123,   127,   127,   128,   128,   128,
     128,   130,   130,   131,   131,   131,   119,     3,   113,   114,
     119,   117,     3,    63,    64,    65,    66,    25,    90,    91,
      98,    26,    32,    80,    82,    83,    90,    30,    81,   117,
      94,    99,   115,   100,    25,    27,   131,    71,    26,    26,
      32,    28,    17,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   101,   102,   103,   104,   105,   107,   108,
     109,   112,   117,    65,    24,    97,    30,    17,    32,    26,
      26,    28,    94,   115,   119,    25,    25,   103,    25,    17,
      17,   111,   117,    25,   116,    38,    30,   103,    17,    83,
      26,    28,   117,   117,    48,   110,   111,    17,   117,    38,
     103,    26,    26,    25,    26,    17,    26,   103,   103,   103,
     117,   103,   111,   103,    47,    26,    17,   103,    17,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      63,    64,    64,    65,    66,    66,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    75,    76,    74,    77,    78,    74,
      74,    79,    79,    80,    80,    81,    82,    82,    83,    85,
      84,    86,    84,    84,    87,    87,    88,    89,    88,    90,
      90,    91,    91,    92,    92,    92,    93,    92,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   106,   105,
     107,   107,   108,   108,   108,   109,   109,   109,   110,   111,
     111,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   117,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   124,   125,   126,   126,   126,   127,   127,   127,   127,
     127,   128,   129,   129,   129,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       1,     1,     2,     3,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     0,     0,     7,     0,     0,     6,
       2,     1,     1,     1,     2,     3,     1,     3,     1,     0,
       6,     0,     5,     2,     1,     3,     1,     0,     4,     2,
       1,     1,     2,     1,     3,     4,     0,     5,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     4,     3,     4,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     5,
       1,     2,     5,     7,     5,     5,     7,     5,     5,     0,
       1,     3,     2,     2,     0,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     3,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     4,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: translate_unit  */
#line 23 "yacc.y"
                     {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1631 "y.tab.c"
    break;

  case 3: /* translate_unit: external_declaration  */
#line 27 "yacc.y"
                           {yyval = yyvsp[0];}
#line 1637 "y.tab.c"
    break;

  case 4: /* translate_unit: translate_unit external_declaration  */
#line 28 "yacc.y"
                                          {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1643 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 32 "yacc.y"
                          {yyval = yyvsp[0];}
#line 1649 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 33 "yacc.y"
                  {yyval = yyvsp[0];}
#line 1655 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 37 "yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1661 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 37 "yacc.y"
                                                                                                          {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1667 "y.tab.c"
    break;

  case 9: /* declaration_list_opt: %empty  */
#line 41 "yacc.y"
      {yyval = NIL;}
#line 1673 "y.tab.c"
    break;

  case 10: /* declaration_list_opt: declaration_list  */
#line 42 "yacc.y"
                       {yyval = yyvsp[0];}
#line 1679 "y.tab.c"
    break;

  case 11: /* declaration_list: declaration  */
#line 46 "yacc.y"
                  {yyval = yyvsp[0];}
#line 1685 "y.tab.c"
    break;

  case 12: /* declaration_list: declaration_list declaration  */
#line 47 "yacc.y"
                                   {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1691 "y.tab.c"
    break;

  case 13: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 51 "yacc.y"
                                                                {yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1697 "y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier  */
#line 55 "yacc.y"
                     {yyval=makeSpecifier(yyvsp[0], 0);}
#line 1703 "y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier  */
#line 56 "yacc.y"
                              {yyval=makeSpecifier(0, yyvsp[0]);}
#line 1709 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 57 "yacc.y"
                                            {yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1715 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 58 "yacc.y"
                                                     {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1721 "y.tab.c"
    break;

  case 18: /* storage_class_specifier: AUTO_SYM  */
#line 62 "yacc.y"
               {yyval=S_AUTO;}
#line 1727 "y.tab.c"
    break;

  case 19: /* storage_class_specifier: STATIC_SYM  */
#line 63 "yacc.y"
                 {yyval=S_STATIC;}
#line 1733 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: TYPEDEF_SYM  */
#line 64 "yacc.y"
                  {yyval=S_TYPEDEF;}
#line 1739 "y.tab.c"
    break;

  case 21: /* init_declarator_list_opt: %empty  */
#line 68 "yacc.y"
      {yyval=makeDummyIdentifier();}
#line 1745 "y.tab.c"
    break;

  case 22: /* init_declarator_list_opt: init_declarator_list  */
#line 69 "yacc.y"
                           {yyval=yyvsp[0];}
#line 1751 "y.tab.c"
    break;

  case 23: /* init_declarator_list: init_declarator  */
#line 73 "yacc.y"
                      {yyval=yyvsp[0];}
#line 1757 "y.tab.c"
    break;

  case 24: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 74 "yacc.y"
                                                 {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1763 "y.tab.c"
    break;

  case 25: /* init_declarator: declarator  */
#line 78 "yacc.y"
                 {yyval=yyvsp[0];}
#line 1769 "y.tab.c"
    break;

  case 26: /* init_declarator: declarator ASSIGN initializer  */
#line 79 "yacc.y"
                                    {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1775 "y.tab.c"
    break;

  case 27: /* initializer: constant_expression  */
#line 83 "yacc.y"
                          {yyval=makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1781 "y.tab.c"
    break;

  case 28: /* initializer: LR initializer_list RR  */
#line 84 "yacc.y"
                             {yyval=yyvsp[-1];}
#line 1787 "y.tab.c"
    break;

  case 29: /* initializer_list: initializer  */
#line 88 "yacc.y"
                  {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 1793 "y.tab.c"
    break;

  case 30: /* initializer_list: initializer_list COMMA initializer  */
#line 89 "yacc.y"
                                         {yyval=makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1799 "y.tab.c"
    break;

  case 31: /* type_specifier: struct_type_specifier  */
#line 93 "yacc.y"
                            {yyval = yyvsp[0];}
#line 1805 "y.tab.c"
    break;

  case 32: /* type_specifier: enum_type_specifier  */
#line 94 "yacc.y"
                          {yyval = yyvsp[0];}
#line 1811 "y.tab.c"
    break;

  case 33: /* type_specifier: TYPE_IDENTIFIER  */
#line 95 "yacc.y"
                      {yyval = yyvsp[0];}
#line 1817 "y.tab.c"
    break;

  case 34: /* @2: %empty  */
#line 99 "yacc.y"
                                 {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1823 "y.tab.c"
    break;

  case 35: /* @3: %empty  */
#line 99 "yacc.y"
                                                                                           {yyval=current_id; current_level++;}
#line 1829 "y.tab.c"
    break;

  case 36: /* struct_type_specifier: struct_or_union IDENTIFIER @2 LR @3 struct_declaration_list RR  */
#line 99 "yacc.y"
                                                                                                                                                        {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_level=yyvsp[-2];}
#line 1835 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 100 "yacc.y"
                      {yyval=makeType(yyvsp[0]);}
#line 1841 "y.tab.c"
    break;

  case 38: /* @5: %empty  */
#line 100 "yacc.y"
                                            {yyval=current_id; current_level++;}
#line 1847 "y.tab.c"
    break;

  case 39: /* struct_type_specifier: struct_or_union @4 LR @5 struct_declaration_list RR  */
#line 100 "yacc.y"
                                                                                                         {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1853 "y.tab.c"
    break;

  case 40: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 101 "yacc.y"
                                 {yyval=getTypeOfStructOrEnumReIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1859 "y.tab.c"
    break;

  case 41: /* struct_or_union: STRUCT_SYM  */
#line 105 "yacc.y"
                 {yyval=T_STRUCT;}
#line 1865 "y.tab.c"
    break;

  case 42: /* struct_or_union: UNION_SYM  */
#line 106 "yacc.y"
                {yyval=T_UNION;}
#line 1871 "y.tab.c"
    break;

  case 43: /* struct_declaration_list: struct_declaration  */
#line 110 "yacc.y"
                         {yyval=yyvsp[0];}
#line 1877 "y.tab.c"
    break;

  case 44: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 111 "yacc.y"
                                                 {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1883 "y.tab.c"
    break;

  case 45: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 115 "yacc.y"
                                                      {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1889 "y.tab.c"
    break;

  case 46: /* struct_declarator_list: struct_declarator  */
#line 119 "yacc.y"
                        {yyval=yyvsp[0];}
#line 1895 "y.tab.c"
    break;

  case 47: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 120 "yacc.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1901 "y.tab.c"
    break;

  case 48: /* struct_declarator: declarator  */
#line 124 "yacc.y"
                 {yyval=yyvsp[0];}
#line 1907 "y.tab.c"
    break;

  case 49: /* @6: %empty  */
#line 128 "yacc.y"
                          {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1913 "y.tab.c"
    break;

  case 50: /* enum_type_specifier: ENUM_SYM IDENTIFIER @6 LR enumerator_list RR  */
#line 128 "yacc.y"
                                                                                                         {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1919 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 129 "yacc.y"
               {yyval=makeType(T_ENUM);}
#line 1925 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM @7 LR enumerator_list RR  */
#line 129 "yacc.y"
                                                            {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1931 "y.tab.c"
    break;

  case 53: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 130 "yacc.y"
                          {yyval=getTypeOfStructOrEnumReIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1937 "y.tab.c"
    break;

  case 54: /* enumerator_list: enumerator  */
#line 134 "yacc.y"
                 {yyval=yyvsp[0];}
#line 1943 "y.tab.c"
    break;

  case 55: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 135 "yacc.y"
                                       {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1949 "y.tab.c"
    break;

  case 56: /* enumerator: IDENTIFIER  */
#line 139 "yacc.y"
                 {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1955 "y.tab.c"
    break;

  case 57: /* @8: %empty  */
#line 140 "yacc.y"
                 {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1961 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER @8 ASSIGN expression  */
#line 140 "yacc.y"
                                                                                                {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1967 "y.tab.c"
    break;

  case 59: /* declarator: pointer direct_declarator  */
#line 144 "yacc.y"
                                {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1973 "y.tab.c"
    break;

  case 60: /* declarator: direct_declarator  */
#line 145 "yacc.y"
                        {yyval=yyvsp[0];}
#line 1979 "y.tab.c"
    break;

  case 61: /* pointer: STAR  */
#line 149 "yacc.y"
           {yyval=makeType(T_POINTER);}
#line 1985 "y.tab.c"
    break;

  case 62: /* pointer: STAR pointer  */
#line 150 "yacc.y"
                   {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1991 "y.tab.c"
    break;

  case 63: /* direct_declarator: IDENTIFIER  */
#line 154 "yacc.y"
                 {yyval=makeIdentifier(yyvsp[0]);}
#line 1997 "y.tab.c"
    break;

  case 64: /* direct_declarator: LP declarator RP  */
#line 155 "yacc.y"
                       {yyval=yyvsp[-1];}
#line 2003 "y.tab.c"
    break;

  case 65: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 156 "yacc.y"
                                                      {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2009 "y.tab.c"
    break;

  case 66: /* @9: %empty  */
#line 157 "yacc.y"
                           {yyval=current_id; current_level++;}
#line 2015 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LP @9 parameter_type_list_opt RP  */
#line 157 "yacc.y"
                                                                                        {checkForwardReference(); current_id=yyvsp[-2], current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2021 "y.tab.c"
    break;

  case 68: /* parameter_type_list_opt: %empty  */
#line 161 "yacc.y"
      {yyval=NIL;}
#line 2027 "y.tab.c"
    break;

  case 69: /* parameter_type_list_opt: parameter_type_list  */
#line 162 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2033 "y.tab.c"
    break;

  case 70: /* parameter_type_list: parameter_list  */
#line 166 "yacc.y"
                     {checkVoidParamName(yyvsp[0]); yyval=yyvsp[0];}
#line 2039 "y.tab.c"
    break;

  case 71: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 167 "yacc.y"
                                     {checkVoidParam(yyvsp[-2]); yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2045 "y.tab.c"
    break;

  case 72: /* parameter_list: parameter_declaration  */
#line 171 "yacc.y"
                            {yyval=yyvsp[0];}
#line 2051 "y.tab.c"
    break;

  case 73: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 172 "yacc.y"
                                                 {checkVoidParam(yyvsp[-2]); yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2057 "y.tab.c"
    break;

  case 74: /* parameter_declaration: declaration_specifiers declarator  */
#line 176 "yacc.y"
                                        {yyval=setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2063 "y.tab.c"
    break;

  case 75: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 177 "yacc.y"
                                                     {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2069 "y.tab.c"
    break;

  case 76: /* abstract_declarator_opt: %empty  */
#line 181 "yacc.y"
      {yyval=NIL;}
#line 2075 "y.tab.c"
    break;

  case 77: /* abstract_declarator_opt: abstract_declarator  */
#line 182 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2081 "y.tab.c"
    break;

  case 78: /* abstract_declarator: direct_abstract_declarator  */
#line 186 "yacc.y"
                                 {yyval=yyvsp[0];}
#line 2087 "y.tab.c"
    break;

  case 79: /* abstract_declarator: pointer  */
#line 187 "yacc.y"
              {yyval=yyvsp[0];}
#line 2093 "y.tab.c"
    break;

  case 80: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 188 "yacc.y"
                                         {yyval=setTypeElementType(yyvsp[0], yyvsp[-1]);}
#line 2099 "y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 192 "yacc.y"
                                {yyval=yyvsp[-1];}
#line 2105 "y.tab.c"
    break;

  case 82: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 193 "yacc.y"
                                    {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2111 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 194 "yacc.y"
                                                               {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2117 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 195 "yacc.y"
                                    {yyval=setTypeField(makeType(T_FUNC), yyvsp[-1]);}
#line 2123 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 196 "yacc.y"
                                                               {yyval=setTypeElementType(yyvsp[-3], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2129 "y.tab.c"
    break;

  case 86: /* statement_list_opt: %empty  */
#line 200 "yacc.y"
      {yyval=makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2135 "y.tab.c"
    break;

  case 87: /* statement_list_opt: statement_list  */
#line 201 "yacc.y"
                     {yyval=yyvsp[0];}
#line 2141 "y.tab.c"
    break;

  case 88: /* statement_list: statement  */
#line 205 "yacc.y"
                {yyval=makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2147 "y.tab.c"
    break;

  case 89: /* statement_list: statement_list statement  */
#line 206 "yacc.y"
                               {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2153 "y.tab.c"
    break;

  case 90: /* statement: labeled_statement  */
#line 210 "yacc.y"
                        {yyval=yyvsp[0];}
#line 2159 "y.tab.c"
    break;

  case 91: /* statement: compound_statement  */
#line 211 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2165 "y.tab.c"
    break;

  case 92: /* statement: expression_statement  */
#line 212 "yacc.y"
                           {yyval=yyvsp[0];}
#line 2171 "y.tab.c"
    break;

  case 93: /* statement: selection_statement  */
#line 213 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2177 "y.tab.c"
    break;

  case 94: /* statement: iteration_statement  */
#line 214 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2183 "y.tab.c"
    break;

  case 95: /* statement: jump_statement  */
#line 215 "yacc.y"
                     {yyval=yyvsp[0];}
#line 2189 "y.tab.c"
    break;

  case 96: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 219 "yacc.y"
                                                   {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2195 "y.tab.c"
    break;

  case 97: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 220 "yacc.y"
                                  {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2201 "y.tab.c"
    break;

  case 98: /* @10: %empty  */
#line 224 "yacc.y"
         {yyval=current_id; current_level++;}
#line 2207 "y.tab.c"
    break;

  case 99: /* compound_statement: LR @10 declaration_list_opt statement_list_opt RR  */
#line 224 "yacc.y"
                                                                                      {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2213 "y.tab.c"
    break;

  case 100: /* expression_statement: SEMICOLON  */
#line 228 "yacc.y"
                {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2219 "y.tab.c"
    break;

  case 101: /* expression_statement: expression SEMICOLON  */
#line 229 "yacc.y"
                           {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2225 "y.tab.c"
    break;

  case 102: /* selection_statement: IF_SYM LP expression RP statement  */
#line 233 "yacc.y"
                                        {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2231 "y.tab.c"
    break;

  case 103: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 234 "yacc.y"
                                                           {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2237 "y.tab.c"
    break;

  case 104: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 235 "yacc.y"
                                            {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2243 "y.tab.c"
    break;

  case 105: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 239 "yacc.y"
                                           {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2249 "y.tab.c"
    break;

  case 106: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 240 "yacc.y"
                                                            {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2255 "y.tab.c"
    break;

  case 107: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 241 "yacc.y"
                                             {yyval=makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2261 "y.tab.c"
    break;

  case 108: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 245 "yacc.y"
                                                                       {yyval=makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2267 "y.tab.c"
    break;

  case 109: /* expression_opt: %empty  */
#line 249 "yacc.y"
                  {yyval=NIL;}
#line 2273 "y.tab.c"
    break;

  case 110: /* expression_opt: expression  */
#line 250 "yacc.y"
                 {yyval=yyvsp[0];}
#line 2279 "y.tab.c"
    break;

  case 111: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 254 "yacc.y"
                                          {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2285 "y.tab.c"
    break;

  case 112: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 255 "yacc.y"
                             {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2291 "y.tab.c"
    break;

  case 113: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 256 "yacc.y"
                          {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2297 "y.tab.c"
    break;

  case 114: /* arg_expression_list_opt: %empty  */
#line 260 "yacc.y"
      {yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2303 "y.tab.c"
    break;

  case 115: /* arg_expression_list_opt: arg_expression_list  */
#line 261 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2309 "y.tab.c"
    break;

  case 116: /* arg_expression_list: assignment_expression  */
#line 265 "yacc.y"
                            {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2315 "y.tab.c"
    break;

  case 117: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 266 "yacc.y"
                                                      {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2321 "y.tab.c"
    break;

  case 118: /* constant_expression_opt: %empty  */
#line 270 "yacc.y"
      {yyval=NIL;}
#line 2327 "y.tab.c"
    break;

  case 119: /* constant_expression_opt: constant_expression  */
#line 271 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2333 "y.tab.c"
    break;

  case 120: /* constant_expression: expression  */
#line 275 "yacc.y"
                 {yyval=yyvsp[0];}
#line 2339 "y.tab.c"
    break;

  case 121: /* expression: comma_expression  */
#line 279 "yacc.y"
                       {yyval=yyvsp[0];}
#line 2345 "y.tab.c"
    break;

  case 122: /* comma_expression: assignment_expression  */
#line 283 "yacc.y"
                            {yyval=yyvsp[0];}
#line 2351 "y.tab.c"
    break;

  case 123: /* assignment_expression: conditional_expression  */
#line 287 "yacc.y"
                             {yyval=yyvsp[0];}
#line 2357 "y.tab.c"
    break;

  case 124: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 288 "yacc.y"
                                                    {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2363 "y.tab.c"
    break;

  case 125: /* conditional_expression: logical_or_expression  */
#line 292 "yacc.y"
                            {yyval=yyvsp[0];}
#line 2369 "y.tab.c"
    break;

  case 126: /* logical_or_expression: logical_and_expression  */
#line 296 "yacc.y"
                             {yyval=yyvsp[0];}
#line 2375 "y.tab.c"
    break;

  case 127: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 297 "yacc.y"
                                                          {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2381 "y.tab.c"
    break;

  case 128: /* logical_and_expression: bitwise_or_expression  */
#line 301 "yacc.y"
                            {yyval=yyvsp[0];}
#line 2387 "y.tab.c"
    break;

  case 129: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 302 "yacc.y"
                                                          {yyval=makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2393 "y.tab.c"
    break;

  case 130: /* bitwise_or_expression: bitwise_xor_expression  */
#line 306 "yacc.y"
                             {yyval=yyvsp[0];}
#line 2399 "y.tab.c"
    break;

  case 131: /* bitwise_xor_expression: bitwise_and_expression  */
#line 310 "yacc.y"
                             {yyval=yyvsp[0];}
#line 2405 "y.tab.c"
    break;

  case 132: /* bitwise_and_expression: equality_expression  */
#line 314 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 133: /* equality_expression: relational_expression  */
#line 318 "yacc.y"
                            {yyval=yyvsp[0];}
#line 2417 "y.tab.c"
    break;

  case 134: /* equality_expression: equality_expression EQL relational_expression  */
#line 319 "yacc.y"
                                                    {yyval=makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2423 "y.tab.c"
    break;

  case 135: /* equality_expression: equality_expression NEQ relational_expression  */
#line 320 "yacc.y"
                                                    {yyval=makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2429 "y.tab.c"
    break;

  case 136: /* relational_expression: shift_expression  */
#line 324 "yacc.y"
                       {yyval=yyvsp[0];}
#line 2435 "y.tab.c"
    break;

  case 137: /* relational_expression: relational_expression LSS shift_expression  */
#line 325 "yacc.y"
                                                 {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2441 "y.tab.c"
    break;

  case 138: /* relational_expression: relational_expression GTR shift_expression  */
#line 326 "yacc.y"
                                                 {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2447 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LEQ shift_expression  */
#line 327 "yacc.y"
                                                 {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2453 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GEQ shift_expression  */
#line 328 "yacc.y"
                                                 {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2459 "y.tab.c"
    break;

  case 141: /* shift_expression: additive_expression  */
#line 332 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2465 "y.tab.c"
    break;

  case 142: /* additive_expression: multiplicative_expression  */
#line 336 "yacc.y"
                                {yyval=yyvsp[0];}
#line 2471 "y.tab.c"
    break;

  case 143: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 337 "yacc.y"
                                                         {yyval=makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 144: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 338 "yacc.y"
                                                          {yyval=makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2483 "y.tab.c"
    break;

  case 145: /* multiplicative_expression: cast_expression  */
#line 342 "yacc.y"
                      {yyval=yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 146: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 343 "yacc.y"
                                                     {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2495 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 344 "yacc.y"
                                                      {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2501 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 345 "yacc.y"
                                                        {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 149: /* cast_expression: unary_expression  */
#line 349 "yacc.y"
                       {yyval=yyvsp[0];}
#line 2513 "y.tab.c"
    break;

  case 150: /* cast_expression: LP type_name RP cast_expression  */
#line 350 "yacc.y"
                                      {yyval=makeNode(N_EXP_CAST, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2519 "y.tab.c"
    break;

  case 151: /* unary_expression: postfix_expression  */
#line 354 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2525 "y.tab.c"
    break;

  case 152: /* unary_expression: PLUSPLUS unary_expression  */
#line 355 "yacc.y"
                                {yyval=makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2531 "y.tab.c"
    break;

  case 153: /* unary_expression: MINUSMINUS unary_expression  */
#line 356 "yacc.y"
                                  {yyval=makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2537 "y.tab.c"
    break;

  case 154: /* unary_expression: AMP cast_expression  */
#line 357 "yacc.y"
                          {yyval=makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2543 "y.tab.c"
    break;

  case 155: /* unary_expression: STAR cast_expression  */
#line 358 "yacc.y"
                           {yyval=makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2549 "y.tab.c"
    break;

  case 156: /* unary_expression: EXCL cast_expression  */
#line 359 "yacc.y"
                           {yyval=makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2555 "y.tab.c"
    break;

  case 157: /* unary_expression: MINUS cast_expression  */
#line 360 "yacc.y"
                            {yyval=makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2561 "y.tab.c"
    break;

  case 158: /* unary_expression: PLUS cast_expression  */
#line 361 "yacc.y"
                           {yyval=makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2567 "y.tab.c"
    break;

  case 159: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 362 "yacc.y"
                                  {yyval=makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2573 "y.tab.c"
    break;

  case 160: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 363 "yacc.y"
                                 {yyval=makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2579 "y.tab.c"
    break;

  case 161: /* postfix_expression: primary_expression  */
#line 367 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2585 "y.tab.c"
    break;

  case 162: /* postfix_expression: postfix_expression LB expression RB  */
#line 368 "yacc.y"
                                          {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2591 "y.tab.c"
    break;

  case 163: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 369 "yacc.y"
                                                       {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2597 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 370 "yacc.y"
                                           {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2603 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 371 "yacc.y"
                                          {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2609 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 372 "yacc.y"
                                  {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2615 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 373 "yacc.y"
                                    {yyval=makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2621 "y.tab.c"
    break;

  case 168: /* primary_expression: IDENTIFIER  */
#line 377 "yacc.y"
                 {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2627 "y.tab.c"
    break;

  case 169: /* primary_expression: INTEGER_CONSTANT  */
#line 378 "yacc.y"
                       {yyval=makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2633 "y.tab.c"
    break;

  case 170: /* primary_expression: FLOAT_CONSTANT  */
#line 379 "yacc.y"
                     {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2639 "y.tab.c"
    break;

  case 171: /* primary_expression: CHARACTER_CONSTANT  */
#line 380 "yacc.y"
                         {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2645 "y.tab.c"
    break;

  case 172: /* primary_expression: STRING_LITERAL  */
#line 381 "yacc.y"
                     {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2651 "y.tab.c"
    break;

  case 173: /* primary_expression: LP expression RP  */
#line 382 "yacc.y"
                       {yyval=yyvsp[-1];}
#line 2657 "y.tab.c"
    break;

  case 174: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 386 "yacc.y"
                                                     {yyval=setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2663 "y.tab.c"
    break;


#line 2667 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 388 "yacc.y"


int yyerror(char *s) 
{
    syntax_err++;
    printf("line %d: %s near %s \n", line_no, s, yytext);
}

int yywrap()
{
    return 1;
}
