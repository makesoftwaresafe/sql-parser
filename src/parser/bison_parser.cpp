/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

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

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER = 29,                 /* CHARACTER  */
  YYSYMBOL_VARYING = 30,                   /* VARYING  */
  YYSYMBOL_REAL = 31,                      /* REAL  */
  YYSYMBOL_DECIMAL = 32,                   /* DECIMAL  */
  YYSYMBOL_SPATIAL = 33,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 34,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 35,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 36,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 37,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 38,                    /* COLUMN  */
  YYSYMBOL_CREATE = 39,                    /* CREATE  */
  YYSYMBOL_DELETE = 40,                    /* DELETE  */
  YYSYMBOL_DIRECT = 41,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 43,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 44,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 45,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 46,                   /* EXTRACT  */
  YYSYMBOL_CAST = 47,                      /* CAST  */
  YYSYMBOL_FORMAT = 48,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 49,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 50,                    /* HAVING  */
  YYSYMBOL_IMPORT = 51,                    /* IMPORT  */
  YYSYMBOL_INSERT = 52,                    /* INSERT  */
  YYSYMBOL_ISNULL = 53,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 54,                    /* OFFSET  */
  YYSYMBOL_RENAME = 55,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 56,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 57,                    /* SELECT  */
  YYSYMBOL_SORTED = 58,                    /* SORTED  */
  YYSYMBOL_TABLES = 59,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 60,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 61,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 62,                    /* UPDATE  */
  YYSYMBOL_VALUES = 63,                    /* VALUES  */
  YYSYMBOL_AFTER = 64,                     /* AFTER  */
  YYSYMBOL_ALTER = 65,                     /* ALTER  */
  YYSYMBOL_CROSS = 66,                     /* CROSS  */
  YYSYMBOL_DELTA = 67,                     /* DELTA  */
  YYSYMBOL_FLOAT = 68,                     /* FLOAT  */
  YYSYMBOL_GROUP = 69,                     /* GROUP  */
  YYSYMBOL_INDEX = 70,                     /* INDEX  */
  YYSYMBOL_INNER = 71,                     /* INNER  */
  YYSYMBOL_LIMIT = 72,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 73,                     /* LOCAL  */
  YYSYMBOL_MERGE = 74,                     /* MERGE  */
  YYSYMBOL_MINUS = 75,                     /* MINUS  */
  YYSYMBOL_ORDER = 76,                     /* ORDER  */
  YYSYMBOL_OUTER = 77,                     /* OUTER  */
  YYSYMBOL_RIGHT = 78,                     /* RIGHT  */
  YYSYMBOL_TABLE = 79,                     /* TABLE  */
  YYSYMBOL_UNION = 80,                     /* UNION  */
  YYSYMBOL_USING = 81,                     /* USING  */
  YYSYMBOL_WHERE = 82,                     /* WHERE  */
  YYSYMBOL_CALL = 83,                      /* CALL  */
  YYSYMBOL_CASE = 84,                      /* CASE  */
  YYSYMBOL_CHAR = 85,                      /* CHAR  */
  YYSYMBOL_COPY = 86,                      /* COPY  */
  YYSYMBOL_DATE = 87,                      /* DATE  */
  YYSYMBOL_DATETIME = 88,                  /* DATETIME  */
  YYSYMBOL_DESC = 89,                      /* DESC  */
  YYSYMBOL_DROP = 90,                      /* DROP  */
  YYSYMBOL_ELSE = 91,                      /* ELSE  */
  YYSYMBOL_FILE = 92,                      /* FILE  */
  YYSYMBOL_FROM = 93,                      /* FROM  */
  YYSYMBOL_FULL = 94,                      /* FULL  */
  YYSYMBOL_HASH = 95,                      /* HASH  */
  YYSYMBOL_HINT = 96,                      /* HINT  */
  YYSYMBOL_INTO = 97,                      /* INTO  */
  YYSYMBOL_JOIN = 98,                      /* JOIN  */
  YYSYMBOL_LEFT = 99,                      /* LEFT  */
  YYSYMBOL_LIKE = 100,                     /* LIKE  */
  YYSYMBOL_LOAD = 101,                     /* LOAD  */
  YYSYMBOL_LONG = 102,                     /* LONG  */
  YYSYMBOL_NULL = 103,                     /* NULL  */
  YYSYMBOL_PLAN = 104,                     /* PLAN  */
  YYSYMBOL_SHOW = 105,                     /* SHOW  */
  YYSYMBOL_TEXT = 106,                     /* TEXT  */
  YYSYMBOL_THEN = 107,                     /* THEN  */
  YYSYMBOL_TIME = 108,                     /* TIME  */
  YYSYMBOL_VIEW = 109,                     /* VIEW  */
  YYSYMBOL_WHEN = 110,                     /* WHEN  */
  YYSYMBOL_WITH = 111,                     /* WITH  */
  YYSYMBOL_ADD = 112,                      /* ADD  */
  YYSYMBOL_ALL = 113,                      /* ALL  */
  YYSYMBOL_AND = 114,                      /* AND  */
  YYSYMBOL_ASC = 115,                      /* ASC  */
  YYSYMBOL_END = 116,                      /* END  */
  YYSYMBOL_FOR = 117,                      /* FOR  */
  YYSYMBOL_INT = 118,                      /* INT  */
  YYSYMBOL_KEY = 119,                      /* KEY  */
  YYSYMBOL_NOT = 120,                      /* NOT  */
  YYSYMBOL_OFF = 121,                      /* OFF  */
  YYSYMBOL_SET = 122,                      /* SET  */
  YYSYMBOL_TOP = 123,                      /* TOP  */
  YYSYMBOL_AS = 124,                       /* AS  */
  YYSYMBOL_BY = 125,                       /* BY  */
  YYSYMBOL_IF = 126,                       /* IF  */
  YYSYMBOL_IN = 127,                       /* IN  */
  YYSYMBOL_IS = 128,                       /* IS  */
  YYSYMBOL_OF = 129,                       /* OF  */
  YYSYMBOL_ON = 130,                       /* ON  */
  YYSYMBOL_OR = 131,                       /* OR  */
  YYSYMBOL_TO = 132,                       /* TO  */
  YYSYMBOL_ARRAY = 133,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 134,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 135,                    /* ILIKE  */
  YYSYMBOL_SECOND = 136,                   /* SECOND  */
  YYSYMBOL_MINUTE = 137,                   /* MINUTE  */
  YYSYMBOL_HOUR = 138,                     /* HOUR  */
  YYSYMBOL_DAY = 139,                      /* DAY  */
  YYSYMBOL_MONTH = 140,                    /* MONTH  */
  YYSYMBOL_YEAR = 141,                     /* YEAR  */
  YYSYMBOL_TRUE = 142,                     /* TRUE  */
  YYSYMBOL_FALSE = 143,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 144,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 145,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 146,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 147,                 /* ROLLBACK  */
  YYSYMBOL_148_ = 148,                     /* '='  */
  YYSYMBOL_EQUALS = 149,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 150,                /* NOTEQUALS  */
  YYSYMBOL_151_ = 151,                     /* '<'  */
  YYSYMBOL_152_ = 152,                     /* '>'  */
  YYSYMBOL_LESS = 153,                     /* LESS  */
  YYSYMBOL_GREATER = 154,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 155,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 156,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 157,                  /* NOTNULL  */
  YYSYMBOL_158_ = 158,                     /* '+'  */
  YYSYMBOL_159_ = 159,                     /* '-'  */
  YYSYMBOL_160_ = 160,                     /* '*'  */
  YYSYMBOL_161_ = 161,                     /* '/'  */
  YYSYMBOL_162_ = 162,                     /* '%'  */
  YYSYMBOL_163_ = 163,                     /* '^'  */
  YYSYMBOL_UMINUS = 164,                   /* UMINUS  */
  YYSYMBOL_165_ = 165,                     /* '['  */
  YYSYMBOL_166_ = 166,                     /* ']'  */
  YYSYMBOL_167_ = 167,                     /* '('  */
  YYSYMBOL_168_ = 168,                     /* ')'  */
  YYSYMBOL_169_ = 169,                     /* '.'  */
  YYSYMBOL_170_ = 170,                     /* ';'  */
  YYSYMBOL_171_ = 171,                     /* ','  */
  YYSYMBOL_172_ = 172,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 173,                 /* $accept  */
  YYSYMBOL_input = 174,                    /* input  */
  YYSYMBOL_statement_list = 175,           /* statement_list  */
  YYSYMBOL_statement = 176,                /* statement  */
  YYSYMBOL_preparable_statement = 177,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 178,                /* opt_hints  */
  YYSYMBOL_hint_list = 179,                /* hint_list  */
  YYSYMBOL_hint = 180,                     /* hint  */
  YYSYMBOL_transaction_statement = 181,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 182,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 183,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 184,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 185,        /* execute_statement  */
  YYSYMBOL_import_statement = 186,         /* import_statement  */
  YYSYMBOL_file_type = 187,                /* file_type  */
  YYSYMBOL_file_path = 188,                /* file_path  */
  YYSYMBOL_opt_file_type = 189,            /* opt_file_type  */
  YYSYMBOL_export_statement = 190,         /* export_statement  */
  YYSYMBOL_show_statement = 191,           /* show_statement  */
  YYSYMBOL_create_statement = 192,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 193,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 194,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 195,               /* table_elem  */
  YYSYMBOL_column_def = 196,               /* column_def  */
  YYSYMBOL_column_type = 197,              /* column_type  */
  YYSYMBOL_opt_time_specification = 198,   /* opt_time_specification  */
  YYSYMBOL_opt_decimal_specification = 199, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 200,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint = 201,        /* column_constraint  */
  YYSYMBOL_table_constraint = 202,         /* table_constraint  */
  YYSYMBOL_drop_statement = 203,           /* drop_statement  */
  YYSYMBOL_opt_exists = 204,               /* opt_exists  */
  YYSYMBOL_alter_statement = 205,          /* alter_statement  */
  YYSYMBOL_alter_action = 206,             /* alter_action  */
  YYSYMBOL_drop_action = 207,              /* drop_action  */
  YYSYMBOL_delete_statement = 208,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 209,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 210,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 211,          /* opt_column_list  */
  YYSYMBOL_update_statement = 212,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 213,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 214,            /* update_clause  */
  YYSYMBOL_select_statement = 215,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 216, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 217, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 218,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 219,          /* select_no_paren  */
  YYSYMBOL_set_operator = 220,             /* set_operator  */
  YYSYMBOL_set_type = 221,                 /* set_type  */
  YYSYMBOL_opt_all = 222,                  /* opt_all  */
  YYSYMBOL_select_clause = 223,            /* select_clause  */
  YYSYMBOL_opt_distinct = 224,             /* opt_distinct  */
  YYSYMBOL_select_list = 225,              /* select_list  */
  YYSYMBOL_opt_from_clause = 226,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 227,              /* from_clause  */
  YYSYMBOL_opt_where = 228,                /* opt_where  */
  YYSYMBOL_opt_group = 229,                /* opt_group  */
  YYSYMBOL_opt_having = 230,               /* opt_having  */
  YYSYMBOL_opt_order = 231,                /* opt_order  */
  YYSYMBOL_order_list = 232,               /* order_list  */
  YYSYMBOL_order_desc = 233,               /* order_desc  */
  YYSYMBOL_opt_order_type = 234,           /* opt_order_type  */
  YYSYMBOL_opt_top = 235,                  /* opt_top  */
  YYSYMBOL_opt_limit = 236,                /* opt_limit  */
  YYSYMBOL_expr_list = 237,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 238,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 239,             /* literal_list  */
  YYSYMBOL_expr_alias = 240,               /* expr_alias  */
  YYSYMBOL_expr = 241,                     /* expr  */
  YYSYMBOL_operand = 242,                  /* operand  */
  YYSYMBOL_scalar_expr = 243,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 244,               /* unary_expr  */
  YYSYMBOL_binary_expr = 245,              /* binary_expr  */
  YYSYMBOL_logic_expr = 246,               /* logic_expr  */
  YYSYMBOL_in_expr = 247,                  /* in_expr  */
  YYSYMBOL_case_expr = 248,                /* case_expr  */
  YYSYMBOL_case_list = 249,                /* case_list  */
  YYSYMBOL_exists_expr = 250,              /* exists_expr  */
  YYSYMBOL_comp_expr = 251,                /* comp_expr  */
  YYSYMBOL_function_expr = 252,            /* function_expr  */
  YYSYMBOL_extract_expr = 253,             /* extract_expr  */
  YYSYMBOL_cast_expr = 254,                /* cast_expr  */
  YYSYMBOL_datetime_field = 255,           /* datetime_field  */
  YYSYMBOL_array_expr = 256,               /* array_expr  */
  YYSYMBOL_array_index = 257,              /* array_index  */
  YYSYMBOL_between_expr = 258,             /* between_expr  */
  YYSYMBOL_column_name = 259,              /* column_name  */
  YYSYMBOL_literal = 260,                  /* literal  */
  YYSYMBOL_string_literal = 261,           /* string_literal  */
  YYSYMBOL_bool_literal = 262,             /* bool_literal  */
  YYSYMBOL_num_literal = 263,              /* num_literal  */
  YYSYMBOL_int_literal = 264,              /* int_literal  */
  YYSYMBOL_null_literal = 265,             /* null_literal  */
  YYSYMBOL_date_literal = 266,             /* date_literal  */
  YYSYMBOL_param_expr = 267,               /* param_expr  */
  YYSYMBOL_table_ref = 268,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 269,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 270, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 271,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 272,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 273,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 274,               /* table_name  */
  YYSYMBOL_opt_index_name = 275,           /* opt_index_name  */
  YYSYMBOL_index_name = 276,               /* index_name  */
  YYSYMBOL_table_alias = 277,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 278,          /* opt_table_alias  */
  YYSYMBOL_alias = 279,                    /* alias  */
  YYSYMBOL_opt_alias = 280,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 281,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 282,              /* with_clause  */
  YYSYMBOL_with_description_list = 283,    /* with_description_list  */
  YYSYMBOL_with_description = 284,         /* with_description  */
  YYSYMBOL_join_clause = 285,              /* join_clause  */
  YYSYMBOL_opt_join_type = 286,            /* opt_join_type  */
  YYSYMBOL_join_condition = 287,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 288,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 289           /* ident_commalist  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  536

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   410


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   162,     2,     2,
     167,   168,   160,   158,   171,   159,   169,   161,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   170,
     151,   148,   152,   172,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   165,     2,   166,   163,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   149,   150,   153,   154,   155,   156,   157,
     164
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   288,   288,   309,   315,   324,   328,   332,   335,   338,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     363,   364,   369,   370,   374,   378,   390,   393,   396,   402,
     403,   410,   417,   420,   424,   438,   444,   453,   470,   474,
     477,   486,   500,   503,   508,   522,   535,   542,   549,   556,
     567,   568,   572,   573,   577,   578,   582,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   606,   607,   611,   612,   613,   617,   618,   619,   623,
     624,   625,   626,   630,   631,   642,   648,   654,   660,   668,
     669,   678,   686,   689,   701,   710,   723,   730,   741,   742,
     752,   761,   762,   766,   778,   782,   786,   800,   801,   804,
     805,   816,   817,   821,   831,   844,   851,   855,   859,   866,
     869,   875,   887,   888,   892,   896,   897,   901,   906,   907,
     911,   916,   920,   921,   925,   926,   930,   931,   935,   939,
     940,   941,   947,   948,   952,   953,   954,   955,   956,   957,
     964,   965,   969,   970,   974,   975,   979,   989,   990,   991,
     992,   993,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1011,  1012,  1016,  1017,  1018,  1019,  1020,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1038,  1039,  1043,  1044,  1045,  1046,  1052,  1053,  1054,
    1055,  1059,  1060,  1064,  1065,  1069,  1070,  1071,  1072,  1073,
    1074,  1075,  1079,  1080,  1084,  1088,  1092,  1093,  1094,  1095,
    1096,  1097,  1101,  1105,  1109,  1113,  1114,  1115,  1116,  1120,
    1121,  1122,  1123,  1124,  1125,  1129,  1133,  1134,  1138,  1139,
    1143,  1147,  1151,  1164,  1176,  1177,  1187,  1188,  1192,  1193,
    1202,  1203,  1208,  1219,  1228,  1229,  1233,  1234,  1238,  1243,
    1244,  1249,  1250,  1255,  1256,  1261,  1262,  1271,  1272,  1276,
    1280,  1284,  1291,  1304,  1312,  1322,  1341,  1342,  1343,  1344,
    1345,  1346,  1347,  1348,  1349,  1350,  1355,  1364,  1365,  1370,
    1371
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "CHARACTER", "VARYING", "REAL", "DECIMAL", "SPATIAL",
  "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST",
  "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "COPY", "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_specification", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint", "table_constraint",
  "drop_statement", "opt_exists", "alter_statement", "alter_action",
  "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,    61,   403,
     404,    60,    62,   405,   406,   407,   408,   409,    43,    45,
      42,    47,    37,    94,   410,    91,    93,    40,    41,    46,
      59,    44,    63
};
#endif

#define YYPACT_NINF (-405)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-288)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     572,    85,    65,   133,   214,    65,   116,   130,   144,   147,
      65,   176,    65,   126,    24,   254,   122,   122,   122,   267,
     109,  -405,   189,  -405,   189,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,   -29,  -405,   281,
     118,  -405,   132,   209,  -405,   178,   178,   178,    65,   303,
      65,   192,  -405,   196,   -61,   196,   196,   196,    65,  -405,
     210,   180,  -405,  -405,  -405,  -405,  -405,  -405,   567,  -405,
     251,  -405,  -405,   237,   -29,    46,  -405,    48,  -405,   358,
      20,   362,   255,   371,    65,    65,   299,  -405,   292,   220,
     385,   344,    65,   387,   387,   389,    65,    65,  -405,   226,
     254,  -405,   227,   390,   383,   229,   230,  -405,  -405,  -405,
     -29,   287,   276,   -29,    60,  -405,  -405,  -405,  -405,   398,
    -405,  -405,  -405,  -405,   239,   240,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,   365,  -405,   284,   -63,
     220,   270,  -405,   387,   412,   -15,   268,   -55,  -405,  -405,
     328,   311,  -405,   311,  -405,  -405,  -405,  -405,  -405,  -405,
     421,  -405,  -405,   270,  -405,  -405,   352,  -405,  -405,    46,
    -405,  -405,   270,   352,   270,   165,  -405,  -405,  -405,    20,
    -405,    65,   428,   321,    43,   310,    40,   269,   272,   286,
     266,   359,   290,   374,  -405,    34,   149,   410,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,   338,  -405,   -10,   297,  -405,   270,
     385,  -405,   418,  -405,  -405,   409,  -405,  -405,   300,   115,
    -405,   366,   295,  -405,    42,    60,   -29,   298,  -405,    99,
      60,   149,   414,   -25,  -405,   306,   378,  -405,   701,   355,
     309,   123,  -405,  -405,  -405,   321,    23,    14,   423,   190,
     270,   270,   128,   -28,   314,   374,   603,   270,   158,   315,
     -58,   270,   270,   374,  -405,   374,   -26,   317,   161,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   390,    65,  -405,   475,    20,   149,
    -405,   196,   303,    20,  -405,   421,    15,   299,  -405,   270,
    -405,   479,  -405,  -405,  -405,  -405,   270,  -405,  -405,  -405,
    -405,   270,   270,   412,   387,  -405,   455,  -405,   319,   320,
    -405,  -405,   322,  -405,  -405,  -405,  -405,   323,  -405,    69,
     324,   412,  -405,    43,  -405,  -405,   270,  -405,  -405,   327,
    -405,  -405,  -405,  -405,  -405,  -405,   403,     3,   -38,   108,
     270,   270,  -405,   423,   397,   -66,  -405,  -405,  -405,   384,
     546,   622,   374,   332,    34,  -405,   400,   335,   622,   622,
     622,   622,   289,   289,   289,   289,   158,   158,    66,    66,
      66,   -68,   339,  -405,  -405,   167,    18,  -405,   168,  -405,
     321,  -405,   162,  -405,   333,  -405,    33,  -405,   437,  -405,
    -405,  -405,   149,   149,   172,  -405,   341,   503,  -405,   505,
     506,   507,  -405,   395,  -405,  -405,   417,    69,  -405,   412,
     173,  -405,   177,  -405,   270,   701,   270,   270,  -405,   131,
     120,   347,  -405,   374,   622,    34,   353,   181,  -405,  -405,
    -405,   354,  -405,  -405,   357,   424,  -405,  -405,  -405,   450,
     451,   452,   434,    15,   532,  -405,  -405,  -405,   411,  -405,
    -405,   533,   187,   372,   375,   379,  -405,  -405,  -405,   188,
    -405,  -405,   -56,   380,   149,   134,  -405,   270,  -405,   603,
     381,   199,  -405,  -405,    33,    15,  -405,  -405,  -405,    15,
     211,   386,   270,   382,  -405,   536,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,   149,  -405,  -405,  -405,  -405,   394,   412,
      -6,  -405,   388,   396,   270,   200,   270,  -405,  -405,    18,
     149,  -405,  -405,   149,   408,  -405
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     288,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   267,     0,
     254,    95,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   253,    90,     0,    90,    90,    90,     0,    42,
       0,   269,   270,    29,    26,    28,    27,     1,   268,     2,
       0,     6,     5,   143,     0,   104,   105,   135,    87,     0,
     153,     0,     0,   257,     0,     0,   129,    37,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   123,     0,     0,   117,   118,   116,
       0,   120,     0,     0,   149,   255,   235,   238,   240,     0,
     241,   236,   237,   243,     0,   152,   154,   229,   230,   231,
     239,   232,   233,   234,    32,    31,     0,   256,     0,     0,
      99,     0,    94,     0,     0,     0,     0,   129,   101,    89,
       0,    40,    38,    40,   258,    88,    85,    86,   272,   271,
       0,   142,   122,     0,   112,   111,   135,   108,   107,   109,
     119,   115,     0,   135,     0,     0,   113,   242,    34,     0,
      50,     0,     0,   268,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,   227,     0,   128,   157,   164,   165,
     166,   159,   161,   167,   160,   180,   168,   169,   170,   171,
     163,   158,   173,   174,     0,   289,     0,     0,    97,     0,
       0,   100,     0,    91,    92,     0,    36,    41,    24,     0,
      22,   126,   124,   150,   266,   149,     0,   134,   136,   141,
     149,   145,   147,   144,   155,     0,     0,    47,     0,     0,
       0,     0,    52,    54,    55,   268,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,     0,   175,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   103,
     102,    90,     0,     0,    20,     0,     0,   129,   125,     0,
     264,     0,   265,   156,   106,   110,     0,   140,   139,   138,
     114,     0,     0,     0,     0,    58,     0,    63,    75,     0,
      62,    60,     0,    70,    69,    59,    67,    72,    57,    78,
       0,     0,    46,     0,    49,   212,     0,   226,   228,     0,
     216,   217,   218,   219,   220,   221,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,   172,   162,   191,   192,
       0,   187,     0,     0,     0,   178,     0,   190,   189,   205,
     206,   207,   208,   209,   210,   211,   182,   181,   184,   183,
     185,   186,     0,    35,   290,     0,     0,    39,     0,    23,
     268,   127,   244,   246,     0,   248,   262,   247,   131,   151,
     263,   137,   148,   146,     0,    45,     0,     0,    61,     0,
       0,     0,    68,     0,    80,    81,     0,    56,    76,     0,
       0,    53,     0,   203,     0,     0,     0,     0,   197,     0,
       0,     0,   222,     0,   188,     0,     0,     0,   179,   223,
      96,   225,    93,    25,     0,     0,   284,   276,   282,   280,
     283,   278,     0,     0,     0,   261,   252,   259,     0,   121,
      48,     0,     0,     0,     0,     0,    79,    82,    77,     0,
      84,   213,     0,     0,   201,     0,   200,     0,   204,   224,
       0,     0,   195,   193,   262,     0,   279,   281,   277,     0,
     245,   263,     0,     0,    74,     0,    64,    66,    71,    83,
     214,   215,   198,   202,   196,   194,   249,   273,   285,     0,
     133,    65,     0,     0,     0,     0,     0,   130,    73,     0,
     286,   274,   260,   132,     0,   275
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -405,  -405,  -405,   483,  -405,   528,  -405,   249,  -405,   142,
    -405,  -405,  -405,  -405,   253,   -81,   404,  -405,  -405,  -405,
     169,  -405,   221,  -405,   143,  -405,  -405,  -405,   150,  -405,
    -405,   -47,  -405,  -405,  -405,  -405,  -405,  -405,   440,  -405,
    -405,   361,  -178,   -72,  -405,    10,   -73,   -54,  -405,  -405,
     -46,   329,  -405,  -405,  -405,  -128,  -405,  -405,    31,  -405,
     274,  -405,  -405,   -32,  -261,  -405,   -45,   275,  -141,  -140,
    -405,  -405,  -405,  -405,  -405,  -405,   326,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -374,   -77,   -78,  -405,
    -405,   -92,  -405,  -405,  -405,  -405,  -404,    88,  -405,  -405,
    -405,     2,  -405,  -405,  -405,    92,   363,  -405,  -405,  -405,
    -405,   491,  -405,  -405,  -405,  -405,  -321
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   229,   230,    23,    64,
      24,   135,    25,    26,    88,   151,   226,    27,    28,    29,
      83,   251,   252,   253,   339,   422,   418,   427,   428,   254,
      30,    92,    31,   223,   224,    32,    33,    34,   145,    35,
     147,   148,    36,   166,   167,   168,    76,   110,   111,   171,
      77,   163,   231,   307,   308,   142,   469,   527,   114,   237,
     238,   319,   104,   176,   232,   124,   125,   233,   234,   197,
     198,   199,   200,   201,   202,   203,   263,   204,   205,   206,
     207,   208,   356,   209,   210,   211,   212,   213,   127,   128,
     129,   130,   131,   132,   133,   401,   402,   403,   404,   405,
      51,   406,   138,   155,   465,   466,   467,   313,    37,    38,
      61,    62,   407,   462,   531,    69,   216
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     196,   106,   414,   126,    41,   247,   365,    44,    95,    96,
      97,   161,    52,   153,    54,   152,   152,   347,    40,   221,
     430,   451,   452,   113,   116,   117,   118,   141,    73,   322,
     182,   239,    93,   241,   243,   162,   310,   186,   116,   117,
     118,   173,    73,    58,   526,   310,   248,    75,   217,   262,
      86,   266,    89,   268,   270,   107,   271,   107,   271,   500,
      98,   183,   214,   360,   169,   152,   279,   169,    40,   436,
     249,    94,   218,   272,   372,   272,   271,   344,   299,   187,
     188,   189,   361,    59,   105,   432,   139,   140,   362,   271,
     108,    73,   108,   272,   150,   518,   423,   294,   156,   157,
     442,   373,   244,   250,   184,   309,   272,   119,   479,   158,
     367,    39,   510,   447,   174,   236,   220,   271,   190,   357,
     358,   119,   269,   120,   112,   266,   109,   435,   109,   424,
     368,   369,   175,   370,   272,   371,    42,   120,    74,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   191,   534,   271,   464,   296,    65,
      66,   297,   121,   122,   315,   309,   311,   192,   186,   116,
     117,   118,   425,   272,   348,   239,   121,   122,   194,   408,
     412,   413,   400,   245,   491,   349,    45,   455,   317,   426,
     169,   345,   123,   193,   194,    46,    55,   235,   525,   437,
     279,   195,   392,   314,   240,    56,   123,   256,   320,   257,
     187,   188,   189,   271,   318,    84,    85,    43,   361,   439,
     440,   126,   454,    48,   438,    47,   126,   487,   456,   293,
     272,   294,   444,   457,   271,    57,   455,    49,   261,   458,
     459,   520,   271,   415,    50,   271,   152,   486,   271,   190,
     512,   272,   119,   395,   396,    53,   460,    60,   398,   272,
    -285,   461,   272,   271,   375,   272,    63,    67,   120,   186,
     116,   117,   118,   186,   116,   117,   118,   456,   242,    68,
     272,   376,   457,   304,    78,   191,   305,    79,   458,   459,
     441,   342,   279,   482,   343,   484,   485,   393,   192,    80,
      70,   446,    81,   489,    82,   460,    87,   121,   122,  -285,
     461,   187,   188,   189,    90,   187,   188,   189,   290,   291,
     292,   293,    91,   294,   193,   194,   350,   351,   352,   353,
     354,   355,   195,  -250,    99,   450,   453,   123,   179,   179,
     470,   480,   274,   297,   297,   481,   513,   102,   309,   493,
     190,   100,   309,   119,   190,   504,   509,   119,   505,   297,
     103,   115,   186,   116,   117,   118,   134,   515,   532,   120,
     309,   297,   490,   120,   137,   136,   261,   186,   116,   117,
     118,   141,  -251,   530,   143,   533,   191,   144,   146,   149,
     191,   116,   154,    74,   160,   162,   118,   164,   165,   192,
     170,   172,   177,   192,   264,   188,   189,   178,   121,   122,
     180,   179,   121,   122,   181,   215,   219,   278,   222,   455,
     188,   189,   225,   279,   228,   193,   194,   273,   112,   193,
     194,   246,    15,   195,   255,   295,   258,   195,   123,   259,
    -288,  -288,   123,   190,  -288,  -288,   119,   288,   289,   290,
     291,   292,   293,   260,   294,   267,   301,   302,   190,   306,
     456,   119,   120,   274,   298,   457,   309,   303,   321,   316,
     324,   458,   459,   323,   340,   523,   341,   120,   394,   265,
      73,   363,   410,   366,   374,   416,   417,   419,   460,   420,
     421,   429,   192,   461,   265,   433,   434,   372,   271,   445,
     294,   121,   122,   448,   463,   449,   468,   192,   471,   472,
     275,   473,   474,   475,   476,   488,   121,   122,   193,   194,
     477,   492,   495,   257,   524,   494,   195,   496,   497,   498,
     276,   123,   499,   193,   194,   501,   502,   277,   278,   503,
     506,   195,   522,   507,   279,   280,   123,   508,   511,   514,
     521,   101,    72,   519,   399,   397,   528,   227,   281,   282,
     283,   284,   285,   529,   431,   286,   287,  -287,   288,   289,
     290,   291,   292,   293,     1,   294,   535,   478,   483,     1,
     185,   300,     2,   517,   409,   346,   516,     2,   359,     3,
     411,   159,     0,     4,     3,     0,     0,   312,     4,   274,
       0,     0,     0,     5,     0,     0,     6,     7,     5,     0,
       0,     6,     7,     0,     0,     0,     0,     0,     8,     9,
       0,     0,     0,     8,     9,     0,     0,     0,     0,    10,
       0,     0,    11,     0,    10,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,   275,     0,     0,     0,
       0,     0,     0,    12,     0,     0,   274,    13,    12,     0,
     443,     0,    13,     0,     0,     0,   364,     0,     0,     0,
       0,     0,    14,     0,   278,   274,     0,    14,    15,     0,
     279,   280,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,   282,   283,   284,   285,     0,
       0,   286,   287,   275,   288,   289,   290,   291,   292,   293,
       0,   294,    16,    17,    18,     0,     0,    16,    17,    18,
       0,     0,  -288,   364,     0,   325,     0,     0,     0,     0,
     326,   278,   327,   328,     0,   329,     0,   279,   280,     0,
       0,     0,     0,   330,     0,     0,     0,     0,     0,     0,
     278,   281,   282,   283,   284,   285,   279,  -288,   286,   287,
       0,   288,   289,   290,   291,   292,   293,     0,   294,   331,
    -288,  -288,  -288,   284,   285,     0,     0,   286,   287,     0,
     288,   289,   290,   291,   292,   293,   332,   294,   333,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,     0,     0,     0,   336,     0,   337,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338
};

static const yytype_int16 yycheck[] =
{
     141,    74,   323,    80,     2,   183,   267,     5,    55,    56,
      57,   103,    10,    94,    12,    93,    94,     3,     3,   147,
     341,     3,   396,    77,     4,     5,     6,    82,    57,    54,
      93,   172,    93,   174,   175,    12,     3,     3,     4,     5,
       6,   113,    57,    19,    50,     3,     3,    37,    63,   190,
      48,   191,    50,   193,   195,     9,   114,     9,   114,   463,
      58,   124,   143,    91,   110,   143,   134,   113,     3,   107,
      27,   132,   145,   131,   100,   131,   114,   255,   219,    45,
      46,    47,   110,    59,    74,   346,    84,    85,   116,   114,
      44,    57,    44,   131,    92,   499,    27,   165,    96,    97,
     166,   127,   179,    60,   167,   171,   131,    87,   429,    99,
     168,    26,   168,   374,    54,   169,   171,   114,    84,   260,
     261,    87,   195,   103,    76,   265,    80,   124,    80,    60,
     271,   272,    72,   273,   131,   275,     3,   103,   167,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   120,   529,   114,   124,   168,    17,
      18,   171,   142,   143,   236,   171,   124,   133,     3,     4,
       5,     6,   103,   131,   160,   316,   142,   143,   160,   307,
     321,   322,   167,   181,   445,   258,    70,    25,    89,   120,
     236,   168,   172,   159,   160,    79,    70,   166,   519,    91,
     134,   167,   294,   235,   173,    79,   172,   167,   240,   169,
      45,    46,    47,   114,   115,    46,    47,     3,   110,   360,
     361,   298,   400,    93,   116,   109,   303,   107,    66,   163,
     131,   165,   372,    71,   114,   109,    25,    93,   110,    77,
      78,   502,   114,   324,    97,   114,   324,   116,   114,    84,
     116,   131,    87,   298,   301,    79,    94,     3,   303,   131,
      98,    99,   131,   114,   103,   131,   144,     0,   103,     3,
       4,     5,     6,     3,     4,     5,     6,    66,   113,   170,
     131,   120,    71,   168,     3,   120,   171,   169,    77,    78,
     363,   168,   134,   434,   171,   436,   437,   295,   133,   167,
     111,   374,    93,   443,   126,    94,     3,   142,   143,    98,
      99,    45,    46,    47,   122,    45,    46,    47,   160,   161,
     162,   163,   126,   165,   159,   160,   136,   137,   138,   139,
     140,   141,   167,   171,   124,   168,   168,   172,   171,   171,
     168,   168,    53,   171,   171,   168,   487,    96,   171,   168,
      84,   171,   171,    87,    84,   168,   168,    87,   171,   171,
     123,     3,     3,     4,     5,     6,     4,   168,   168,   103,
     171,   171,   445,   103,     3,   120,   110,     3,     4,     5,
       6,    82,   171,   524,    92,   526,   120,   167,     3,    45,
     120,     4,     3,   167,   167,    12,     6,   168,   168,   133,
     113,   125,     4,   133,    45,    46,    47,   168,   142,   143,
      45,   171,   142,   143,   130,     3,   148,   128,    90,    25,
      46,    47,   111,   134,     3,   159,   160,    17,    76,   159,
     160,     3,   111,   167,   124,    97,   167,   167,   172,   167,
     151,   152,   172,    84,   155,   156,    87,   158,   159,   160,
     161,   162,   163,   167,   165,   165,    38,    48,    84,    93,
      66,    87,   103,    53,   167,    71,   171,   167,    54,   171,
      92,    77,    78,   167,   119,    81,   167,   103,     3,   120,
      57,   167,     3,   168,   167,    30,   167,   167,    94,   167,
     167,   167,   133,    99,   120,   168,    93,   100,   114,   167,
     165,   142,   143,   103,   171,   166,    69,   133,   167,     6,
     100,     6,     6,     6,   119,   168,   142,   143,   159,   160,
     103,   168,    98,   169,   130,   168,   167,    77,    77,    77,
     120,   172,    98,   159,   160,     3,   125,   127,   128,     6,
     168,   167,     6,   168,   134,   135,   172,   168,   168,   168,
     168,    68,    24,   167,   305,   302,   168,   153,   148,   149,
     150,   151,   152,   167,   343,   155,   156,     0,   158,   159,
     160,   161,   162,   163,     7,   165,   168,   427,   435,     7,
     140,   220,    15,   495,   309,   256,   494,    15,   262,    22,
     316,   100,    -1,    26,    22,    -1,    -1,   234,    26,    53,
      -1,    -1,    -1,    36,    -1,    -1,    39,    40,    36,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    53,    90,    86,    -1,
     114,    -1,    90,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   128,    53,    -1,   105,   111,    -1,
     134,   135,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,    -1,
      -1,   155,   156,   100,   158,   159,   160,   161,   162,   163,
      -1,   165,   145,   146,   147,    -1,    -1,   145,   146,   147,
      -1,    -1,   100,   120,    -1,    24,    -1,    -1,    -1,    -1,
      29,   128,    31,    32,    -1,    34,    -1,   134,   135,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   148,   149,   150,   151,   152,   134,   135,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,    68,
     148,   149,   150,   151,   152,    -1,    -1,   155,   156,    -1,
     158,   159,   160,   161,   162,   163,    85,   165,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    65,    86,    90,   105,   111,   145,   146,   147,   174,
     175,   176,   177,   181,   183,   185,   186,   190,   191,   192,
     203,   205,   208,   209,   210,   212,   215,   281,   282,    26,
       3,   274,     3,     3,   274,    70,    79,   109,    93,    93,
      97,   273,   274,    79,   274,    70,    79,   109,    19,    59,
       3,   283,   284,   144,   182,   182,   182,     0,   170,   288,
     111,   178,   178,    57,   167,   218,   219,   223,     3,   169,
     167,    93,   126,   193,   193,   193,   274,     3,   187,   274,
     122,   126,   204,    93,   132,   204,   204,   204,   274,   124,
     171,   176,    96,   123,   235,   218,   219,     9,    44,    80,
     220,   221,    76,   220,   231,     3,     4,     5,     6,    87,
     103,   142,   143,   172,   238,   239,   260,   261,   262,   263,
     264,   265,   266,   267,     4,   184,   120,     3,   275,   274,
     274,    82,   228,    92,   167,   211,     3,   213,   214,    45,
     274,   188,   261,   188,     3,   276,   274,   274,   218,   284,
     167,   264,    12,   224,   168,   168,   216,   217,   218,   223,
     113,   222,   125,   216,    54,    72,   236,     4,   168,   171,
      45,   130,    93,   124,   167,   211,     3,    45,    46,    47,
      84,   120,   133,   159,   160,   167,   241,   242,   243,   244,
     245,   246,   247,   248,   250,   251,   252,   253,   254,   256,
     257,   258,   259,   260,   188,     3,   289,    63,   219,   148,
     171,   228,    90,   206,   207,   111,   189,   189,     3,   179,
     180,   225,   237,   240,   241,   231,   220,   232,   233,   241,
     231,   241,   113,   241,   260,   274,     3,   215,     3,    27,
      60,   194,   195,   196,   202,   124,   167,   169,   167,   167,
     167,   110,   241,   249,    45,   120,   242,   165,   242,   219,
     241,   114,   131,    17,    53,   100,   120,   127,   128,   134,
     135,   148,   149,   150,   151,   152,   155,   156,   158,   159,
     160,   161,   162,   163,   165,    97,   168,   171,   167,   241,
     214,    38,    48,   167,   168,   171,    93,   226,   227,   171,
       3,   124,   279,   280,   236,   216,   171,    89,   115,   234,
     236,    54,    54,   167,    92,    24,    29,    31,    32,    34,
      42,    68,    85,    87,    88,   102,   106,   108,   118,   197,
     119,   167,   168,   171,   215,   168,   224,     3,   160,   219,
     136,   137,   138,   139,   140,   141,   255,   241,   241,   249,
      91,   110,   116,   167,   120,   237,   168,   168,   241,   241,
     242,   242,   100,   127,   167,   103,   120,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   264,   274,     3,   239,   204,   187,   239,   180,
     167,   268,   269,   270,   271,   272,   274,   285,   228,   240,
       3,   233,   241,   241,   289,   188,    30,   167,   199,   167,
     167,   167,   198,    27,    60,   103,   120,   200,   201,   167,
     289,   195,   237,   168,    93,   124,   107,    91,   116,   241,
     241,   219,   166,   114,   242,   167,   219,   237,   103,   166,
     168,     3,   259,   168,   215,    25,    66,    71,    77,    78,
      94,    99,   286,   171,   124,   277,   278,   279,    69,   229,
     168,   167,     6,     6,     6,     6,   119,   103,   201,   289,
     168,   168,   241,   197,   241,   241,   116,   107,   168,   242,
     219,   237,   168,   168,   168,    98,    77,    77,    77,    98,
     269,     3,   125,     6,   168,   171,   168,   168,   168,   168,
     168,   168,   116,   241,   168,   168,   278,   270,   269,   167,
     237,   168,     6,    81,   130,   289,    50,   230,   168,   167,
     241,   287,   168,   241,   259,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   182,
     182,   183,   184,   185,   185,   186,   186,   187,   188,   189,
     189,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   200,   201,
     201,   201,   201,   202,   202,   203,   203,   203,   203,   204,
     204,   205,   206,   207,   208,   209,   210,   210,   211,   211,
     212,   213,   213,   214,   215,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   221,   221,   221,   222,
     222,   223,   224,   224,   225,   226,   226,   227,   228,   228,
     229,   229,   230,   230,   231,   231,   232,   232,   233,   234,
     234,   234,   235,   235,   236,   236,   236,   236,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   241,   241,   241,
     241,   241,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   244,   244,   244,   244,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   246,   246,   247,   247,   247,   247,   248,   248,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   251,   252,   252,   253,   254,   255,   255,   255,   255,
     255,   255,   256,   257,   258,   259,   259,   259,   259,   260,
     260,   260,   260,   260,   260,   261,   262,   262,   263,   263,
     264,   265,   266,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   273,   274,   274,   275,   275,   276,   277,
     277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     283,   283,   284,   285,   285,   285,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   287,   288,   288,   289,
     289
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     4,     5,     4,     1,     2,     1,
       1,     3,     0,     5,     3,     0,     1,     2,     0,     2,
       1,     1,     2,     5,     4,     4,     4,     3,     4,     2,
       0,     5,     1,     4,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     1,     1,     1,
       3,     3,     3,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     1,     0,     2,     2,     0,
       4,     0,     2,     0,     3,     0,     1,     3,     2,     1,
       1,     0,     2,     0,     2,     2,     4,     2,     4,     0,
       1,     3,     1,     0,     1,     3,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     5,     6,     5,     6,     4,     6,     3,
       5,     4,     5,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     6,     6,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     1,
       5,     1,     0,     2,     1,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1979 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1985 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 155 "bison_parser.y"
            { }
#line 1991 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 155 "bison_parser.y"
            { }
#line 1997 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2010 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2016 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2022 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2035 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2060 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2084 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 155 "bison_parser.y"
            { }
#line 2090 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2096 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 155 "bison_parser.y"
            { }
#line 2102 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2108 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2114 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2120 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 155 "bison_parser.y"
            { }
#line 2126 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).table_element_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_element_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_element_vec));
}
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2145 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 155 "bison_parser.y"
            { }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_specification: /* opt_time_specification  */
