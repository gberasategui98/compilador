/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ProAlg.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include "TS.h"
#include "TablaCuadruplas.h"

/*
*
*/

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

TablaSimbolos *TS;
TablaCuadruplas *TC;


#line 88 "ProAlg.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ProAlg.tab.h".  */
#ifndef YY_YY_PROALG_TAB_H_INCLUDED
# define YY_YY_PROALG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_LITERAL_ENTERO = 258,
    T_LITERAL_BOOLEANO = 259,
    T_LITERAL_REAL = 260,
    T_LITERAL_CARACTER = 261,
    T_LITERAL_CADENA = 262,
    T_TIPO_ENTERO = 263,
    T_TIPO_BOOLEANO = 264,
    T_TIPO_CARACTER = 265,
    T_TIPO_REAL = 266,
    T_TIPO_CADENA = 267,
    T_ID = 268,
    T_ALGORITMO = 269,
    T_FALGORITMO = 270,
    T_COMENTARIO = 271,
    T_COMP_SECUENCIAL = 272,
    T_TIPO = 273,
    T_FTIPO = 274,
    T_CONSTANTE = 275,
    T_FCONST = 276,
    T_VAR = 277,
    T_FVAR = 278,
    T_CREAR_TIPO = 279,
    T_TUPLA = 280,
    T_FTUPLA = 281,
    T_TABLA = 282,
    T_INICIO_ARRAY = 283,
    T_SUBRANGO = 284,
    T_FIN_ARRAY = 285,
    T_DE = 286,
    T_REF = 287,
    T_DEF_TIPO = 288,
    T_SEPARADOR = 289,
    T_ENT = 290,
    T_SAL = 291,
    T_PARENTESIS_APERTURA = 292,
    T_PARENTESIS_CLAUSURA = 293,
    T_Y = 294,
    T_O = 295,
    T_NO = 296,
    T_VERDADERO = 297,
    T_FALSO = 298,
    T_CONTINUAR = 299,
    T_ASIGNACION = 300,
    T_SI = 301,
    T_SIMBOLO_BLOQUE_IF = 302,
    T_SIMBOLO_ELSE = 303,
    T_FSI = 304,
    T_MIENTRAS = 305,
    T_HACER = 306,
    T_FMIENTRAS = 307,
    T_PARA = 308,
    T_HASTA = 309,
    T_FPARA = 310,
    T_ACCION = 311,
    T_FACCION = 312,
    T_FUNCION = 313,
    T_DEV = 314,
    T_FFUNCION = 315,
    T_E_S = 316,
    T_OP_REL_MENOR = 317,
    T_OP_REL_MAYOR = 318,
    T_OP_REL_IGUAL = 319,
    T_OP_REL_DIF = 320,
    T_OP_REL_MAYOR_IGUAL = 321,
    T_OP_REL_MENOR_IGUAL = 322,
    T_OP_SUMA = 323,
    T_OP_RESTA = 324,
    T_OP_MULTI = 325,
    T_OP_DIV = 326,
    T_OP_MOD = 327,
    T_OP_DIV_ENT = 328,
    T_PUNTO = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "ProAlg.y" /* yacc.c:355  */

	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	struct tipo_exp exp;
	struct M m;
	struct tipo_sentencia sentencia;

