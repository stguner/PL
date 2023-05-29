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
#line 1 "stg.y"

void yyerror (char *s);     /* C declarations used in actions */
int yylex();
#include <stdio.h>  
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
char* s = "";
int value = 0;
int if_value = 1;
int funcval = 1;
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void functionCall(char symbol);
void functionExp(char symbol);

#line 89 "y.tab.c"

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
    print = 258,                   /* print  */
    exit_command = 259,            /* exit_command  */
    assign = 260,                  /* assign  */
    plusplus = 261,                /* plusplus  */
    minusminus = 262,              /* minusminus  */
    lessthan = 263,                /* lessthan  */
    greaterthan = 264,             /* greaterthan  */
    isequal = 265,                 /* isequal  */
    notequal = 266,                /* notequal  */
    and = 267,                     /* and  */
    or = 268,                      /* or  */
    not = 269,                     /* not  */
    true = 270,                    /* true  */
    false = 271,                   /* false  */
    lessorequal = 272,             /* lessorequal  */
    greatorequal = 273,            /* greatorequal  */
    onelinecomment = 274,          /* onelinecomment  */
    multilinecomment = 275,        /* multilinecomment  */
    iff = 276,                     /* iff  */
    elsee = 277,                   /* elsee  */
    func = 278,                    /* func  */
    number = 279,                  /* number  */
    identifier = 280               /* identifier  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define print 258
#define exit_command 259
#define assign 260
#define plusplus 261
#define minusminus 262
#define lessthan 263
#define greaterthan 264
#define isequal 265
#define notequal 266
#define and 267
#define or 268
#define not 269
#define true 270
#define false 271
#define lessorequal 272
#define greatorequal 273
#define onelinecomment 274
#define multilinecomment 275
#define iff 276
#define elsee 277
#define func 278
#define number 279
#define identifier 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "stg.y"
int num; char id;

#line 195 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
  YYSYMBOL_print = 3,                      /* print  */
  YYSYMBOL_exit_command = 4,               /* exit_command  */
  YYSYMBOL_assign = 5,                     /* assign  */
  YYSYMBOL_plusplus = 6,                   /* plusplus  */
  YYSYMBOL_minusminus = 7,                 /* minusminus  */
  YYSYMBOL_lessthan = 8,                   /* lessthan  */
  YYSYMBOL_greaterthan = 9,                /* greaterthan  */
  YYSYMBOL_isequal = 10,                   /* isequal  */
  YYSYMBOL_notequal = 11,                  /* notequal  */
  YYSYMBOL_and = 12,                       /* and  */
  YYSYMBOL_or = 13,                        /* or  */
  YYSYMBOL_not = 14,                       /* not  */
  YYSYMBOL_true = 15,                      /* true  */
  YYSYMBOL_false = 16,                     /* false  */
  YYSYMBOL_lessorequal = 17,               /* lessorequal  */
  YYSYMBOL_greatorequal = 18,              /* greatorequal  */
  YYSYMBOL_onelinecomment = 19,            /* onelinecomment  */
  YYSYMBOL_multilinecomment = 20,          /* multilinecomment  */
  YYSYMBOL_iff = 21,                       /* iff  */
  YYSYMBOL_elsee = 22,                     /* elsee  */
  YYSYMBOL_func = 23,                      /* func  */
  YYSYMBOL_number = 24,                    /* number  */
  YYSYMBOL_identifier = 25,                /* identifier  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '-'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_32_ = 32,                       /* '='  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_line = 38,                      /* line  */
  YYSYMBOL_statements = 39,                /* statements  */
  YYSYMBOL_printstatement = 40,            /* printstatement  */
  YYSYMBOL_expression = 41,                /* expression  */
  YYSYMBOL_arithmeticexpression = 42,      /* arithmeticexpression  */
  YYSYMBOL_logicalexpression = 43,         /* logicalexpression  */
  YYSYMBOL_boolean = 44,                   /* boolean  */
  YYSYMBOL_term = 45,                      /* term  */
  YYSYMBOL_plusplusminusminusstatement = 46, /* plusplusminusminusstatement  */
  YYSYMBOL_assignmentstatement = 47,       /* assignmentstatement  */
  YYSYMBOL_assignment = 48,                /* assignment  */
  YYSYMBOL_comment = 49,                   /* comment  */
  YYSYMBOL_ifelsestatement = 50,           /* ifelsestatement  */
  YYSYMBOL_ifstatement = 51,               /* ifstatement  */
  YYSYMBOL_ifexpression = 52,              /* ifexpression  */
  YYSYMBOL_ifstatements = 53,              /* ifstatements  */
  YYSYMBOL_sts = 54,                       /* sts  */
  YYSYMBOL_ifsts = 55,                     /* ifsts  */
  YYSYMBOL_elsestatement = 56,             /* elsestatement  */
  YYSYMBOL_elsestatements = 57,            /* elsestatements  */
  YYSYMBOL_elsests = 58,                   /* elsests  */
  YYSYMBOL_functionstatement = 59,         /* functionstatement  */
  YYSYMBOL_funcexp = 60,                   /* funcexp  */
  YYSYMBOL_functioncallstatement = 61,     /* functioncallstatement  */
  YYSYMBOL_functionstates = 62,            /* functionstates  */
  YYSYMBOL_functionsts = 63                /* functionsts  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,     2,     2,     2,     2,    31,     2,     2,
      35,    36,    29,    27,     2,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    35,    38,    39,    40,    41,    42,    43,
      44,    47,    50,    51,    55,    56,    57,    58,    59,    60,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    78,    79,    82,    83,    87,    88,    91,    94,
      97,    98,   102,   103,   106,   109,   110,   114,   115,   116,
     117,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   140,
     141,   142,   143,   146,   149,   150,   151,   152,   155,   156,
     157,   158,   161,   164,   167,   170,   171,   172,   173,   176,
     177,   178,   179,   180
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
  "\"end of file\"", "error", "\"invalid token\"", "print",
  "exit_command", "assign", "plusplus", "minusminus", "lessthan",
  "greaterthan", "isequal", "notequal", "and", "or", "not", "true",
  "false", "lessorequal", "greatorequal", "onelinecomment",
  "multilinecomment", "iff", "elsee", "func", "number", "identifier",
  "';'", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'{'", "'}'", "'('",
  "')'", "$accept", "line", "statements", "printstatement", "expression",
  "arithmeticexpression", "logicalexpression", "boolean", "term",
  "plusplusminusminusstatement", "assignmentstatement", "assignment",
  "comment", "ifelsestatement", "ifstatement", "ifexpression",
  "ifstatements", "sts", "ifsts", "elsestatement", "elsestatements",
  "elsests", "functionstatement", "funcexp", "functioncallstatement",
  "functionstates", "functionsts", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-35)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     258,   260,   -14,   -12,   -35,   -35,   -32,    -2,   -28,   158,
     -35,   -35,   -35,   -35,     6,   -35,   -35,     9,    29,   -35,
      31,   -35,     5,   -35,   -35,   -35,   -35,    12,   181,    30,
     -35,   -35,    37,    43,   272,    35,   260,    39,   -35,   -35,
     -35,    47,   -35,   210,   226,   -35,   -35,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     5,     5,
       5,     5,   -35,   -35,    45,   181,   139,    48,   -35,    57,
     242,   275,     5,    58,    87,   176,   -35,   -35,     3,   -35,
     -35,   275,   -27,   -35,   -35,   -35,   -35,    71,   -35,   140,
     140,   -35,   -35,   140,   140,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   275,    59,
     -35,   -35,   -35,   132,   -35,   -35,    63,   275,     5,     5,
       5,     5,   -35,    -9,    -9,    -9,    -9,    -9,    -9,   -35,
      -9,    -9,    -9,    -9,    -9,   -35,   -35,   -35,   -35,   275,
     -35,   -35,   -35,   -35,   260,   -35,   -35,   -35,   -35,   -35,
      67,    75,    78,    80,    81,    83,    89,    90,    91,   102,
     110,   114,   115,   116,   119,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       2,     4,     5,     6,     0,     8,     7,    42,     0,     9,
       0,    10,     0,    32,    33,    34,    35,     0,    12,    13,
      31,    14,     0,     0,     0,     0,     0,     0,     1,     3,
      38,     0,    43,     0,     0,    30,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    35,     0,     0,     0,    39,     0,
       0,     0,     0,    35,     0,     0,    72,    71,     0,    47,
      48,     0,    35,    92,    91,    85,    93,     0,    86,    23,
      22,    26,    27,    25,    24,    15,    16,    17,    18,    19,
      28,    29,    20,    21,    46,    45,    83,    84,     0,    35,
      81,    80,    74,     0,    75,    70,     0,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,    44,    49,    50,    90,     0,
      82,    87,    88,    79,     0,    73,    76,    77,    66,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    78,    64,    65,    56,
      57,    59,    58,    62,    63,    61,    60,    51,    52,    53,
      54,    55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -35,   -35,   145,   -35,   -34,   -22,   121,     0,    -1,     1,
     -35,   -35,   -35,    24,   -35,   -35,   -35,    -5,    82,   -35,
     -35,    46,   -35,   -35,   -30,   -35,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     9,    10,    11,    27,    28,    29,    74,    75,    12,
      13,    14,    15,    16,    17,    18,    78,    79,    80,    42,
     113,   114,    19,    20,    21,    87,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,    30,    68,    34,    36,   139,    71,    37,    37,     2,
       3,    32,    65,    33,    86,    25,    26,    72,    23,    24,
      23,    24,    45,    35,     6,    89,    90,    25,    73,    93,
      94,    41,    40,    31,    30,    31,    30,   135,    46,    85,
      58,    59,    60,    61,    76,    83,    31,    31,    91,    92,
      31,    31,    95,    96,    97,    98,    99,    86,   100,   101,
     102,   103,    43,    62,    44,   112,   115,    77,    84,    63,
      67,   110,   116,   136,    81,    69,   138,     2,     3,    76,
      70,   104,   141,   107,   106,    72,    23,    24,    83,   148,
     117,   144,     6,   167,   111,    25,    82,   118,   119,   120,
     121,   168,    77,   143,   169,   140,   170,   171,   146,   172,
     166,    84,   149,   122,   110,   173,   174,   175,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   176,   160,
     161,   162,   163,   164,   165,   108,   177,   111,     2,     3,
     178,   179,   180,    31,    30,   181,    72,    23,    24,    58,
      59,    60,    61,     6,    39,    66,    25,   109,    38,   147,
     137,     1,     0,   142,     2,     3,   145,    53,    54,    55,
      56,    57,     0,     0,     0,   105,     0,     4,     5,     6,
       0,     7,     0,     8,   123,   124,   125,   126,     0,    47,
      48,    49,    50,   127,   128,     0,     0,     0,    51,    52,
       0,     0,   129,   130,   131,   132,   133,   134,    53,    54,
      55,    56,    57,    71,     0,     0,     2,     3,     0,     0,
       0,     0,     0,     0,    72,    23,    24,     0,     0,    81,
       0,     6,     2,     3,    25,    73,     0,     0,     0,     0,
      72,    23,    24,     0,     0,   108,     0,     6,     2,     3,
      25,    82,     0,     0,     0,     0,    72,    23,    24,     0,
       0,     1,     0,     6,     2,     3,    25,   109,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     4,     5,     6,
       0,     7,     0,     8,    25,    26,    22,    23,    24,    72,
      23,    24,     0,     0,     0,     0,    25,    64,     0,    25,
      26
};

static const yytype_int16 yycheck[] =
{
       1,     1,    36,    35,    32,    32,     3,    35,    35,     6,
       7,    25,    34,    25,    44,    24,    25,    14,    15,    16,
      15,    16,    22,    25,    21,    47,    48,    24,    25,    51,
      52,    22,    26,    34,    34,    36,    36,    34,    26,    44,
      10,    11,    12,    13,    43,    44,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    87,    58,    59,
      60,    61,    33,    26,    33,    70,    71,    43,    44,    26,
      35,    70,    72,    78,     3,    36,    81,     6,     7,    78,
      33,    36,    87,    26,    36,    14,    15,    16,    87,    26,
      32,    32,    21,    26,    70,    24,    25,    10,    11,    12,
      13,    26,    78,   108,    26,    34,    26,    26,   113,    26,
     144,    87,   117,    26,   113,    26,    26,    26,   118,   119,
     120,   121,   123,   124,   125,   126,   127,   128,    26,   130,
     131,   132,   133,   134,   139,     3,    26,   113,     6,     7,
      26,    26,    26,   144,   144,    26,    14,    15,    16,    10,
      11,    12,    13,    21,     9,    34,    24,    25,     0,   113,
      78,     3,    -1,    87,     6,     7,    34,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    36,    -1,    19,    20,    21,
      -1,    23,    -1,    25,     8,     9,    10,    11,    -1,     8,
       9,    10,    11,    17,    18,    -1,    -1,    -1,    17,    18,
      -1,    -1,    26,    27,    28,    29,    30,    31,    27,    28,
      29,    30,    31,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,     3,
      -1,    21,     6,     7,    24,    25,    -1,    -1,    -1,    -1,
      14,    15,    16,    -1,    -1,     3,    -1,    21,     6,     7,
      24,    25,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,
      -1,     3,    -1,    21,     6,     7,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    19,    20,    21,
      -1,    23,    -1,    25,    24,    25,    14,    15,    16,    14,
      15,    16,    -1,    -1,    -1,    -1,    24,    25,    -1,    24,
      25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,    19,    20,    21,    23,    25,    38,
      39,    40,    46,    47,    48,    49,    50,    51,    52,    59,
      60,    61,    14,    15,    16,    24,    25,    41,    42,    43,
      44,    45,    25,    25,    35,    25,    32,    35,     0,    39,
      26,    22,    56,    33,    33,    44,    26,     8,     9,    10,
      11,    17,    18,    27,    28,    29,    30,    31,    10,    11,
      12,    13,    26,    26,    25,    42,    43,    35,    41,    36,
      33,     3,    14,    25,    44,    45,    46,    50,    53,    54,
      55,     3,    25,    46,    50,    54,    61,    62,    63,    42,
      42,    45,    45,    42,    42,    45,    45,    45,    45,    45,
      44,    44,    44,    44,    36,    36,    36,    26,     3,    25,
      46,    50,    54,    57,    58,    54,    44,    32,    10,    11,
      12,    13,    26,     8,     9,    10,    11,    17,    18,    26,
      27,    28,    29,    30,    31,    34,    54,    55,    54,    32,
      34,    54,    63,    54,    32,    34,    54,    58,    26,    54,
      44,    44,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    54,    41,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    39,    39,
      39,    40,    41,    41,    42,    42,    42,    42,    42,    42,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    44,    45,    45,    46,    46,    47,    48,
      49,    49,    50,    50,    51,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    56,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    60,    61,    62,    62,    62,    62,    63,
      63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       1,     1,     1,     2,     4,     4,     4,     1,     1,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     2,     2,     3,
       2,     1,     1,     4,     1,     1,     2,     2,     3,     2,
       1,     1,     4,     4,     4,     1,     1,     2,     2,     3,
       2,     1,     1,     1
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
  case 11: /* printstatement: print expression ';'  */
