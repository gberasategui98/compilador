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
#line 1 "gramatica.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

#line 78 "gramatica.tab.c" /* yacc.c:339  */

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
    T_OP_SUMA = 258,
    T_OP_RESTA = 259,
    T_OP_MULTI = 260,
    T_OP_DIV = 261,
    T_OP_MOD = 262,
    T_OP_DIV_ENT = 263,
    T_OP_REL_MENOR = 264,
    T_OP_REL_MAYOR = 265,
    T_OP_REL_IGUAL = 266,
    T_OP_REL_DIF = 267,
    T_OP_REL_MAYOR_IGUAL = 268,
    T_OP_REL_MENOR_IGUAL = 269,
    T_ALGORITMO = 270,
    T_ID = 271,
    T_COMP_SECUENCIAL = 272,
    T_FALGORITMO = 273,
    T_PUNTO = 274,
    T_COMENTARIO = 275,
    T_TIPO = 276,
    T_FTIPO = 277,
    T_CONST = 278,
    T_FCONST = 279,
    T_VAR = 280,
    T_FVAR = 281,
    T_CREAR_TIPO = 282,
    T_TUPLA = 283,
    T_FTUPLA = 284,
    T_TABLA = 285,
    T_INICIO_ARRAY = 286,
    T_SUBRANGO = 287,
    T_FIN_ARRAY = 288,
    T_DE = 289,
    T_REF = 290,
    T_TIPO_BASE = 291,
    T_LITERAL_CARACTER = 292,
    T_DEF_TIPO = 293,
    T_LITERAL = 294,
    T_COMA = 295,
    T_ENT = 296,
    T_SAL = 297,
    T_PARENTESIS_APERTURA = 298,
    T_PARENTESIS_CLAUSURA = 299,
    T_LITERAL_NUMERICO = 300,
    T_Y = 301,
    T_O = 302,
    T_NO = 303,
    T_VERDADERO = 304,
    T_FALSO = 305,
    T_IDENTIFICADOR = 306,
    T_CONTINUAR = 307,
    T_ASIGNACION = 308,
    T_SI = 309,
    T_SIMBOLO_BLOQUE_IF = 310,
    T_SIMBOLO_ELSE = 311,
    T_FSI = 312,
    T_MIENTRAS = 313,
    T_HACER = 314,
    T_FMIENTRAS = 315,
    T_PARA = 316,
    T_HASTA = 317,
    T_FPARA = 318,
    T_ACCION = 319,
    T_FACCION = 320,
    T_FUNCION = 321,
    T_DEV = 322,
    T_FFUNCION = 323,
    T_E_S = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "gramatica.y" /* yacc.c:355  */

	int ival;
	float fval;