#line 213 "ProAlg.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROALG_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "ProAlg.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    79,    82,    85,    86,    87,    90,    91,
      92,    95,    98,    99,   100,   101,   104,   107,   110,   113,
     114,   118,   119,   120,   124,   125,   126,   132,   133,   134,
     135,   136,   139,   140,   143,   144,   147,   148,   151,   152,
     153,   154,   157,   160,   163,   169,   177,   178,   179,   182,
     185,   188,   192,   195,   219,   243,   267,   293,   305,   317,
     328,   349,   354,   365,   376,   384,   390,   395,   398,   401,
     408,   415,   422,   429,   436,   444,   447,   455,   465,   469,
     470,   471,   474,   475,   478,   479,   480,   481,   482,   485,
     510,   522,   527,   532,   532,   535,   538,   541,   544,   547,
     550,   553,   554,   557,   558,   559,   562,   565,   568,   569
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LITERAL_ENTERO", "T_LITERAL_BOOLEANO",
  "T_LITERAL_REAL", "T_LITERAL_CARACTER", "T_LITERAL_CADENA",
  "T_TIPO_ENTERO", "T_TIPO_BOOLEANO", "T_TIPO_CARACTER", "T_TIPO_REAL",
  "T_TIPO_CADENA", "T_ID", "T_ALGORITMO", "T_FALGORITMO", "T_COMENTARIO",
  "T_COMP_SECUENCIAL", "T_TIPO", "T_FTIPO", "T_CONSTANTE", "T_FCONST",
  "T_VAR", "T_FVAR", "T_CREAR_TIPO", "T_TUPLA", "T_FTUPLA", "T_TABLA",
  "T_INICIO_ARRAY", "T_SUBRANGO", "T_FIN_ARRAY", "T_DE", "T_REF",
  "T_DEF_TIPO", "T_SEPARADOR", "T_ENT", "T_SAL", "T_PARENTESIS_APERTURA",
  "T_PARENTESIS_CLAUSURA", "T_Y", "T_O", "T_NO", "T_VERDADERO", "T_FALSO",
  "T_CONTINUAR", "T_ASIGNACION", "T_SI", "T_SIMBOLO_BLOQUE_IF",
  "T_SIMBOLO_ELSE", "T_FSI", "T_MIENTRAS", "T_HACER", "T_FMIENTRAS",
  "T_PARA", "T_HASTA", "T_FPARA", "T_ACCION", "T_FACCION", "T_FUNCION",
  "T_DEV", "T_FFUNCION", "T_E_S", "T_OP_REL_MENOR", "T_OP_REL_MAYOR",
  "T_OP_REL_IGUAL", "T_OP_REL_DIF", "T_OP_REL_MAYOR_IGUAL",
  "T_OP_REL_MENOR_IGUAL", "T_OP_SUMA", "T_OP_RESTA", "T_OP_MULTI",
  "T_OP_DIV", "T_OP_MOD", "T_OP_DIV_ENT", "T_PUNTO", "$accept",
  "v_desc_algoritmo", "v_cabecera_alg", "v_bloque_alg", "v_decl_globales",
  "v_decl_a_f", "v_bloque", "v_declaraciones", "v_declaracion_tipo",
  "v_declaracion_cte", "v_declaracion_var", "v_lista_d_tipo", "v_d_tipo",
  "v_tipo_base", "v_expresion_t", "v_lista_campos", "v_lista_d_cte",
  "v_literal", "v_lista_d_var", "v_lista_id", "v_decl_ent_sal",
  "v_decl_ent", "v_decl_sal", "v_expresion", "v_exp", "M",
  "v_literal_numerico", "v_operando", "v_instrucciones", "v_instruccion",
  "v_asignacion", "v_alternativa", "N", "v_iteracion", "v_it_cota_exp",
  "v_it_cota_fija", "v_accion_d", "v_funcion_d", "v_a_cabecera",
  "v_f_cabecera", "v_d_par_form", "v_d_p_form", "v_accion_ll",
  "v_funcion_ll", "v_l_ll", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    15,    37,    51,  -122,    59,    65,    80,    49,    71,
      59,    59,    64,    77,    92,    98,   118,   122,   119,    67,
      49,    49,    49,   128,   134,   -21,    71,    71,  -122,  -122,
      21,   127,   204,   137,    16,   125,   138,    82,  -122,   112,
    -122,   120,   120,   146,    10,  -122,   150,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,   135,    49,   136,    49,
     118,   118,   152,   139,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,     2,   172,   158,    21,   123,
     123,  -122,  -122,   123,   123,   170,  -122,   161,  -122,   166,
    -122,   -20,  -122,  -122,  -122,  -122,  -122,   199,  -122,  -122,
      21,   118,   200,   118,  -122,   120,   181,   173,   168,   176,
     120,  -122,   120,   209,    67,   -18,   167,   118,   164,  -122,
    -122,  -122,  -122,   120,   192,   201,   109,  -122,  -122,   131,
     111,  -122,  -122,    65,   109,  -122,  -122,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,    80,
    -122,  -122,  -122,  -122,   206,   188,  -122,    67,   120,   211,
    -122,  -122,  -122,   118,   118,   118,   210,   232,  -122,   212,
     120,   213,    21,  -122,   223,  -122,  -122,  -122,   123,   123,
     174,   174,   174,   174,   174,   174,   -50,   -50,  -122,  -122,
    -122,  -122,  -122,   120,  -122,    67,   202,   203,  -122,   220,
     222,   225,   239,   -18,   205,   207,  -122,   242,   109,   111,
     111,  -122,   214,  -122,   120,  -122,  -122,  -122,  -122,  -122,
      21,  -122,   172,   230,  -122,   217,   215,   244,  -122,   231,
    -122,    67,  -122,    21,    67,   216,  -122,   219,  -122,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    37,    15,    10,
       7,     7,     0,     0,     0,     0,    43,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    78,
      84,     0,     0,     0,     0,    11,    83,    85,    86,    87,
      94,    93,    88,    12,    13,    14,     0,    15,     0,    15,
      43,    43,     0,    46,    48,     8,     9,    76,    77,    33,
      29,    27,    28,    30,    31,    78,    35,     0,     0,     0,
       0,    67,    68,     0,     0,     0,    26,     0,    32,    51,
      61,    60,    52,    16,    40,    38,    41,     0,    39,    17,
       0,     0,     0,    43,     2,     0,    78,     0,     0,     0,
       0,    81,     0,     0,     0,   102,     0,    43,     0,    49,
      50,     3,    47,     0,     0,     0,     0,    25,    78,     0,
      66,    63,    62,    20,     0,    75,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      45,    44,    18,    42,   109,     0,    75,     0,     0,     0,
      89,    79,    82,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,    21,     0,    59,    19,    24,     0,     0,
      69,    70,    71,    72,    73,    74,    53,    54,    55,    56,
      57,    58,    36,     0,   106,     0,     0,     0,    80,     0,
       0,     0,     0,   102,     0,     0,   107,     0,     0,    64,
      65,   108,    92,    95,     0,   103,   104,   105,    99,   101,
       0,    98,    35,     0,    90,     0,     0,     0,    34,     0,
      75,     0,   100,     0,     0,     0,    22,     0,    96,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   132,    55,    75,    39,    46,    81,
    -122,   140,   -75,  -122,  -121,    47,   121,  -122,   -51,   -90,
    -122,  -122,   218,   -40,   -39,  -120,   240,   -19,  -110,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
      72,  -122,  -122,  -122,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    85,    86,    87,   125,    15,    97,    35,    36,
      62,    63,    64,    88,    89,   178,    90,    91,    45,    46,
      47,    48,   225,    49,    50,    51,    26,    27,    57,    59,
     166,   167,    52,    92,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   107,   108,   127,   162,   174,   171,     1,   110,   119,
     120,   151,   111,   177,    60,    61,   179,   163,   164,   -23,
     145,   146,   147,   148,    67,   150,    68,    69,     3,    70,
      71,    72,    73,    74,    75,   -23,   195,     4,   110,   123,
     129,   130,   111,   165,   131,   132,    76,   196,    77,   100,
     101,    10,   153,    78,   113,   112,    10,    10,    79,    53,
      54,    55,    80,    81,    82,   154,   169,     6,     5,     7,
     159,    16,   160,   199,   200,   201,   211,     6,    12,     7,
      39,    65,    66,   154,   113,   212,    11,   223,    30,    83,
      84,    11,    11,    14,   161,    44,    31,   207,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     234,    40,    67,    41,    68,    69,    32,    42,   197,    33,
      43,   235,   106,    67,   237,    68,    67,    23,    68,    24,
     205,    34,   116,   106,   118,    38,   128,    37,    44,   209,
     210,    56,    28,    29,    93,   227,    79,    58,   102,   105,
      80,    81,    82,   154,    99,   103,   104,    79,   236,   109,
      79,    80,    81,    82,    80,    81,    82,   114,   121,   175,
     135,   136,   115,   117,   226,    61,    44,    83,    84,   143,
     144,   145,   146,   147,   148,   124,   126,   133,    83,    84,
     134,    83,    84,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   135,   136,    67,    94,    68,
      95,    96,    44,   135,   136,    44,   149,   152,   123,   157,
     156,   158,   128,   170,   168,   172,   194,   173,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     193,   198,   143,   144,   145,   146,   147,   148,   202,   203,
     204,   206,   208,   215,   213,   216,   218,   214,   217,   222,
     229,   232,   233,   224,   220,   230,   231,   221,   239,   228,
     192,   238,    98,   176,     0,   219,     0,     0,     0,     0,
       0,   122
};