#line 47 "stg.y"
                                                        {printf("Result: %d\n", (yyvsp[-1].num));}
#line 1382 "y.tab.c"
    break;

  case 12: /* expression: arithmeticexpression  */
#line 50 "stg.y"
                                                                        {(yyval.num) = (yyvsp[0].num);}
#line 1388 "y.tab.c"
    break;

  case 13: /* expression: logicalexpression  */
#line 51 "stg.y"
                                                                            {(yyval.num) = (yyvsp[0].num);}
#line 1394 "y.tab.c"
    break;

  case 14: /* arithmeticexpression: term  */
#line 55 "stg.y"
                                                                        {(yyval.num) = (yyvsp[0].num);}
#line 1400 "y.tab.c"
    break;

  case 15: /* arithmeticexpression: arithmeticexpression '+' term  */
#line 56 "stg.y"
                                                                        {(yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num);}
#line 1406 "y.tab.c"
    break;

  case 16: /* arithmeticexpression: arithmeticexpression '-' term  */
#line 57 "stg.y"
                                                                        {(yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num);}
#line 1412 "y.tab.c"
    break;

  case 17: /* arithmeticexpression: arithmeticexpression '*' term  */
#line 58 "stg.y"
                                                                        {(yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num);}
#line 1418 "y.tab.c"
    break;

  case 18: /* arithmeticexpression: arithmeticexpression '/' term  */