#line 190 "gramatica.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 207 "gramatica.tab.c" /* yacc.c:358  */

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
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    46,    49,    52,    53,    54,    57,    58,
      59,    62,    65,    66,    67,    68,    71,    74,    77,    80,
      81,    84,    85,    86,    87,    88,    89,    92,    93,    96,
      97,   100,   101,   104,   105,   106,   109,   110,   113,   114,
     115,   118,   121,   124,   125,   126,   129,   130,   131,   132,
     133,   136,   137,   138,   139,   140,   143,   144,   145,   146,
     147,   148,   151,   152,   153,   154,   155,   156,   157,   160,
     161,   162,   163,   166,   167,   170,   171,   172,   173,   174,
     177,   180,   183,   184,   187,   187,   190,   193,   196,   199,
     202,   205,   208,   209,   212,   213,   214,   217,   220,   223,
     224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_OP_SUMA", "T_OP_RESTA", "T_OP_MULTI",
  "T_OP_DIV", "T_OP_MOD", "T_OP_DIV_ENT", "T_OP_REL_MENOR",
  "T_OP_REL_MAYOR", "T_OP_REL_IGUAL", "T_OP_REL_DIF",
  "T_OP_REL_MAYOR_IGUAL", "T_OP_REL_MENOR_IGUAL", "T_ALGORITMO", "T_ID",
  "T_COMP_SECUENCIAL", "T_FALGORITMO", "T_PUNTO", "T_COMENTARIO", "T_TIPO",
  "T_FTIPO", "T_CONST", "T_FCONST", "T_VAR", "T_FVAR", "T_CREAR_TIPO",
  "T_TUPLA", "T_FTUPLA", "T_TABLA", "T_INICIO_ARRAY", "T_SUBRANGO",
  "T_FIN_ARRAY", "T_DE", "T_REF", "T_TIPO_BASE", "T_LITERAL_CARACTER",
  "T_DEF_TIPO", "T_LITERAL", "T_COMA", "T_ENT", "T_SAL",
  "T_PARENTESIS_APERTURA", "T_PARENTESIS_CLAUSURA", "T_LITERAL_NUMERICO",
  "T_Y", "T_O", "T_NO", "T_VERDADERO", "T_FALSO", "T_IDENTIFICADOR",
  "T_CONTINUAR", "T_ASIGNACION", "T_SI", "T_SIMBOLO_BLOQUE_IF",
  "T_SIMBOLO_ELSE", "T_FSI", "T_MIENTRAS", "T_HACER", "T_FMIENTRAS",
  "T_PARA", "T_HASTA", "T_FPARA", "T_ACCION", "T_FACCION", "T_FUNCION",
  "T_DEV", "T_FFUNCION", "T_E_S", "$accept", "v_desc_algoritmo",
  "v_cabecera_alg", "v_bloque_alg", "v_decl_globales", "v_decl_a_f",
  "v_bloque", "v_declaraciones", "v_declaracion_tipo", "v_declaracion_cte",
  "v_declaracion_var", "v_lista_d_tipo", "v_d_tipo", "v_expresion_t",
  "v_lista_campos", "v_lista_d_cte", "v_lista_d_var", "v_lista_id",
  "v_decl_ent_sal", "v_decl_ent", "v_decl_sal", "v_expresion", "v_exp_a",
  "v_exp_b", "v_operando", "v_instrucciones", "v_instruccion",
  "v_asignacion", "v_alternativa", "v_lista_opciones", "v_iteracion",
  "v_it_cota_exp", "v_it_cota_fija", "v_accion_d", "v_funcion_d",
  "v_a_cabecera", "v_f_cabecera", "v_d_par_form", "v_d_p_form",
  "v_accion_ll", "v_funcion_ll", "v_l_ll", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -116

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    60,    43,    61,  -116,    -4,    69,    76,   -13,    -2,
      -4,    -4,    73,    80,    99,   104,   117,   119,   115,   111,
     -13,   -13,   -13,   129,   145,   116,    -2,    -2,  -116,  -116,
       5,   147,   132,   149,   138,   158,   165,   174,  -116,   152,
    -116,  -116,   151,   151,   164,    -1,  -116,   205,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,   180,   -13,   181,
     -13,   117,   117,   213,   192,  -116,  -116,  -116,    16,   193,
     219,   208,     5,  -116,  -116,    56,  -116,    47,  -116,  -116,
     220,   209,  -116,   252,   234,   207,  -116,  -116,   223,  -116,
     117,   232,   140,  -116,   151,   193,   196,   202,   199,   212,
     151,  -116,   151,   111,   156,   201,   117,   200,  -116,  -116,
    -116,  -116,    16,   198,    -6,   151,   230,   240,    20,  -116,
     206,   218,    47,   234,    -6,    69,    20,    16,    16,    16,
      16,    16,    16,    47,    47,    47,    47,    47,    47,    47,
      47,    76,  -116,  -116,   -12,   253,   231,   228,   111,   111,
     151,    -6,   241,  -116,  -116,   117,   117,   117,   229,   258,
    -116,   233,   151,   235,     5,  -116,   244,  -116,  -116,  -116,
    -116,   198,   198,  -116,  -116,  -116,  -116,   127,   127,   127,
     127,   127,   127,   234,   234,  -116,   117,   117,   151,  -116,
     222,   224,   221,  -116,   247,   248,   249,   265,   156,   225,
     226,  -116,   271,    20,  -116,  -116,  -116,   151,   236,  -116,
     151,  -116,  -116,  -116,  -116,  -116,     5,  -116,   219,   256,
     237,  -116,   238,   273,  -116,   261,   111,   111,  -116,     5,
     222,   239,  -116,  -116,  -116
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    37,     0,     0,     0,     4,     0,
      69,    75,     0,     0,     0,     0,    11,    74,    76,    77,
      78,    85,    84,    79,    12,    13,    14,     0,    15,     0,
      15,    35,    35,     0,    38,    40,     8,     9,     0,    23,
      30,     0,     0,    26,    28,     0,    54,     0,    60,    61,
       0,     0,    27,    43,    44,    53,    45,    16,     0,    17,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,    93,     0,    35,     0,    41,    42,
       3,    39,     0,    55,    53,     0,     0,     0,     0,    25,
       0,     0,     0,    58,    59,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    36,    18,     0,     0,   100,     0,     0,     0,
       0,    70,     0,    80,    73,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    21,     0,    52,    68,    19,
      24,    46,    47,    48,    49,    50,    51,    62,    63,    64,
      65,    66,    67,    56,    57,    31,    35,    35,     0,    97,
      83,     0,     0,    71,     0,     0,     0,     0,    93,     0,
       0,    98,     0,     0,    33,    34,    99,     0,     0,    86,
       0,    94,    95,    96,    90,    92,     0,    89,    30,     0,
       0,    81,     0,     0,    29,     0,     0,     0,    91,     0,
      83,     0,    22,    82,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,  -116,   170,   160,    15,     6,    27,    34,
    -116,   171,   -70,  -115,    81,   157,   -55,   -74,  -116,  -116,
     242,   -28,    11,    14,   -19,  -102,  -116,  -116,  -116,    70,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,   103,  -116,  -116,
    -116,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    80,    81,   117,    15,    35,    36,    63,    64,
      65,    82,    83,    84,    85,    46,    47,    48,    49,   208,
      50,    51,    52,    26,    27,    58,    60,   158,   159,    53,
      86,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   154,   119,   166,   163,   186,   108,   109,     6,    68,
       7,   170,    16,    99,    96,    97,   142,     6,    99,     7,
      68,    69,   145,     1,    68,   100,    54,    55,    56,   101,
     100,   115,    10,    70,   101,    71,    95,    10,    10,    11,
      72,    73,    74,     4,    11,    11,   190,   191,    75,   114,
      76,   161,   102,    77,    78,    79,    40,    74,   124,   112,
      68,    76,    23,    75,    24,    76,   146,    40,    77,    78,
      79,    40,   152,   105,   153,   107,     3,   206,     5,   113,
     151,   194,   195,   196,    45,    12,   120,   146,   219,   121,
     122,   123,    14,   114,   202,    77,    78,    79,    40,    75,
      30,    76,    31,   124,    77,    78,    79,    40,   114,   114,
     114,   114,   114,   114,   124,   124,   124,   124,   124,   124,
     124,   124,   192,   120,   230,   231,    32,    39,    33,    45,
      45,   204,   205,    34,   200,    38,   121,    37,   171,   172,
     173,   174,   175,   176,    68,    57,   223,   177,   178,   179,
     180,   181,   182,   183,   184,    68,   144,    61,    62,   232,
     146,    59,    40,    41,    87,    42,    89,    95,    70,    43,
      71,    88,    44,   139,   140,    72,    73,    74,    90,   220,
      28,    29,   222,    75,    91,    76,    66,    67,    77,    78,
      79,    40,    92,    93,    75,    94,    76,   155,   156,    77,
      78,    79,    40,   129,   130,   131,   132,    45,    45,   127,
     128,   129,   130,   131,   132,    98,   -59,   -59,   -59,   -59,
     -59,   -59,   103,   104,   106,   157,    99,   133,   134,   135,
     136,   137,   138,   110,    62,   116,   115,   125,   100,   118,
     141,   126,   101,   133,   134,   135,   136,   137,   138,   143,
     167,   148,   150,   -59,   -59,   127,   128,   129,   130,   131,
     132,   149,   168,    40,   139,   140,   160,   162,   164,   165,
     187,   188,   189,   197,   193,   198,   203,   199,   207,   201,
     139,   140,   214,   210,   209,   211,   212,   213,   218,   225,
     228,   226,   216,   221,   217,   229,   169,   227,   185,   224,
     233,   215,   234,     0,     0,     0,   111
};