#line 155 "bison_parser.y"
            { }
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 155 "bison_parser.y"
            { }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 155 "bison_parser.y"
            { }
#line 2175 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 155 "bison_parser.y"
            { }
#line 2181 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2187 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 155 "bison_parser.y"
            { }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2217 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2223 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2229 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2235 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2248 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2254 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2267 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2273 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2297 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2315 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 155 "bison_parser.y"
            { }
#line 2321 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2327 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 155 "bison_parser.y"
            { }
#line 2333 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2346 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2352 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2358 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2364 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2370 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2376 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2389 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2408 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 155 "bison_parser.y"
            { }
#line 2414 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2420 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2426 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2439 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 155 "bison_parser.y"
            { }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 156 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2682 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2688 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2694 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2700 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2706 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2712 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2718 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2724 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2730 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2736 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2742 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2748 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 155 "bison_parser.y"
            { }
#line 2754 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2760 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2773 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2880 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 288 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 3108 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 309 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3119 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 315 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3130 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 324 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3139 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 328 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3148 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 332 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3156 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 335 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3164 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 338 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3172 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 345 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3178 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 346 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3184 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 347 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3190 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 348 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3196 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 349 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3202 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 350 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3208 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 351 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3214 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 352 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3220 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 353 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3226 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 354 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3232 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 363 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3238 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 364 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3244 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 369 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3250 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 370 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3256 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 374 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3265 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 378 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3275 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 390 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3283 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 393 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3291 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 396 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3299 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 410 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3309 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 420 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3318 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 424 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3328 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 438 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3339 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 444 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3350 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 453 "bison_parser.y"
                           {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3369 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 470 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3375 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 474 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3383 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 477 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3389 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 486 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3400 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 500 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3408 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 503 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3418 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 508 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3428 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 522 "bison_parser.y"
                                                                                      {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3446 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 535 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
		}
#line 3458 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 542 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3470 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 549 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3482 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 556 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3495 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 567 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3501 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 568 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3507 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 572 "bison_parser.y"
                   { (yyval.table_element_vec) = new std::vector<TableElement*>(); (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t)); }