#line 59 "stg.y"
                                                                        {(yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num);}
#line 1424 "y.tab.c"
    break;

  case 19: /* arithmeticexpression: arithmeticexpression '%' term  */
#line 60 "stg.y"
                                                                        {(yyval.num) = (yyvsp[-2].num) % (yyvsp[0].num);}
#line 1430 "y.tab.c"
    break;

  case 20: /* logicalexpression: logicalexpression and boolean  */
#line 64 "stg.y"
                                                                                            {(yyval.num) = (yyvsp[-2].num) && (yyvsp[0].num);}
#line 1436 "y.tab.c"
    break;

  case 21: /* logicalexpression: logicalexpression or boolean  */
#line 65 "stg.y"
                                                                                                {(yyval.num) = (yyvsp[-2].num) || (yyvsp[0].num);}
#line 1442 "y.tab.c"
    break;

  case 22: /* logicalexpression: arithmeticexpression greaterthan arithmeticexpression  */
#line 66 "stg.y"
                                                                                        {(yyval.num) = (yyvsp[-2].num) > (yyvsp[0].num) ? 1 : 0;}
#line 1448 "y.tab.c"
    break;

  case 23: /* logicalexpression: arithmeticexpression lessthan arithmeticexpression  */
#line 67 "stg.y"
                                                                                {(yyval.num) = (yyvsp[-2].num) < (yyvsp[0].num) ? 1 : 0;}