static const yytype_int16 yycheck[] =
{
      19,   103,    72,   118,   115,    17,    61,    62,    21,     4,
      23,   126,    25,    19,    42,    43,    90,    21,    19,    23,
       4,    16,    92,    15,     4,    31,    20,    21,    22,    35,
      31,    43,     5,    28,    35,    30,    16,    10,    11,     5,
      35,    36,    37,     0,    10,    11,   148,   149,    43,    68,
      45,   106,    53,    48,    49,    50,    51,    37,    77,    43,
       4,    45,    64,    43,    66,    45,    94,    51,    48,    49,
      50,    51,   100,    58,   102,    60,    16,   188,    17,    68,
      99,   155,   156,   157,   103,    16,    75,   115,   203,    75,
      43,    77,    16,   112,   164,    48,    49,    50,    51,    43,
      27,    45,    22,   122,    48,    49,    50,    51,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   150,   112,   226,   227,    27,    16,    24,   148,
     149,   186,   187,    16,   162,    20,   122,    18,   127,   128,
     129,   130,   131,   132,     4,    16,   216,   133,   134,   135,
     136,   137,   138,   139,   140,     4,    16,    41,    42,   229,
     188,    16,    51,    52,    17,    54,    17,    16,    28,    58,
      30,    39,    61,    46,    47,    35,    36,    37,    40,   207,
      10,    11,   210,    43,    26,    45,    26,    27,    48,    49,
      50,    51,    27,    19,    43,    43,    45,    41,    42,    48,
      49,    50,    51,     5,     6,     7,     8,   226,   227,     3,
       4,     5,     6,     7,     8,    51,     9,    10,    11,    12,
      13,    14,    17,    43,    43,    69,    19,     9,    10,    11,
      12,    13,    14,    20,    42,    16,    43,    17,    31,    31,
      17,    32,    35,     9,    10,    11,    12,    13,    14,    17,
      44,    55,    53,    46,    47,     3,     4,     5,     6,     7,
       8,    59,    44,    51,    46,    47,    65,    67,    38,    29,
      17,    40,    44,    44,    33,    17,    32,    44,    56,    44,
      46,    47,    17,    62,    60,    38,    38,    38,    17,    33,
      17,    54,    67,    57,    68,    34,   125,    59,   141,   218,
     230,   198,    63,    -1,    -1,    -1,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    16,     0,    17,    21,    23,    72,    74,
      78,    79,    16,    81,    16,    85,    25,    73,    76,    77,
      78,    79,    80,    64,    66,    75,   103,   104,    74,    74,
      27,    22,    27,    24,    16,    86,    87,    18,    20,    16,
      51,    52,    54,    58,    61,    94,    95,    96,    97,    98,
     100,   101,   102,   109,    77,    77,    77,    16,   105,    16,
     106,    41,    42,    88,    89,    90,    75,    75,     4,    16,
      28,    30,    35,    36,    37,    43,    45,    48,    49,    50,
      82,    83,    91,    92,    93,    94,   110,    17,    39,    17,
      40,    26,    27,    19,    43,    16,    91,    91,    51,    19,
      31,    35,    53,    17,    43,    76,    43,    76,    86,    86,
      20,    90,    43,    92,    94,    43,    16,    84,    31,    82,
      92,    93,    43,    93,    94,    17,    32,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    46,
      47,    17,    87,    17,    16,    82,    91,   111,    55,    59,
      53,    94,    91,    91,    95,    41,    42,    69,   107,   108,
      65,    86,    67,   111,    38,    29,    83,    44,    44,    81,
      83,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    85,    17,    17,    40,    44,
      95,    95,    91,    33,    87,    87,    87,    44,    17,    44,
      91,    44,    82,    32,    86,    86,   111,    56,    99,    60,
      62,    38,    38,    38,    17,   107,    67,    68,    17,    83,
      91,    57,    91,    82,    84,    33,    54,    59,    17,    34,
      95,    95,    82,    99,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    74,    74,    75,    75,
      75,    76,    77,    77,    77,    77,    78,    79,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    88,    88,
      88,    89,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      97,    98,    99,    99,   100,   100,   101,   102,   103,   104,
     105,   106,   107,   107,   108,   108,   108,   109,   110,   111,
     111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     5,     0,     3,     1,     1,     2,
       1,     2,     2,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     3,     3,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     4,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     6,     5,     0,     1,     1,     5,     9,     4,     6,
       5,     7,     3,     0,     3,     3,     3,     4,     4,     3,
       1
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
#line 43 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
#line 1475 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
#line 1481 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "gramatica.y" /* yacc.c:1646  */
    { printf("v_bloque T_COMENTARIO\n"); }
#line 1487 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo v_decl_globales\n"); }
#line 1493 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte v_decl_globales\n"); }
#line 1499 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "gramatica.y" /* yacc.c:1646  */
    { printf("v_accion_d v_decl_a_f\n"); }
#line 1505 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "gramatica.y" /* yacc.c:1646  */
    { printf("v_funcion_d v_decl_a_f\n"); }
#line 1511 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaraciones v_instrucciones\n"); }
#line 1517 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo v_declaraciones\n"); }
#line 1523 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte v_declaraciones\n"); }
#line 1529 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_var v_declaraciones\n"); }
#line 1535 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
#line 1541 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "gramatica.y" /* yacc.c:1646  */
    { printf("T_CONST v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
#line 1547 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "gramatica.y" /* yacc.c:1646  */
    { printf("T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
#line 1553 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
#line 1559 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TUPLA v_lista_campos T_FTUPLA\n"); }
#line 1565 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
#line 1571 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID\n"); }
#line 1577 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion_t T_SUBRANGO v_expresion_t\n"); }
#line 1583 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "gramatica.y" /* yacc.c:1646  */
    { printf("T_REF v_d_tipo\n"); }
#line 1589 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TIPO_BASE\n"); }
#line 1595 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion\n"); }
#line 1601 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 93 "gramatica.y" /* yacc.c:1646  */
    { printf("T_LITERAL_CARACTER\n"); }
#line 1607 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
#line 1613 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte\n"); }
#line 1619 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "gramatica.y" /* yacc.c:1646  */
    { printf("v_lista_id T_CREAR_TIPO T_ID T_COMP_SECUENCIAL lista_d_var\n"); }
#line 1625 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "gramatica.y" /* yacc.c:1646  */
    { printf("v_lista_id T_CREAR_TIPO d_tipo T_COMP_SECUENCIAL lista_d_var\n"); }
#line 1631 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 109 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_COMA v_lista_id\n"); }
#line 1637 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 110 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID\n"); }
#line 1643 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 113 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_ent\n"); }
#line 1649 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 114 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_ent v_decl_sal\n"); }
#line 1655 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_sal\n"); }
#line 1661 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 118 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ENT v_lista_d_var\n"); }
#line 1667 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "gramatica.y" /* yacc.c:1646  */
    { printf("T_SAL v_lista_d_var\n"); }
#line 1673 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a\n")}
#line 1679 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 125 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b\n")}
#line 1685 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 126 "gramatica.y" /* yacc.c:1646  */
    {printf("v_funcion_ll\n")}
#line 1691 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 129 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_SUMA v_exp_a\n")}
#line 1697 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 130 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_RESTA v_exp_a\n")}
#line 1703 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 131 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_MULTI v_exp_a\n")}
#line 1709 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 132 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_DIV v_exp_a\n")}
#line 1715 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 133 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_MOD v_exp_a\n")}
#line 1721 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_DIV_ENT v_exp_a\n")}
#line 1727 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n")}
#line 1733 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando\n")}
#line 1739 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "gramatica.y" /* yacc.c:1646  */
    {printf("T_LITERAL_NUMERICO\n")}
#line 1745 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "gramatica.y" /* yacc.c:1646  */
    {printf("T_OP_RESTA v_exp_a\n")}
#line 1751 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_Y v_exp_b\n")}
#line 1757 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_O v_exp_b\n")}
#line 1763 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "gramatica.y" /* yacc.c:1646  */
    {printf("T_NO v_exp_b\n")}
#line 1769 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando\n")}
#line 1775 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "gramatica.y" /* yacc.c:1646  */
    {printf("T_VERDADERO\n")}
#line 1781 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "gramatica.y" /* yacc.c:1646  */
    {printf("T_FALSO\n")}
#line 1787 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MENOR v_exp_b\n")}
#line 1793 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MAYOR v_exp_b\n")}
#line 1799 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_IGUAL v_exp_b\n")}
#line 1805 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_DIF v_exp_b\n")}
#line 1811 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 155 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n")}
#line 1817 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 156 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n")}
#line 1823 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 157 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARENTESIS_APERTURA v_exp_b T_PARENTESIS_CLAUSURA\n")}
#line 1829 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 160 "gramatica.y" /* yacc.c:1646  */
    {printf("T_IDENTIFICADOR\n")}
#line 1835 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 161 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_PUNTO v_operando\n")}
#line 1841 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n")}
#line 1847 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_REF\n")}
#line 1853 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 166 "gramatica.y" /* yacc.c:1646  */
    {printf("v_instruccion T_COMP_SECUENCIAL v_instrucciones\n")}
#line 1859 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 167 "gramatica.y" /* yacc.c:1646  */
    {printf("v_instruccion\n")}
#line 1865 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 170 "gramatica.y" /* yacc.c:1646  */
    {printf("T_CONTINUAR\n")}
#line 1871 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 171 "gramatica.y" /* yacc.c:1646  */
    {printf("v_asignacion\n")}
#line 1877 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 172 "gramatica.y" /* yacc.c:1646  */
    {printf("v_alternativa\n")}
#line 1883 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 173 "gramatica.y" /* yacc.c:1646  */
    {printf("v_iteracion\n")}
#line 1889 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "gramatica.y" /* yacc.c:1646  */
    {printf("v_accion_ll\n")}
#line 1895 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_ASIGNACION v_expresion\n")}
#line 1901 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 180 "gramatica.y" /* yacc.c:1646  */
    {printf("T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n")}
#line 1907 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 183 "gramatica.y" /* yacc.c:1646  */
    {printf("T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n")}
#line 1913 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 187 "gramatica.y" /* yacc.c:1646  */
    {printf("v_it_cota_fija | v_it_cota_exp\n")}
#line 1919 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 190 "gramatica.y" /* yacc.c:1646  */
    {printf("T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n")}
#line 1925 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 193 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARA T_IDENTIFICADOR T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n")}
#line 1931 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 196 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ACCION v_a_cabecera bloque T_FACCION\n"); }
#line 1937 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 199 "gramatica.y" /* yacc.c:1646  */
    { printf("T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
#line 1943 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 202 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
#line 1949 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 208 "gramatica.y" /* yacc.c:1646  */
    { printf("v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
#line 1955 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 212 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ENT v_lista_id T_DEF_TIPO\n"); }
#line 1961 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 213 "gramatica.y" /* yacc.c:1646  */
    { printf("T_SAL v_lista_id T_DEF_TIPO\n"); }
#line 1967 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 214 "gramatica.y" /* yacc.c:1646  */
    { printf("T_E_S v_lista_id T_DEF_TIPO\n"); }
#line 1973 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 217 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 1979 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 220 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 1985 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 223 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion T_COMA v_l_ll\n"); }
#line 1991 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 224 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion\n"); }
#line 1997 "gramatica.tab.c" /* yacc.c:1646  */
    break;


#line 2001 "gramatica.tab.c" /* yacc.c:1646  */
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
#line 227 "gramatica.y" /* yacc.c:1906  */

int main( int argc, char **argv ) {
        ++argv, --argc; 
	yyin = fopen( argv[0], "r" );

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