#line 3513 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 573 "bison_parser.y"
                                            { (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t)); (yyval.table_element_vec) = (yyvsp[-2].table_element_vec); }
#line 3519 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 577 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3525 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 578 "bison_parser.y"
                         { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3531 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 582 "bison_parser.y"
                                                             {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
			(yyval.column_t)->setNullableExplicit();
		}
#line 3540 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 589 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3546 "bison_parser.cpp"
    break;

  case 58: /* column_type: INTEGER  */
#line 590 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3552 "bison_parser.cpp"
    break;

  case 59: /* column_type: LONG  */
#line 591 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3558 "bison_parser.cpp"
    break;

  case 60: /* column_type: FLOAT  */
#line 592 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3564 "bison_parser.cpp"
    break;

  case 61: /* column_type: DECIMAL opt_decimal_specification  */
#line 593 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].column_specification_t)}; }
#line 3570 "bison_parser.cpp"
    break;

  case 62: /* column_type: DOUBLE  */
#line 594 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3576 "bison_parser.cpp"
    break;

  case 63: /* column_type: REAL  */
#line 595 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3582 "bison_parser.cpp"
    break;

  case 64: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 596 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3588 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 597 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR_VARYING, (yyvsp[-1].ival)}; }
#line 3594 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHAR '(' INTVAL ')'  */
#line 598 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3600 "bison_parser.cpp"
    break;

  case 67: /* column_type: TEXT  */