#line 1454 "y.tab.c"
    break;

  case 24: /* logicalexpression: arithmeticexpression greatorequal arithmeticexpression  */
#line 68 "stg.y"
                                                                                {(yyval.num) = (yyvsp[-2].num) >= (yyvsp[0].num) ? 1 : 0;}
#line 1460 "y.tab.c"
    break;

  case 25: /* logicalexpression: arithmeticexpression lessorequal arithmeticexpression  */
#line 69 "stg.y"
                                                                                {(yyval.num) = (yyvsp[-2].num) <= (yyvsp[0].num) ? 1 : 0;}
#line 1466 "y.tab.c"
    break;

  case 26: /* logicalexpression: arithmeticexpression isequal term  */
#line 70 "stg.y"
                                                                                        {(yyval.num) = (yyvsp[-2].num) == (yyvsp[0].num) ? 1 : 0;}
#line 1472 "y.tab.c"
    break;

  case 27: /* logicalexpression: arithmeticexpression notequal term  */
#line 71 "stg.y"
                                                                                        {(yyval.num) = (yyvsp[-2].num) != (yyvsp[0].num) ? 1 : 0;}
#line 1478 "y.tab.c"
    break;

  case 28: /* logicalexpression: logicalexpression isequal boolean  */
#line 72 "stg.y"
                                                                                        {(yyval.num) = (yyvsp[-2].num) == (yyvsp[0].num) ? 1 : 0;}