static const yytype_int16 yycheck[] =
{
      19,    41,    42,    78,   114,   126,   123,    14,    28,    60,
      61,   101,    32,   134,    35,    36,   136,    35,    36,    17,
      70,    71,    72,    73,     3,   100,     5,     6,    13,     8,
       9,    10,    11,    12,    13,    33,   156,     0,    28,    37,
      79,    80,    32,    61,    83,    84,    25,   157,    27,    33,
      34,     5,   103,    32,    74,    45,    10,    11,    37,    20,
      21,    22,    41,    42,    43,   105,   117,    18,    17,    20,
     110,    22,   112,   163,   164,   165,   193,    18,    13,    20,
      13,    26,    27,   123,    74,   195,     5,   208,    24,    68,
      69,    10,    11,    13,   113,   114,    19,   172,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     230,    44,     3,    46,     5,     6,    24,    50,   158,    21,
      53,   231,    13,     3,   234,     5,     3,    56,     5,    58,
     170,    13,    57,    13,    59,    16,    13,    15,   157,   178,
     179,    13,    10,    11,    17,   220,    37,    13,    23,    37,
      41,    42,    43,   193,    17,    17,    74,    37,   233,    13,
      37,    41,    42,    43,    41,    42,    43,    17,    16,    38,
      39,    40,    37,    37,   214,    36,   195,    68,    69,    68,
      69,    70,    71,    72,    73,    13,    28,    17,    68,    69,
      29,    68,    69,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    39,    40,     3,     4,     5,
       6,     7,   231,    39,    40,   234,    17,    17,    37,    51,
      47,    45,    13,    59,    57,    33,    38,    26,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      34,    30,    68,    69,    70,    71,    72,    73,    38,    17,
      38,    38,    29,    33,    52,    33,    17,    54,    33,    17,
      30,    17,    31,    49,    59,    48,    51,    60,    49,   222,
     149,    55,    32,   133,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    76,    13,     0,    17,    18,    20,    77,    79,
      83,    84,    13,    86,    13,    91,    22,    78,    81,    82,
      83,    84,    85,    56,    58,    80,   111,   112,    79,    79,
      24,    19,    24,    21,    13,    93,    94,    15,    16,    13,
      44,    46,    50,    53,   102,   103,   104,   105,   106,   108,
     109,   110,   117,    82,    82,    82,    13,   113,    13,   114,
      35,    36,    95,    96,    97,    80,    80,     3,     5,     6,
       8,     9,    10,    11,    12,    13,    25,    27,    32,    37,
      41,    42,    43,    68,    69,    87,    88,    89,    98,    99,
     101,   102,   118,    17,     4,     6,     7,    92,   101,    17,
      33,    34,    23,    17,    74,    37,    13,    98,    98,    13,
      28,    32,    45,    74,    17,    37,    81,    37,    81,    93,
      93,    16,    97,    37,    13,    90,    28,    87,    13,    99,
      99,    99,    99,    17,    29,    39,    40,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    17,
      87,    94,    17,    93,    98,   119,    47,    51,    45,    98,
      98,   102,   103,    35,    36,    61,   115,   116,    57,    93,
      59,   119,    33,    26,    89,    38,    86,    89,   100,   100,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    91,    34,    38,   100,   103,    98,    30,    94,
      94,    94,    38,    17,    38,    98,    38,    87,    29,    99,
      99,   119,   103,    52,    54,    33,    33,    33,    17,   115,
      59,    60,    17,    89,    49,   107,    98,    87,    90,    30,
      48,    51,    17,    31,   100,   103,    87,   103,    55,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   105,
     106,   106,   107,   108,   108,   109,   110,   111,   112,   113,
     114,   115,   115,   116,   116,   116,   117,   118,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     0,     5,     0,     1,     1,
       1,     1,     3,     0,     3,     3,     1,     2,     1,     2,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     2,     4,     4,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     0,     1,     1,     1,     3,
       4,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       6,    10,     0,     1,     1,     5,     9,     4,     6,     5,
       7,     3,     0,     3,     3,     3,     4,     4,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 76 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
#line 1497 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
#line 1503 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_bloque_alg: v_bloque T_COMENTARIO\n"); }
#line 1509 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 85 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_globales: v_declaracion_tipo v_decl_globales\n"); }
#line 1515 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_globales: v_declaracion_cte v_decl_globales\n"); }
#line 1521 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_a_f: v_accion_d v_decl_a_f\n"); }
#line 1527 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_a_f: v_funcion_d v_decl_a_f\n"); }
#line 1533 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_bloque: v_declaraciones v_instrucciones\n"); }
#line 1539 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_tipo v_declaraciones\n"); }
#line 1545 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_cte v_declaraciones\n"); }
#line 1551 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_var v_declaraciones\n"); }
#line 1557 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 104 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
#line 1563 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
#line 1569 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 110 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
#line 1575 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
#line 1581 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA\n"); }
#line 1587 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
#line 1593 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "ProAlg.y" /* yacc.c:1646  */
    { 
		printf("v_d_tipo: T_ID\n");
		//Falta almacenar el $$ el int correspondiente a este nuevo tipo (para que sea igual que con los tipos base)
		}
#line 1602 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 124 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: v_expresion_t T_SUBRANGO v_expresion_t\n"); }
#line 1608 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_REF v_d_tipo\n"); }
#line 1614 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "ProAlg.y" /* yacc.c:1646  */
    {
		printf("v_d_tipo: v_tipo_base\n");
		(yyval.int_val) = (yyvsp[0].int_val);
		}
#line 1623 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 132 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_tipo_base: booleano\n"); (yyval.int_val) = (yyvsp[0].int_val);}
#line 1629 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 133 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_tipo_base: caracter\n");(yyval.int_val) = (yyvsp[0].int_val);}
#line 1635 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_tipo_base: entero\n");(yyval.int_val) = (yyvsp[0].int_val);}
#line 1641 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 135 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_tipo_base: real\n");(yyval.int_val) = (yyvsp[0].int_val);}
#line 1647 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 136 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_tipo_base: cadena\n");(yyval.int_val) = (yyvsp[0].int_val);}
#line 1653 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 139 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_expresion_t: v_expresion\n"); }
#line 1659 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_expresion_t: T_LITERAL_CARACTER\n"); }
#line 1665 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
#line 1671 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 147 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_d_cte: T_ID T_CREAR_TIPO v_literal T_COMP_SECUENCIAL v_lista_d_cte\n"); }
#line 1677 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_CARACTER\n");}
#line 1683 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 152 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: v_literal_numerico\n");}
#line 1689 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 153 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_BOOLEANO\n");}
#line 1695 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 154 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_CADENA\n");}
#line 1701 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "ProAlg.y" /* yacc.c:1646  */
    { 
			printf("v_lista_d_var: v_lista_id v_lista_id T_COMP_SECUENCIAL v_lista_d_var\n"); 
		}
#line 1709 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 163 "ProAlg.y" /* yacc.c:1646  */
    { 
		printf("v_lista_id: T_ID T_SEPARADOR v_lista_id\n");
		int id_simbolo = insertar_en_TS(TS, (yyvsp[-2].str_val));
		modificar_tipo_TS(TS, id_simbolo, (yyvsp[0].int_val));
		(yyval.int_val) = (yyvsp[0].int_val); 
		}
#line 1720 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "ProAlg.y" /* yacc.c:1646  */
    { 
		printf("v_lista_id: T_ID T_DEF_TIPO v_d_tipo \n");
		int id_simbolo = insertar_en_TS(TS, (yyvsp[-2].str_val));
		modificar_tipo_TS(TS, id_simbolo, (yyvsp[0].int_val));
		(yyval.int_val) = (yyvsp[0].int_val);
		}
#line 1731 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 177 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_ent\n"); }
#line 1737 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_ent v_decl_sal\n"); }
#line 1743 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_sal\n"); }
#line 1749 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent: T_ENT v_lista_d_var\n"); }
#line 1755 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_sal: T_SAL v_lista_d_var\n"); }
#line 1761 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "ProAlg.y" /* yacc.c:1646  */
    {
		printf("v_expresion: v_exp_a\n");
		(yyval.exp)=(yyvsp[0].exp);
		}
#line 1770 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 192 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_expresion: v_funcion_ll\n");}
#line 1776 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "ProAlg.y" /* yacc.c:1646  */
    {//Bien
			printf("v_exp: v_exp_a T_OP_SUMA v_exp_a\n");
			int T_id = newtemp(TS);
			(yyval.exp).place = T_id;
			if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_SUMA_ENT, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = ENTERO;
		   }else if(((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[-2].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_SUMA_REAL, T_id, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[0].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_SUMA_REAL, (yyvsp[-2].exp).place, T_id, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_SUMA_REAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }
		}
#line 1805 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 219 "ProAlg.y" /* yacc.c:1646  */
    {//Bien
			printf("v_exp: v_exp_a T_OP_RESTA v_exp_a\n");
			int T_id = newtemp(TS);
		   (yyval.exp).place = T_id;
		   if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_RESTA_ENT, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = ENTERO;
		   }else if(((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[-2].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_RESTA_REAL, T_id, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[0].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_RESTA_REAL, (yyvsp[-2].exp).place, T_id, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_RESTA_REAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }
			}
#line 1834 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 243 "ProAlg.y" /* yacc.c:1646  */
    {//Bien
		   printf("v_exp: v_exp_a T_OP_MULTI v_exp_a\n");
		   int T_id = newtemp(TS);
		   (yyval.exp).place = T_id;
		   if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_MULTI_ENT, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = ENTERO;
		   }else if(((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[-2].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_MULTI_REAL, T_id, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[0].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_MULTI_REAL, (yyvsp[-2].exp).place, T_id, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_MULTI_REAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }
		  }
#line 1863 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 267 "ProAlg.y" /* yacc.c:1646  */
    { //Bien
            printf("v_exp: v_exp_a T_OP_DIV v_exp_a\n");
            int T_id = newtemp(TS);
			(yyval.exp).place = T_id;
			if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, REAL);
			   	gen(TC, TC_INTTOREAL, (yyvsp[-2].exp).place, TC_NULO, T_id);
			   	gen(TC, TC_INTTOREAL, (yyvsp[0].exp).place, TC_NULO, T_id);
			  	gen(TC, TC_OP_DIV_ENT, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[-2].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_DIV_REAL, T_id, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == ENTERO)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_INTTOREAL, (yyvsp[0].exp).place, TC_NULO, T_id);
				gen(TC, TC_OP_DIV_REAL, (yyvsp[-2].exp).place, T_id, T_id);
				(yyval.exp).type = REAL;
		   }else if(((yyvsp[-2].exp).type == REAL) && ((yyvsp[0].exp).type == REAL)){
				modificar_tipo_TS(TS, T_id, REAL);
				gen(TC, TC_OP_DIV_REAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = REAL;
		   }
        }
#line 1894 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 293 "ProAlg.y" /* yacc.c:1646  */
    { //Bien
            printf("v_exp: v_exp_a T_OP_MOD v_exp_a\n");
            int T_id = newtemp(TS);
			(yyval.exp).place = T_id;
			if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_MOD, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = ENTERO;
		   }else{
                yyerror("Error: el modulo solo esta definido para enteros");
		   }
        }
#line 1911 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 305 "ProAlg.y" /* yacc.c:1646  */
    {//Bien 
            printf("v_exp: v_exp_a T_OP_DIV_ENT v_exp_a\n");
            int T_id = newtemp(TS);
			(yyval.exp).place = T_id;
			if (((yyvsp[-2].exp).type == ENTERO) && ((yyvsp[0].exp).type == ENTERO)){
			   	modificar_tipo_TS(TS, T_id, ENTERO);
			  	gen(TC, TC_OP_DIVISION_ENTERA, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, T_id);
				(yyval.exp).type = ENTERO; 
		   }else{
                yyerror("Error: La división de enteros solo esta definido para enteros");
		   }
        }
#line 1928 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 317 "ProAlg.y" /* yacc.c:1646  */
    {//Bien (incluye exp_aritmetica y booleana)
		   printf("v_exp: T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n");
		   if((yyval.exp).type==ENTERO || (yyval.exp).type==REAL){
				(yyval.exp).place = (yyvsp[-1].exp).place;
				(yyval.exp).type = (yyvsp[-1].exp).type;
		   }
		   else{
			   (yyval.exp).true = (yyvsp[-1].exp).true;
			   (yyval.exp).false = (yyvsp[-1].exp).false;
		   }
		   }
#line 1944 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 328 "ProAlg.y" /* yacc.c:1646  */
    {//Duda:¿Como saber cuando se lee un operando si es para exp_aritmetica o booleana
	   				//Otra duda: ¿Como podemos evitar que el operando en el caso de los booleanos cree sus correspondientes
					//lineas de codigo intermedio según sea una condición de 'v_operando' o 'exp_a op_rel exp_b'?
		   printf("v_exp: v_operando\n");
		   Simbolo* sim = buscar_nombre(TS, (yyvsp[0].str_val));
		   if (sim==NULL){
			   char* mensaje = (char*) malloc(sizeof(char));
				sprintf(mensaje, "Error: Variable %s no declarada", (yyvsp[0].str_val));
				yyerror(mensaje);
		   }
		   //Caso exp_artimetica
		   (yyval.exp).place = sim->id;
		   (yyval.exp).type = consulta_tipo(TS, (yyvsp[0].str_val));
		   //Caso exp_booleana
		   
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   /*
		   gen(TC, TC_GOTO_OP_REL_IGUAL, sim->id, TC_VERDADERO, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);*/
		   }
#line 1970 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 349 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: v_literal_numerico\n");
			(yyval.exp).place = (yyvsp[0].exp).place;
			(yyval.exp).type = (yyvsp[0].exp).type;
        }