#line 599 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3606 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME opt_time_specification  */
#line 600 "bison_parser.y"
                                        { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].column_specification_t) }; }
#line 3612 "bison_parser.cpp"
    break;

  case 69: /* column_type: DATETIME  */
#line 601 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3618 "bison_parser.cpp"
    break;

  case 70: /* column_type: DATE  */
#line 602 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3624 "bison_parser.cpp"
    break;

  case 71: /* opt_time_specification: '(' INTVAL ')'  */
#line 606 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3630 "bison_parser.cpp"
    break;

  case 72: /* opt_time_specification: %empty  */
#line 607 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3636 "bison_parser.cpp"
    break;

  case 73: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 611 "bison_parser.y"
                                  { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3642 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 612 "bison_parser.y"
                       { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3648 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: %empty  */
#line 613 "bison_parser.y"
                    { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3654 "bison_parser.cpp"
    break;

  case 76: /* opt_column_constraints: column_constraint  */
#line 617 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); }
#line 3660 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraints: opt_column_constraints column_constraint  */
#line 618 "bison_parser.y"
                                                 { (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec); }
#line 3666 "bison_parser.cpp"
    break;

  case 78: /* opt_column_constraints: %empty  */
#line 619 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3672 "bison_parser.cpp"
    break;

  case 79: /* column_constraint: PRIMARY KEY  */
#line 623 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3678 "bison_parser.cpp"
    break;

  case 80: /* column_constraint: UNIQUE  */
#line 624 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3684 "bison_parser.cpp"
    break;

  case 81: /* column_constraint: NULL  */
#line 625 "bison_parser.y"
             { (yyval.column_constraint_t) = ConstraintType::_NULL; }
#line 3690 "bison_parser.cpp"
    break;

  case 82: /* column_constraint: NOT NULL  */
#line 626 "bison_parser.y"
                 { (yyval.column_constraint_t) = ConstraintType::NOTNULL; }
#line 3696 "bison_parser.cpp"
    break;

  case 83: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 630 "bison_parser.y"
                                             { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3702 "bison_parser.cpp"
    break;

  case 84: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 631 "bison_parser.y"
                                        { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3708 "bison_parser.cpp"
    break;

  case 85: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 642 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3719 "bison_parser.cpp"
    break;

  case 86: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 648 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3730 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 654 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3740 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DROP INDEX opt_exists index_name  */
#line 660 "bison_parser.y"
                                                 {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
    			(yyval.drop_stmt)->indexName = (yyvsp[0].sval);
    		}
#line 3750 "bison_parser.cpp"
    break;

  case 89: /* opt_exists: IF EXISTS  */
#line 668 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3756 "bison_parser.cpp"
    break;

  case 90: /* opt_exists: %empty  */
#line 669 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3762 "bison_parser.cpp"
    break;

  case 91: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 678 "bison_parser.y"
                                                               {
			(yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
			(yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
			(yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
		}
#line 3772 "bison_parser.cpp"
    break;

  case 92: /* alter_action: drop_action  */
#line 686 "bison_parser.y"
                    {(yyval.alter_action_t) = (yyvsp[0].drop_action_t);}
#line 3778 "bison_parser.cpp"
    break;

  case 93: /* drop_action: DROP COLUMN opt_exists column_name  */
#line 689 "bison_parser.y"
                                           {
            (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].expr)->name);
            (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
        }
#line 3787 "bison_parser.cpp"
    break;

  case 94: /* delete_statement: DELETE FROM table_name opt_where  */
#line 701 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3798 "bison_parser.cpp"
    break;

  case 95: /* truncate_statement: TRUNCATE table_name  */
#line 710 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3808 "bison_parser.cpp"
    break;

  case 96: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 723 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3820 "bison_parser.cpp"
    break;

  case 97: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 730 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3832 "bison_parser.cpp"
    break;

  case 98: /* opt_column_list: '(' ident_commalist ')'  */
#line 741 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3838 "bison_parser.cpp"
    break;

  case 99: /* opt_column_list: %empty  */
#line 742 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3844 "bison_parser.cpp"
    break;

  case 100: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 752 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3855 "bison_parser.cpp"
    break;

  case 101: /* update_clause_commalist: update_clause  */
#line 761 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3861 "bison_parser.cpp"
    break;

  case 102: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 762 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3867 "bison_parser.cpp"
    break;

  case 103: /* update_clause: IDENTIFIER '=' expr  */
#line 766 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3877 "bison_parser.cpp"
    break;

  case 104: /* select_statement: opt_with_clause select_with_paren  */
#line 778 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3886 "bison_parser.cpp"
    break;

  case 105: /* select_statement: opt_with_clause select_no_paren  */
#line 782 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3895 "bison_parser.cpp"
    break;

  case 106: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 786 "bison_parser.y"
                                                                                                               {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3911 "bison_parser.cpp"
    break;

  case 109: /* select_within_set_operation_no_parentheses: select_clause  */
#line 804 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3917 "bison_parser.cpp"
    break;

  case 110: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 805 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3930 "bison_parser.cpp"
    break;

  case 111: /* select_with_paren: '(' select_no_paren ')'  */
#line 816 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3936 "bison_parser.cpp"
    break;

  case 112: /* select_with_paren: '(' select_with_paren ')'  */
#line 817 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3942 "bison_parser.cpp"
    break;

  case 113: /* select_no_paren: select_clause opt_order opt_limit  */
#line 821 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3957 "bison_parser.cpp"
    break;

  case 114: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 831 "bison_parser.y"
                                                                                           {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3972 "bison_parser.cpp"
    break;

  case 115: /* set_operator: set_type opt_all  */
#line 844 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3981 "bison_parser.cpp"
    break;

  case 116: /* set_type: UNION  */
#line 851 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3990 "bison_parser.cpp"
    break;

  case 117: /* set_type: INTERSECT  */
#line 855 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3999 "bison_parser.cpp"
    break;

  case 118: /* set_type: EXCEPT  */
#line 859 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 4008 "bison_parser.cpp"
    break;

  case 119: /* opt_all: ALL  */
#line 866 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4016 "bison_parser.cpp"
    break;

  case 120: /* opt_all: %empty  */
#line 869 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4024 "bison_parser.cpp"
    break;

  case 121: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 875 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4038 "bison_parser.cpp"
    break;

  case 122: /* opt_distinct: DISTINCT  */
#line 887 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4044 "bison_parser.cpp"
    break;

  case 123: /* opt_distinct: %empty  */
#line 888 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4050 "bison_parser.cpp"
    break;

  case 125: /* opt_from_clause: from_clause  */
#line 896 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4056 "bison_parser.cpp"
    break;

  case 126: /* opt_from_clause: %empty  */
#line 897 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4062 "bison_parser.cpp"
    break;

  case 127: /* from_clause: FROM table_ref  */
#line 901 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4068 "bison_parser.cpp"
    break;

  case 128: /* opt_where: WHERE expr  */
#line 906 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4074 "bison_parser.cpp"
    break;

  case 129: /* opt_where: %empty  */
#line 907 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4080 "bison_parser.cpp"
    break;

  case 130: /* opt_group: GROUP BY expr_list opt_having  */
#line 911 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4090 "bison_parser.cpp"
    break;

  case 131: /* opt_group: %empty  */
#line 916 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4096 "bison_parser.cpp"
    break;

  case 132: /* opt_having: HAVING expr  */
#line 920 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4102 "bison_parser.cpp"
    break;

  case 133: /* opt_having: %empty  */
#line 921 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4108 "bison_parser.cpp"
    break;

  case 134: /* opt_order: ORDER BY order_list  */
#line 925 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4114 "bison_parser.cpp"
    break;

  case 135: /* opt_order: %empty  */
#line 926 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4120 "bison_parser.cpp"
    break;

  case 136: /* order_list: order_desc  */
#line 930 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4126 "bison_parser.cpp"
    break;

  case 137: /* order_list: order_list ',' order_desc  */
#line 931 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4132 "bison_parser.cpp"
    break;

  case 138: /* order_desc: expr opt_order_type  */
#line 935 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4138 "bison_parser.cpp"
    break;

  case 139: /* opt_order_type: ASC  */
#line 939 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4144 "bison_parser.cpp"
    break;

  case 140: /* opt_order_type: DESC  */
#line 940 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4150 "bison_parser.cpp"
    break;

  case 141: /* opt_order_type: %empty  */
#line 941 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4156 "bison_parser.cpp"
    break;

  case 142: /* opt_top: TOP int_literal  */
#line 947 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4162 "bison_parser.cpp"
    break;

  case 143: /* opt_top: %empty  */
#line 948 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4168 "bison_parser.cpp"
    break;

  case 144: /* opt_limit: LIMIT expr  */
#line 952 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4174 "bison_parser.cpp"
    break;

  case 145: /* opt_limit: OFFSET expr  */
#line 953 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4180 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: LIMIT expr OFFSET expr  */
#line 954 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4186 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: LIMIT ALL  */
#line 955 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4192 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 956 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4198 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: %empty  */
#line 957 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4204 "bison_parser.cpp"
    break;

  case 150: /* expr_list: expr_alias  */
#line 964 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4210 "bison_parser.cpp"
    break;

  case 151: /* expr_list: expr_list ',' expr_alias  */
#line 965 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4216 "bison_parser.cpp"
    break;

  case 152: /* opt_literal_list: literal_list  */
#line 969 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4222 "bison_parser.cpp"
    break;

  case 153: /* opt_literal_list: %empty  */
#line 970 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4228 "bison_parser.cpp"
    break;

  case 154: /* literal_list: literal  */
#line 974 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4234 "bison_parser.cpp"
    break;

  case 155: /* literal_list: literal_list ',' literal  */
#line 975 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4240 "bison_parser.cpp"
    break;

  case 156: /* expr_alias: expr opt_alias  */
#line 979 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4252 "bison_parser.cpp"
    break;

  case 162: /* operand: '(' expr ')'  */
#line 997 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4258 "bison_parser.cpp"
    break;

  case 172: /* operand: '(' select_no_paren ')'  */
#line 1007 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4264 "bison_parser.cpp"
    break;

  case 175: /* unary_expr: '-' operand  */
#line 1016 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4270 "bison_parser.cpp"
    break;

  case 176: /* unary_expr: NOT operand  */
#line 1017 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4276 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: operand ISNULL  */
#line 1018 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4282 "bison_parser.cpp"
    break;

  case 178: /* unary_expr: operand IS NULL  */
#line 1019 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4288 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: operand IS NOT NULL  */
#line 1020 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4294 "bison_parser.cpp"
    break;

  case 181: /* binary_expr: operand '-' operand  */
#line 1025 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4300 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand '+' operand  */
#line 1026 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4306 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '/' operand  */
#line 1027 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4312 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '*' operand  */
#line 1028 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4318 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '%' operand  */
#line 1029 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4324 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '^' operand  */
#line 1030 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4330 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand LIKE operand  */
#line 1031 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4336 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand NOT LIKE operand  */
#line 1032 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4342 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand ILIKE operand  */
#line 1033 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4348 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand CONCAT operand  */
#line 1034 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4354 "bison_parser.cpp"
    break;

  case 191: /* logic_expr: expr AND expr  */
#line 1038 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4360 "bison_parser.cpp"
    break;

  case 192: /* logic_expr: expr OR expr  */
#line 1039 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4366 "bison_parser.cpp"
    break;

  case 193: /* in_expr: operand IN '(' expr_list ')'  */
#line 1043 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4372 "bison_parser.cpp"
    break;

  case 194: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1044 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4378 "bison_parser.cpp"
    break;

  case 195: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1045 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4384 "bison_parser.cpp"
    break;

  case 196: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1046 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4390 "bison_parser.cpp"
    break;

  case 197: /* case_expr: CASE expr case_list END  */
#line 1052 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4396 "bison_parser.cpp"
    break;

  case 198: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1053 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4402 "bison_parser.cpp"
    break;

  case 199: /* case_expr: CASE case_list END  */
#line 1054 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4408 "bison_parser.cpp"
    break;

  case 200: /* case_expr: CASE case_list ELSE expr END  */
#line 1055 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4414 "bison_parser.cpp"
    break;

  case 201: /* case_list: WHEN expr THEN expr  */
#line 1059 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4420 "bison_parser.cpp"
    break;

  case 202: /* case_list: case_list WHEN expr THEN expr  */
#line 1060 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4426 "bison_parser.cpp"
    break;

  case 203: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1064 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4432 "bison_parser.cpp"
    break;

  case 204: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1065 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4438 "bison_parser.cpp"
    break;

  case 205: /* comp_expr: operand '=' operand  */
#line 1069 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4444 "bison_parser.cpp"
    break;

  case 206: /* comp_expr: operand EQUALS operand  */
#line 1070 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4450 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand NOTEQUALS operand  */
#line 1071 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4456 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand '<' operand  */
#line 1072 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4462 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand '>' operand  */
#line 1073 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4468 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand LESSEQ operand  */
#line 1074 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4474 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand GREATEREQ operand  */
#line 1075 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4480 "bison_parser.cpp"
    break;

  case 212: /* function_expr: IDENTIFIER '(' ')'  */
#line 1079 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4486 "bison_parser.cpp"
    break;

  case 213: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1080 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4492 "bison_parser.cpp"
    break;

  case 214: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1084 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4498 "bison_parser.cpp"
    break;

  case 215: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1088 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4504 "bison_parser.cpp"
    break;

  case 216: /* datetime_field: SECOND  */
#line 1092 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4510 "bison_parser.cpp"
    break;

  case 217: /* datetime_field: MINUTE  */
#line 1093 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4516 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: HOUR  */
#line 1094 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4522 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: DAY  */
#line 1095 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4528 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: MONTH  */
#line 1096 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4534 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: YEAR  */
#line 1097 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4540 "bison_parser.cpp"
    break;

  case 222: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1101 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4546 "bison_parser.cpp"
    break;

  case 223: /* array_index: operand '[' int_literal ']'  */
#line 1105 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4552 "bison_parser.cpp"
    break;

  case 224: /* between_expr: operand BETWEEN operand AND operand  */
#line 1109 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4558 "bison_parser.cpp"
    break;

  case 225: /* column_name: IDENTIFIER  */
#line 1113 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4564 "bison_parser.cpp"
    break;

  case 226: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1114 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4570 "bison_parser.cpp"
    break;

  case 227: /* column_name: '*'  */
#line 1115 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4576 "bison_parser.cpp"
    break;

  case 228: /* column_name: IDENTIFIER '.' '*'  */
#line 1116 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4582 "bison_parser.cpp"
    break;

  case 235: /* string_literal: STRING  */
#line 1129 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4588 "bison_parser.cpp"
    break;

  case 236: /* bool_literal: TRUE  */
#line 1133 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4594 "bison_parser.cpp"
    break;

  case 237: /* bool_literal: FALSE  */
#line 1134 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4600 "bison_parser.cpp"
    break;

  case 238: /* num_literal: FLOATVAL  */
#line 1138 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4606 "bison_parser.cpp"
    break;

  case 240: /* int_literal: INTVAL  */
#line 1143 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4612 "bison_parser.cpp"
    break;

  case 241: /* null_literal: NULL  */
#line 1147 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4618 "bison_parser.cpp"
    break;

  case 242: /* date_literal: DATE STRING  */
#line 1151 "bison_parser.y"
                            {
			int day{0}, month{0}, year{0}, chars_parsed{0};
			// If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
			if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
				YYERROR;
			}
			(yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
		}
#line 4633 "bison_parser.cpp"
    break;

  case 243: /* param_expr: '?'  */
#line 1164 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4643 "bison_parser.cpp"
    break;

  case 245: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1177 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4654 "bison_parser.cpp"
    break;

  case 249: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1193 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4665 "bison_parser.cpp"
    break;

  case 250: /* table_ref_commalist: table_ref_atomic  */
#line 1202 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4671 "bison_parser.cpp"
    break;

  case 251: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1203 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4677 "bison_parser.cpp"
    break;

  case 252: /* table_ref_name: table_name opt_table_alias  */
#line 1208 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4689 "bison_parser.cpp"
    break;

  case 253: /* table_ref_name_no_alias: table_name  */
#line 1219 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4699 "bison_parser.cpp"
    break;

  case 254: /* table_name: IDENTIFIER  */
#line 1228 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4705 "bison_parser.cpp"
    break;

  case 255: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1229 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4711 "bison_parser.cpp"
    break;

  case 256: /* opt_index_name: IDENTIFIER  */
#line 1233 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4717 "bison_parser.cpp"
    break;

  case 257: /* opt_index_name: %empty  */
#line 1234 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4723 "bison_parser.cpp"
    break;

  case 258: /* index_name: IDENTIFIER  */
#line 1238 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4729 "bison_parser.cpp"
    break;

  case 260: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1244 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4735 "bison_parser.cpp"
    break;

  case 262: /* opt_table_alias: %empty  */
#line 1250 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4741 "bison_parser.cpp"
    break;

  case 263: /* alias: AS IDENTIFIER  */
#line 1255 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4747 "bison_parser.cpp"
    break;

  case 264: /* alias: IDENTIFIER  */
#line 1256 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4753 "bison_parser.cpp"
    break;

  case 266: /* opt_alias: %empty  */
#line 1262 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4759 "bison_parser.cpp"
    break;

  case 268: /* opt_with_clause: %empty  */
#line 1272 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4765 "bison_parser.cpp"
    break;

  case 269: /* with_clause: WITH with_description_list  */
#line 1276 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4771 "bison_parser.cpp"
    break;

  case 270: /* with_description_list: with_description  */
#line 1280 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4780 "bison_parser.cpp"
    break;

  case 271: /* with_description_list: with_description_list ',' with_description  */
#line 1284 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4789 "bison_parser.cpp"
    break;

  case 272: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1291 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4799 "bison_parser.cpp"
    break;

  case 273: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1305 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4811 "bison_parser.cpp"
    break;

  case 274: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1313 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4824 "bison_parser.cpp"
    break;

  case 275: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1323 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4844 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: INNER  */
#line 1341 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4850 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: LEFT OUTER  */
#line 1342 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4856 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: LEFT  */
#line 1343 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4862 "bison_parser.cpp"
    break;

  case 279: /* opt_join_type: RIGHT OUTER  */
#line 1344 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4868 "bison_parser.cpp"
    break;

  case 280: /* opt_join_type: RIGHT  */
#line 1345 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4874 "bison_parser.cpp"
    break;

  case 281: /* opt_join_type: FULL OUTER  */
#line 1346 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4880 "bison_parser.cpp"
    break;

  case 282: /* opt_join_type: OUTER  */
#line 1347 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4886 "bison_parser.cpp"
    break;

  case 283: /* opt_join_type: FULL  */
#line 1348 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4892 "bison_parser.cpp"
    break;

  case 284: /* opt_join_type: CROSS  */
#line 1349 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4898 "bison_parser.cpp"
    break;

  case 285: /* opt_join_type: %empty  */
#line 1350 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4904 "bison_parser.cpp"
    break;

  case 289: /* ident_commalist: IDENTIFIER  */
#line 1370 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4910 "bison_parser.cpp"
    break;

  case 290: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1371 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4916 "bison_parser.cpp"
    break;


#line 4920 "bison_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1374 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