#line 1484 "y.tab.c"
    break;

  case 29: /* logicalexpression: logicalexpression notequal boolean  */
#line 73 "stg.y"
                                                                                    {(yyval.num) = (yyvsp[-2].num) != (yyvsp[0].num) ? 1 : 0;}
#line 1490 "y.tab.c"
    break;

  case 30: /* logicalexpression: not boolean  */
#line 74 "stg.y"
                                                                                                        {(yyval.num) = !(yyvsp[0].num);}
#line 1496 "y.tab.c"
    break;

  case 31: /* logicalexpression: boolean  */
#line 75 "stg.y"
                                                                                                            {(yyval.num) = (yyvsp[0].num);}
#line 1502 "y.tab.c"
    break;

  case 32: /* boolean: true  */
#line 78 "stg.y"
                                        {(yyval.num) = 1;}
#line 1508 "y.tab.c"
    break;

  case 33: /* boolean: false  */
#line 79 "stg.y"
                                                {(yyval.num) = 0;}
#line 1514 "y.tab.c"
    break;

  case 34: /* term: number  */
#line 82 "stg.y"
                                {(yyval.num) = (yyvsp[0].num);}
#line 1520 "y.tab.c"
    break;

  case 35: /* term: identifier  */
#line 83 "stg.y"
                                                {(yyval.num) = symbolVal((yyvsp[0].id));}