#line 1980 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 354 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: T_OP_RESTA v_exp_a\n");
		   int T_id = newtemp(TS);
		   modificar_tipo_TS(TS, T_id, (yyvsp[0].exp).type);
		   (yyval.exp).place = T_id;
		   if ((yyvsp[0].exp).type == ENTERO){
			   gen(TC, TC_OP_RESTA_UNI_ENT, (yyvsp[0].exp).place, TC_NULO, (yyval.exp).place);
		   }else if((yyvsp[0].exp).type == REAL){
			   gen(TC, TC_OP_RESTA_UNI_REAL, (yyvsp[0].exp).place, TC_NULO, (yyval.exp).place);
		   }
		}
#line 1996 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 365 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: T_OP_SUMA v_exp_a\n");
            int T_id = newtemp(TS);
            modificar_tipo_TS(TS, T_id, (yyvsp[0].exp).type);
            (yyval.exp).place = T_id;
            if ((yyvsp[0].exp).type == ENTERO){
                gen(TC, TC_OP_SUMA_UNI_ENT, (yyvsp[0].exp).place, TC_NULO, (yyval.exp).place);
            }else if((yyvsp[0].exp).type == REAL){
                gen(TC, TC_OP_SUMA_UNI_REAL, (yyvsp[0].exp).place, TC_NULO, (yyval.exp).place);
            }
        }
#line 2012 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 376 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: v_exp_b T_Y v_exp_b\n");
			backpatch(TC, (yyvsp[-3].exp).true, (yyvsp[-1].m).quad);
			printf("Peta aqui\n");
			(yyval.exp).false= merge((yyvsp[-3].exp).false, (yyvsp[0].exp).false);
			printf("Aqui ya no llega\n");
			(yyval.exp).true= (yyvsp[0].exp).true;
        }
#line 2025 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 384 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: v_exp_b T_O v_exp_b\n");
			backpatch(TC, (yyvsp[-3].exp).false, (yyvsp[-1].m).quad);
			(yyval.exp).true = merge((yyvsp[-3].exp).true, (yyvsp[0].exp).true);
			(yyval.exp).false = (yyvsp[0].exp).false;
        }
#line 2036 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 390 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: T_NO v_exp_b\n");
			(yyval.exp).true = (yyvsp[0].exp).false;
			(yyval.exp).false = (yyvsp[0].exp).true;
        }
#line 2046 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 395 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: T_VERDADERO\n");
        }
#line 2054 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 398 "ProAlg.y" /* yacc.c:1646  */
    {
            printf("v_exp: T_FALSO\n");
        }
#line 2062 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 401 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_MENOR v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MENOR, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   }
#line 2074 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 408 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_MAYOR v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MAYOR, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   }
#line 2086 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 415 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_IGUAL v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_IGUAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   }
#line 2098 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 422 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_DIF v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_DIF, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   }
#line 2110 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 429 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MAYOR_IGUAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
		   }