#line 1526 "y.tab.c"
    break;

  case 36: /* plusplusminusminusstatement: plusplus identifier ';'  */
#line 87 "stg.y"
                                                        {updateSymbolVal((yyvsp[-1].id),symbolVal((yyvsp[-1].id)) + 1);}
#line 1532 "y.tab.c"
    break;

  case 37: /* plusplusminusminusstatement: minusminus identifier ';'  */
#line 88 "stg.y"
                                                        {updateSymbolVal((yyvsp[-1].id),symbolVal((yyvsp[-1].id)) - 1);}
#line 1538 "y.tab.c"
    break;

  case 38: /* assignmentstatement: assignment ';'  */
#line 91 "stg.y"
                                                {;}
#line 1544 "y.tab.c"
    break;

  case 39: /* assignment: identifier '=' expression  */
#line 94 "stg.y"
                                                {updateSymbolVal((yyvsp[-2].id),(yyvsp[0].num)); }
#line 1550 "y.tab.c"
    break;

  case 40: /* comment: onelinecomment  */
#line 97 "stg.y"
                                        {(yyval.num) = -1;}
#line 1556 "y.tab.c"
    break;

  case 41: /* comment: multilinecomment  */
#line 98 "stg.y"
                                                        {(yyval.num) = -1;}
#line 1562 "y.tab.c"
    break;

  case 44: /* ifstatement: ifexpression '{' ifstatements '}'  */
#line 106 "stg.y"
                                                        {if(if_value == 1) (yyval.num) = value;}
#line 1568 "y.tab.c"
    break;

  case 45: /* ifexpression: iff '(' logicalexpression ')'  */
#line 109 "stg.y"
                                                        {if_value = (yyvsp[-1].num);}
#line 1574 "y.tab.c"
    break;

  case 46: /* ifexpression: iff '(' identifier ')'  */
#line 110 "stg.y"
                                                {if_value = symbolVal((yyvsp[-1].id));}
#line 1580 "y.tab.c"
    break;

  case 51: /* sts: term '+' term ';'  */
#line 120 "stg.y"
                                                {value = (yyvsp[-3].num) + (yyvsp[-1].num);}
#line 1586 "y.tab.c"
    break;

  case 52: /* sts: term '-' term ';'  */
#line 121 "stg.y"
                                                {value = (yyvsp[-3].num) - (yyvsp[-1].num);}
#line 1592 "y.tab.c"
    break;

  case 53: /* sts: term '*' term ';'  */
#line 122 "stg.y"
                                        {value = (yyvsp[-3].num) * (yyvsp[-1].num);}
#line 1598 "y.tab.c"
    break;

  case 54: /* sts: term '/' term ';'  */
#line 123 "stg.y"
                                                {value = (yyvsp[-3].num) / (yyvsp[-1].num);}
#line 1604 "y.tab.c"
    break;

  case 55: /* sts: term '%' term ';'  */
#line 124 "stg.y"
                                                {value = (yyvsp[-3].num) % (yyvsp[-1].num);}
#line 1610 "y.tab.c"
    break;

  case 56: /* sts: boolean and boolean ';'  */
#line 125 "stg.y"
                                                {value = (yyvsp[-3].num) && (yyvsp[-1].num);}
#line 1616 "y.tab.c"
    break;

  case 57: /* sts: boolean or boolean ';'  */
#line 126 "stg.y"
                                                {value = (yyvsp[-3].num) || (yyvsp[-1].num);}
#line 1622 "y.tab.c"
    break;

  case 58: /* sts: term greaterthan term ';'  */
#line 127 "stg.y"
                                                                {value = (yyvsp[-3].num) > (yyvsp[-1].num) ? 1 : 0;}
#line 1628 "y.tab.c"
    break;

  case 59: /* sts: term lessthan term ';'  */
#line 128 "stg.y"
                                                                {value = (yyvsp[-3].num) < (yyvsp[-1].num) ? 1 : 0;}
#line 1634 "y.tab.c"
    break;

  case 60: /* sts: term greatorequal term ';'  */
#line 129 "stg.y"
                                                        {value = (yyvsp[-3].num) >= (yyvsp[-1].num) ? 1 : 0;}
#line 1640 "y.tab.c"
    break;

  case 61: /* sts: term lessorequal term ';'  */
#line 130 "stg.y"
                                                        {value = (yyvsp[-3].num) <= (yyvsp[-1].num) ? 1 : 0;}
#line 1646 "y.tab.c"
    break;

  case 62: /* sts: term isequal term ';'  */
#line 131 "stg.y"
                                                                {value = (yyvsp[-3].num) == (yyvsp[-1].num) ? 1 : 0;}
#line 1652 "y.tab.c"
    break;

  case 63: /* sts: term notequal term ';'  */
#line 132 "stg.y"
                                                        {value = (yyvsp[-3].num) != (yyvsp[-1].num) ? 1 : 0;}
#line 1658 "y.tab.c"
    break;

  case 64: /* sts: boolean isequal boolean ';'  */
#line 133 "stg.y"
                                                {value = (yyvsp[-3].num) == (yyvsp[-1].num) ? 1 : 0;}
#line 1664 "y.tab.c"
    break;

  case 65: /* sts: boolean notequal boolean ';'  */
#line 134 "stg.y"
                                                {value = (yyvsp[-3].num) != (yyvsp[-1].num) ? 1 : 0;}
#line 1670 "y.tab.c"
    break;

  case 66: /* sts: not boolean ';'  */
#line 135 "stg.y"
                                                        {value = !(yyvsp[-1].num);}
#line 1676 "y.tab.c"
    break;

  case 67: /* sts: boolean ';'  */
#line 136 "stg.y"
                                                        {value = (yyvsp[-1].num);}
#line 1682 "y.tab.c"
    break;

  case 68: /* sts: term ';'  */
#line 137 "stg.y"
                                                                {value = (yyvsp[-1].num);}
#line 1688 "y.tab.c"
    break;

  case 69: /* ifsts: identifier '=' sts  */
#line 140 "stg.y"
                                {if(if_value == 1) updateSymbolVal((yyvsp[-2].id),value);}