#line 2122 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 436 "ProAlg.y" /* yacc.c:1646  */
    {
		   printf("v_exp: v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n");
		   (yyval.exp).true= makelist(TC->nextquad);
		   (yyval.exp).false= makelist((TC->nextquad)+1);
		   gen(TC, TC_GOTO_OP_REL_MENOR_IGUAL, (yyvsp[-2].exp).place, (yyvsp[0].exp).place, TC_NULO);
		   gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);}
#line 2133 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 444 "ProAlg.y" /* yacc.c:1646  */
    {(yyval.m).quad = TC->nextquad;}
#line 2139 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 447 "ProAlg.y" /* yacc.c:1646  */
    {
						printf("v_literal_numerico: T_LITERAL_ENTERO\n");
						int T_id = newtemp(TS);
						modificar_tipo_TS(TS, T_id, ENTERO);
						gen(TC, TC_ASIG_LITERAL_ENTERO, (yyvsp[0].int_val), TC_NULO, T_id);
						(yyval.exp).place = T_id;
						(yyval.exp).type = ENTERO;
                    }
#line 2152 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 455 "ProAlg.y" /* yacc.c:1646  */
    {
						printf("v_literal_numerico: T_LITERAL_REAL\n");
						int T_id = newtemp(TS);
						modificar_tipo_TS(TS, T_id, REAL);
						gen(TC, TC_ASIG_LITERAL_REAL, (yyvsp[0].float_val), TC_NULO, T_id);
						(yyval.exp).place = T_id;
						(yyval.exp).type = REAL;
					}
#line 2165 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 465 "ProAlg.y" /* yacc.c:1646  */
    {
				printf("v_operando: T_ID\n");
				(yyval.str_val) = (yyvsp[0].str_val);
				}
#line 2174 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 469 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_PUNTO v_operando\n");}
#line 2180 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 470 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n");}
#line 2186 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 471 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_REF\n");}
#line 2192 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 474 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones\n");}
#line 2198 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 475 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instrucciones: v_instruccion\n");}
#line 2204 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 478 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: T_CONTINUAR\n");}
#line 2210 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 479 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_asignacion\n");}
#line 2216 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 480 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_alternativa\n");}
#line 2222 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 481 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_iteracion\n");}
#line 2228 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 482 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_accion_ll\n");}
#line 2234 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 485 "ProAlg.y" /* yacc.c:1646  */
    {
	printf("v_asignacion: v_operando T_ASIGNACION v_expresion\n");
	Simbolo *sim = buscar_nombre(TS, (yyvsp[-2].str_val));
	if (sim==NULL){
		char* mensaje = (char*) malloc(sizeof(char));
		sprintf(mensaje, "Error: Variable %s no declarada", (yyvsp[-2].str_val));
		yyerror(mensaje);
	}
	if (consulta_tipo(TS, (yyvsp[-2].str_val))==(yyvsp[0].exp).type){
		gen(TC, TC_ASIGNACION, (yyvsp[0].exp).place, TC_NULO, sim->id);
	}
	else{
		if ((consulta_tipo(TS, (yyvsp[-2].str_val))==REAL) && ((yyvsp[0].exp).type==ENTERO)){
			gen(TC, TC_ASIGNACION_INT_TO_REAL, (yyvsp[0].exp).place, TC_NULO, sim->id);
		}
		else{
			if ((consulta_tipo(TS, (yyvsp[-2].str_val))==ENTERO) && ((yyvsp[0].exp).type==REAL)){
				yyerror("Error: no se puede asignar un real a un entero\n");
			}
		}
	}
	}