#line 1694 "y.tab.c"
    break;

  case 70: /* ifsts: print sts  */
#line 141 "stg.y"
                                                {if(if_value == 1) printf("Printing %d\n",value);}
#line 1700 "y.tab.c"
    break;

  case 71: /* ifsts: ifelsestatement  */
#line 142 "stg.y"
                                                {;}
#line 1706 "y.tab.c"
    break;

  case 73: /* elsestatement: elsee '{' elsestatements '}'  */
#line 146 "stg.y"
                                                {if(if_value == 0) (yyval.num) = value;}
#line 1712 "y.tab.c"
    break;

  case 78: /* elsests: identifier '=' expression  */
#line 155 "stg.y"
                                        {if(if_value == 0) updateSymbolVal((yyvsp[-2].id),value);}
#line 1718 "y.tab.c"
    break;

  case 79: /* elsests: print sts  */
#line 156 "stg.y"
                                                {if(if_value == 0) printf("Printing %d\n",value);}
#line 1724 "y.tab.c"
    break;

  case 80: /* elsests: ifelsestatement  */
#line 157 "stg.y"
                                                {;}
#line 1730 "y.tab.c"
    break;

  case 82: /* functionstatement: funcexp '{' functionstates '}'  */
#line 161 "stg.y"
                                                   {if(funcval == 1) (yyval.num) = value;}
#line 1736 "y.tab.c"
    break;

  case 83: /* funcexp: func identifier '(' ')'  */
#line 164 "stg.y"
                                  {functionExp((yyvsp[-2].id));}
#line 1742 "y.tab.c"
    break;

  case 84: /* functioncallstatement: identifier '(' ')' ';'  */
#line 167 "stg.y"
                                               {functionCall((yyvsp[-3].id));}
#line 1748 "y.tab.c"
    break;

  case 89: /* functionsts: identifier '=' sts  */
#line 176 "stg.y"
                                        {if(funcval == 1) updateSymbolVal((yyvsp[-2].id),value);}
#line 1754 "y.tab.c"
    break;

  case 90: /* functionsts: print sts  */
#line 177 "stg.y"
                                                {if(funcval == 1) printf("Printing %d\n",value);}
#line 1760 "y.tab.c"
    break;

  case 91: /* functionsts: ifelsestatement  */
#line 178 "stg.y"
                                                                        {;}
#line 1766 "y.tab.c"
    break;

  case 92: /* functionsts: plusplusminusminusstatement  */
#line 179 "stg.y"
                                                        {;}
#line 1772 "y.tab.c"
    break;

  case 93: /* functionsts: functioncallstatement  */
#line 180 "stg.y"
                                                                {;}
#line 1778 "y.tab.c"
    break;


#line 1782 "y.tab.c"

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

#line 182 "stg.y"


/* C code */

int computeSymbolIndex(char token)
{
    int idx = -1;
    if(islower(token)) {
        idx = token - 'a' + 26;
    }else if(isupper(token)) {
        idx = token - 'A';
    }
    return idx;
}

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
    int bucket = computeSymbolIndex(symbol);
    return symbols[bucket];
}

/* Updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
    int bucket = computeSymbolIndex(symbol);
    symbols[bucket] = val;
}

int main (void)
{   /* init symbol table */
    int i;
    for(i=0;i<52;i++) {
        symbols[i] = 0;
    }
    return yyparse ( );
}

void yyerror (char *s) 
{
    fprintf (stderr, "%s\n", s);
}

void functionCall(char symbol) {
	if (symbolVal(symbol) == -1) {
		funcval = 1;
		printf("%d\n", value);
		printf("%s\n", s);
	} else {
		printf("Function is not defined \n");
	}
}

void functionExp(char symbol)
{
	if(symbolVal(symbol) == -1){
		printf("The function already exists.\n");
	}
	if(symbolVal(symbol) != -1){
		updateSymbolVal(symbol, -1);	
	}	
}