#line 2261 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 510 "ProAlg.y" /* yacc.c:1646  */
    {
	printf("v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n");
	backpatch(TC, (yyvsp[-4].exp).true, (yyvsp[-2].m).quad);
	if(!empty((yyvsp[-1].sentencia))){
		(yyval.sentencia).next = merge((yyvsp[-4].exp).false, (yyvsp[-1].sentencia).next);
	}
	else{
		lista l = makelist(TC->nextquad);
		(yyval.sentencia).next = merge((yyvsp[-4].exp).false, l);
		gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
	}
	}
#line 2278 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 522 "ProAlg.y" /* yacc.c:1646  */
    {
		printf("v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF M v_instrucciones N T_SIMBOLO_ELSE M v_instrucciones T_FSI");
	}
#line 2286 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 527 "ProAlg.y" /* yacc.c:1646  */
    {(yyval.sentencia).next=makelist(TC->nextquad);
	gen(TC, TC_GOTO, TC_NULO, TC_NULO, TC_NULO);
	}
#line 2294 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 532 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_iteracion: v_it_cota_fija | v_it_cota_exp\n");}
#line 2300 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 535 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n");}
#line 2306 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 538 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_it_cota_fija: T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n");}
#line 2312 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 541 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_accion_d: T_ACCION v_a_cabecera bloque T_FACCION\n"); }
#line 2318 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 544 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
#line 2324 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 547 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
#line 2330 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 550 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL"); }
#line 2336 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 553 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
#line 2342 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 557 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_ENT v_lista_id T_DEF_TIPO\n"); }
#line 2348 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 558 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_SAL v_lista_id T_DEF_TIPO\n"); }
#line 2354 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 559 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_E_S v_lista_id T_DEF_TIPO\n"); }
#line 2360 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 562 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 2366 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 565 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 2372 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 568 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_l_ll: v_expresion T_CT_SEPARADOROMA v_l_ll\n"); }
#line 2378 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 569 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_l_ll: v_expresion\n"); }
#line 2384 "ProAlg.tab.c" /* yacc.c:1646  */
    break;


#line 2388 "ProAlg.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 572 "ProAlg.y" /* yacc.c:1906  */

int main( int argc, char **argv ) {
	/*
	#ifdef YYDEBUG
	yydebug = 1;
	#endif
	*/

	TS = crear_TS(); // Crear tabla de simbolos
	TC = crear_TC(); // Crear tabla de cuadruplas
	
	int flag;
	yyin = fopen( argv[1], "r" );
	flag = yyparse();
	imprimir_ts(TS);
	imprimir_tc(TC);
	
	lista l1 = makelist(5);
	lista l2 = makelist(6);
	lista l3 = merge(l1,l2);
	lista l4 = makelist(1);
	lista l5 = makelist(3);
	lista l6 = merge(l4,l5);
	lista l7 = makelist(4);
	lista l8 = makelist(98);
	lista l9 = merge(l7, l8);
	lista l10 = merge(l3, l6);
	lista l11 = merge(l9, l10);
	elem_lista *aux;
	aux = l11.first;
	while(aux!=NULL){
		printf("%d\n", aux->valor);
		aux = aux->next;
	}
	return flag;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
