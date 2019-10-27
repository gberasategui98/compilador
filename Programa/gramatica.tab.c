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
    T_ALGORITMO = 258,
    T_ID = 259,
    T_COMP_SECUENCIAL = 260,
    T_FALGORITMO = 261,
    T_PUNTO = 262,
    T_COMENTARIO = 263,
    T_TIPO = 264,
    T_FTIPO = 265,
    T_CONST = 266,
    T_FCONST = 267,
    T_VAR = 268,
    T_FVAR = 269,
    T_CREAR_TIPO = 270,
    T_TUPLA = 271,
    T_FTUPLA = 272,
    T_TABLA = 273,
    T_INICIO_ARRAY = 274,
    T_SUBRANGO = 275,
    T_FIN_ARRAY = 276,
    T_DE = 277,
    T_REF = 278,
    T_TIPO_BASE = 279,
    T_LITERAL_CARACTER = 280,
    T_DEF_TIPO = 281,
    T_LITERAL = 282,
    T_COMA = 283,
    T_ENT = 284,
    T_SAL = 285,
    T_OP_SUMA = 286,
    T_OP_RESTA = 287,
    T_OP_MULTI = 288,
    T_OP_DIV = 289,
    T_OP_MOD = 290,
    T_OP_DIV_ENT = 291,
    T_PARENTESIS_APERTURA = 292,
    T_PARENTESIS_CLAUSURA = 293,
    T_LITERAL_NUMERICO = 294,
    T_Y = 295,
    T_O = 296,
    T_NO = 297,
    T_VERDADERO = 298,
    T_FALSO = 299,
    T_OP_REL_MENOR = 300,
    T_OP_REL_MAYOR = 301,
    T_OP_REL_IGUAL = 302,
    T_OP_REL_DIF = 303,
    T_OP_REL_MAYOR_IGUAL = 304,
    T_OP_REL_MENOR_IGUAL = 305,
    T_IDENTIFICADOR = 306,
    T_CONTINUAR = 307,
    T_ASIGNACION = 308,
    T_SI = 309,
    T_SIMBOLO_BLOQUE_IF = 310,
    T_FSI = 311,
    T_SIMBOLO_ELSE = 312,
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
#define YYLAST   302

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
       0,    40,    40,    43,    46,    49,    50,    51,    54,    55,
      56,    59,    62,    63,    64,    65,    68,    71,    74,    77,
      78,    81,    82,    83,    84,    85,    86,    89,    90,    93,
      94,    97,    98,   101,   102,   103,   106,   107,   110,   111,
     112,   115,   118,   121,   122,   123,   126,   127,   128,   129,
     130,   133,   134,   135,   136,   137,   140,   141,   142,   143,
     144,   145,   148,   149,   150,   151,   152,   153,   154,   157,
     158,   159,   160,   163,   164,   167,   168,   169,   170,   171,
     174,   177,   180,   181,   184,   184,   187,   190,   193,   196,
     199,   202,   205,   206,   209,   210,   211,   214,   217,   220,
     221
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALGORITMO", "T_ID",
  "T_COMP_SECUENCIAL", "T_FALGORITMO", "T_PUNTO", "T_COMENTARIO", "T_TIPO",
  "T_FTIPO", "T_CONST", "T_FCONST", "T_VAR", "T_FVAR", "T_CREAR_TIPO",
  "T_TUPLA", "T_FTUPLA", "T_TABLA", "T_INICIO_ARRAY", "T_SUBRANGO",
  "T_FIN_ARRAY", "T_DE", "T_REF", "T_TIPO_BASE", "T_LITERAL_CARACTER",
  "T_DEF_TIPO", "T_LITERAL", "T_COMA", "T_ENT", "T_SAL", "T_OP_SUMA",
  "T_OP_RESTA", "T_OP_MULTI", "T_OP_DIV", "T_OP_MOD", "T_OP_DIV_ENT",
  "T_PARENTESIS_APERTURA", "T_PARENTESIS_CLAUSURA", "T_LITERAL_NUMERICO",
  "T_Y", "T_O", "T_NO", "T_VERDADERO", "T_FALSO", "T_OP_REL_MENOR",
  "T_OP_REL_MAYOR", "T_OP_REL_IGUAL", "T_OP_REL_DIF",
  "T_OP_REL_MAYOR_IGUAL", "T_OP_REL_MENOR_IGUAL", "T_IDENTIFICADOR",
  "T_CONTINUAR", "T_ASIGNACION", "T_SI", "T_SIMBOLO_BLOQUE_IF", "T_FSI",
  "T_SIMBOLO_ELSE", "T_MIENTRAS", "T_HACER", "T_FMIENTRAS", "T_PARA",
  "T_HASTA", "T_FPARA", "T_ACCION", "T_FACCION", "T_FUNCION", "T_DEV",
  "T_FFUNCION", "T_E_S", "$accept", "v_desc_algoritmo", "v_cabecera_alg",
  "v_bloque_alg", "v_decl_globales", "v_decl_a_f", "v_bloque",
  "v_declaraciones", "v_declaracion_tipo", "v_declaracion_cte",
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

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     6,    13,    47,  -109,    53,    33,    57,     8,    10,
      53,    53,    50,    58,    68,    81,    93,    94,    96,     5,
       8,     8,     8,    95,   101,     3,    10,    10,  -109,  -109,
     177,   102,    79,   119,    97,   108,   111,   136,  -109,   123,
    -109,  -109,   229,   229,   105,     7,  -109,   140,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   138,     8,   141,
       8,    93,    93,   166,   147,  -109,  -109,  -109,   142,   178,
     165,   177,  -109,  -109,   -12,    -8,  -109,    35,  -109,  -109,
     180,   172,  -109,   137,   252,   241,  -109,  -109,   189,  -109,
      93,   191,   199,  -109,   229,   142,   143,   145,   144,   148,
     229,  -109,   229,     5,   -18,   146,    93,   139,  -109,  -109,
    -109,  -109,   229,   179,   193,   214,  -109,   -12,   137,    21,
     106,   117,    35,   252,    21,    33,   214,   -12,   -12,   -12,
     -12,   -12,   -12,    35,    35,    35,    35,    35,    35,    35,
      35,    57,  -109,  -109,     1,   207,   185,   187,     5,     5,
     229,    21,   205,  -109,  -109,    93,    93,    93,   192,   222,
    -109,   194,   229,   196,   177,  -109,   209,  -109,  -109,  -109,
    -109,   137,   137,   137,   137,   137,   137,   252,   252,   252,
     252,   252,   252,   252,   252,  -109,    93,    93,   229,  -109,
     183,   175,   182,  -109,   211,   219,   221,   244,   -18,   188,
     184,  -109,   249,   214,  -109,  -109,  -109,   229,   203,  -109,
     229,  -109,  -109,  -109,  -109,  -109,   177,  -109,   178,   242,
     208,  -109,   210,   262,  -109,   248,     5,     5,  -109,   177,
     183,   212,  -109,  -109,  -109
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
      15,    35,    35,     0,    38,    40,     8,     9,    23,    30,
       0,     0,    26,    28,     0,     0,    54,     0,    60,    61,
       0,     0,    27,    43,    44,    53,    45,    16,     0,    17,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,    93,     0,    35,     0,    41,    42,
       3,    39,     0,     0,     0,     0,    25,     0,    55,    53,
       0,     0,     0,    58,    59,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    36,    18,     0,     0,   100,     0,     0,     0,
       0,    70,     0,    80,    73,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    21,     0,    52,    68,    19,
      24,    46,    47,    48,    49,    50,    51,    56,    57,    62,
      63,    64,    65,    66,    67,    31,    35,    35,     0,    97,
      83,     0,     0,    71,     0,     0,     0,     0,    93,     0,
       0,    98,     0,     0,    33,    34,    99,     0,     0,    86,
       0,    94,    95,    96,    90,    92,     0,    89,    30,     0,
       0,    81,     0,     0,    29,     0,     0,     0,    91,     0,
      83,     0,    22,    82,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,    31,    19,    32,    28,    77,    91,
    -109,   149,   -70,  -108,    60,   135,   -59,   -86,  -109,  -109,
     213,   -27,    59,    14,   -19,   -95,  -109,  -109,  -109,    49,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,    85,  -109,  -109,
    -109,  -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    80,    81,   114,    15,    35,    36,    63,    64,
      65,    82,    83,    84,    85,    46,    47,    48,    49,   208,
      50,    51,    52,    26,    27,    58,    60,   158,   159,    53,
      86,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   116,   108,   109,   142,   163,   186,   166,   154,    39,
       3,   155,   156,     4,    99,    96,    97,     6,   170,     7,
      74,    16,   145,     1,    74,   117,   100,    76,    99,    75,
     101,    76,    61,    62,    77,    78,    79,    12,   112,    40,
     100,    28,    29,    40,   101,    66,    67,   161,    54,    55,
      56,   157,     5,   190,   191,   119,    40,    41,   124,    42,
     102,    14,     6,    43,     7,    30,    44,   146,    31,   194,
     195,   196,   122,   152,    23,   153,    24,    77,    78,    79,
     151,   206,    10,    32,    45,   146,    40,    10,    10,   121,
     105,   123,   107,    33,   202,   219,    11,    34,   119,    57,
      37,    11,    11,   124,    38,    59,    88,    87,   119,   119,
     119,   119,   119,   119,   124,   124,   124,   124,   124,   124,
     124,   124,    91,   192,    89,    90,    92,   204,   205,    45,
      45,   230,   231,   118,   120,   200,   121,   127,   128,   129,
     130,   131,   132,    93,   167,   103,   223,   177,   178,   179,
     180,   181,   182,   183,   184,   168,    98,   133,   134,   232,
      94,   146,   135,   136,   137,   138,   139,   140,   127,   128,
     129,   130,   131,   132,   110,   104,   120,    62,   106,   112,
     220,    68,   113,   222,   115,   125,   171,   172,   173,   174,
     175,   176,   126,    69,   141,    70,   143,   150,   148,    40,
      71,    72,    73,   144,   149,   164,   162,    45,    45,    74,
     165,   160,   187,   188,    75,    69,    76,    70,    95,    77,
      78,    79,    71,    72,    73,   189,   193,   198,    40,   203,
     197,    74,   199,    95,   201,   209,    75,   211,    76,    73,
     207,    77,    78,    79,   210,   212,    74,   213,    99,   214,
      40,    75,   217,    76,   218,   216,    77,    78,    79,   221,
     100,    74,   226,   225,   101,    40,    75,   228,    76,   227,
     229,    77,    78,    79,   169,   234,   185,   111,   224,   233,
      40,   -59,   -59,   215,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   133,   134,     0,     0,     0,   135,   136,   137,
     138,   139,   140
};

static const yytype_int16 yycheck[] =
{
      19,    71,    61,    62,    90,   112,     5,   115,   103,     4,
       4,    29,    30,     0,     7,    42,    43,     9,   126,    11,
      32,    13,    92,     3,    32,    37,    19,    39,     7,    37,
      23,    39,    29,    30,    42,    43,    44,     4,    37,    51,
      19,    10,    11,    51,    23,    26,    27,   106,    20,    21,
      22,    69,     5,   148,   149,    74,    51,    52,    77,    54,
      53,     4,     9,    58,    11,    15,    61,    94,    10,   155,
     156,   157,    37,   100,    64,   102,    66,    42,    43,    44,
      99,   188,     5,    15,   103,   112,    51,    10,    11,    75,
      58,    77,    60,    12,   164,   203,     5,     4,   117,     4,
       6,    10,    11,   122,     8,     4,    27,     5,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,    14,   150,     5,    28,    15,   186,   187,   148,
     149,   226,   227,    74,    75,   162,   122,    31,    32,    33,
      34,    35,    36,     7,    38,     5,   216,   133,   134,   135,
     136,   137,   138,   139,   140,    38,    51,    40,    41,   229,
      37,   188,    45,    46,    47,    48,    49,    50,    31,    32,
      33,    34,    35,    36,     8,    37,   117,    30,    37,    37,
     207,     4,     4,   210,    19,     5,   127,   128,   129,   130,
     131,   132,    20,    16,     5,    18,     5,    53,    55,    51,
      23,    24,    25,     4,    59,    26,    67,   226,   227,    32,
      17,    65,     5,    28,    37,    16,    39,    18,     4,    42,
      43,    44,    23,    24,    25,    38,    21,     5,    51,    20,
      38,    32,    38,     4,    38,    60,    37,    26,    39,    25,
      57,    42,    43,    44,    62,    26,    32,    26,     7,     5,
      51,    37,    68,    39,     5,    67,    42,    43,    44,    56,
      19,    32,    54,    21,    23,    51,    37,     5,    39,    59,
      22,    42,    43,    44,   125,    63,   141,    64,   218,   230,
      51,    40,    41,   198,    -1,    -1,    45,    46,    47,    48,
      49,    50,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    71,     4,     0,     5,     9,    11,    72,    74,
      78,    79,     4,    81,     4,    85,    13,    73,    76,    77,
      78,    79,    80,    64,    66,    75,   103,   104,    74,    74,
      15,    10,    15,    12,     4,    86,    87,     6,     8,     4,
      51,    52,    54,    58,    61,    94,    95,    96,    97,    98,
     100,   101,   102,   109,    77,    77,    77,     4,   105,     4,
     106,    29,    30,    88,    89,    90,    75,    75,     4,    16,
      18,    23,    24,    25,    32,    37,    39,    42,    43,    44,
      82,    83,    91,    92,    93,    94,   110,     5,    27,     5,
      28,    14,    15,     7,    37,     4,    91,    91,    51,     7,
      19,    23,    53,     5,    37,    76,    37,    76,    86,    86,
       8,    90,    37,     4,    84,    19,    82,    37,    92,    94,
      92,    93,    37,    93,    94,     5,    20,    31,    32,    33,
      34,    35,    36,    40,    41,    45,    46,    47,    48,    49,
      50,     5,    87,     5,     4,    82,    91,   111,    55,    59,
      53,    94,    91,    91,    95,    29,    30,    69,   107,   108,
      65,    86,    67,   111,    26,    17,    83,    38,    38,    81,
      83,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    85,     5,     5,    28,    38,
      95,    95,    91,    21,    87,    87,    87,    38,     5,    38,
      91,    38,    82,    20,    86,    86,   111,    57,    99,    60,
      62,    26,    26,    26,     5,   107,    67,    68,     5,    83,
      91,    56,    91,    82,    84,    21,    54,    59,     5,    22,
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
#line 40 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
#line 1475 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
#line 1481 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "gramatica.y" /* yacc.c:1646  */
    { printf("v_bloque T_COMENTARIO\n"); }
#line 1487 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo v_decl_globales\n"); }
#line 1493 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte v_decl_globales\n"); }
#line 1499 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "gramatica.y" /* yacc.c:1646  */
    { printf("v_accion_d v_decl_a_f\n"); }
#line 1505 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "gramatica.y" /* yacc.c:1646  */
    { printf("v_funcion_d v_decl_a_f\n"); }
#line 1511 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaraciones v_instrucciones\n"); }
#line 1517 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo v_declaraciones\n"); }
#line 1523 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte v_declaraciones\n"); }
#line 1529 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "gramatica.y" /* yacc.c:1646  */
    { printf("v_declaracion_var v_declaraciones\n"); }
#line 1535 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
#line 1541 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "gramatica.y" /* yacc.c:1646  */
    { printf("T_CONST v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
#line 1547 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "gramatica.y" /* yacc.c:1646  */
    { printf("T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
#line 1553 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 77 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
#line 1559 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TUPLA v_lista_campos T_FTUPLA\n"); }
#line 1565 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
#line 1571 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID\n"); }
#line 1577 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 84 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion_t T_SUBRANGO v_expresion_t\n"); }
#line 1583 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "gramatica.y" /* yacc.c:1646  */
    { printf("T_REF v_d_tipo\n"); }
#line 1589 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 86 "gramatica.y" /* yacc.c:1646  */
    { printf("T_TIPO_BASE\n"); }
#line 1595 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion\n"); }
#line 1601 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "gramatica.y" /* yacc.c:1646  */
    { printf("T_LITERAL_CARACTER\n"); }
#line 1607 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 93 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
#line 1613 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_CREAR_TIPO T_LITERAL T_COMP_SECUENCIAL v_lista_d_cte\n"); }
#line 1619 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "gramatica.y" /* yacc.c:1646  */
    { printf("v_lista_id T_CREAR_TIPO T_ID T_COMP_SECUENCIAL lista_d_var\n"); }
#line 1625 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "gramatica.y" /* yacc.c:1646  */
    { printf("v_lista_id T_CREAR_TIPO d_tipo T_COMP_SECUENCIAL lista_d_var\n"); }
#line 1631 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_COMA v_lista_id\n"); }
#line 1637 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID\n"); }
#line 1643 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_ent\n"); }
#line 1649 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_ent v_decl_sal\n"); }
#line 1655 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "gramatica.y" /* yacc.c:1646  */
    { printf("v_decl_sal\n"); }
#line 1661 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ENT v_lista_d_var\n"); }
#line 1667 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 118 "gramatica.y" /* yacc.c:1646  */
    { printf("T_SAL v_lista_d_var\n"); }
#line 1673 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a\n")}
#line 1679 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 122 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b\n")}
#line 1685 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 123 "gramatica.y" /* yacc.c:1646  */
    {printf("v_funcion_ll\n")}
#line 1691 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_SUMA v_exp_a\n")}
#line 1697 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_RESTA v_exp_a\n")}
#line 1703 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_MULTI v_exp_a\n")}
#line 1709 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_DIV v_exp_a\n")}
#line 1715 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_MOD v_exp_a\n")}
#line 1721 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_a T_OP_DIV_ENT v_exp_a\n")}
#line 1727 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 134 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n")}
#line 1733 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 135 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando\n")}
#line 1739 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 136 "gramatica.y" /* yacc.c:1646  */
    {printf("T_LITERAL_NUMERICO\n")}
#line 1745 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 137 "gramatica.y" /* yacc.c:1646  */
    {printf("T_OP_RESTA v_exp_a\n")}
#line 1751 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_Y v_exp_b\n")}
#line 1757 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_O v_exp_b\n")}
#line 1763 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "gramatica.y" /* yacc.c:1646  */
    {printf("T_NO v_exp_b\n")}
#line 1769 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 143 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando\n")}
#line 1775 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 144 "gramatica.y" /* yacc.c:1646  */
    {printf("T_VERDADERO\n")}
#line 1781 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 145 "gramatica.y" /* yacc.c:1646  */
    {printf("T_FALSO\n")}
#line 1787 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 148 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MENOR v_exp_b\n")}
#line 1793 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 149 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MAYOR v_exp_b\n")}
#line 1799 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 150 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_IGUAL v_exp_b\n")}
#line 1805 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 151 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_DIF v_exp_b\n")}
#line 1811 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 152 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n")}
#line 1817 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 153 "gramatica.y" /* yacc.c:1646  */
    {printf("v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n")}
#line 1823 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARENTESIS_APERTURA v_exp_b T_PARENTESIS_CLAUSURA\n")}
#line 1829 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 157 "gramatica.y" /* yacc.c:1646  */
    {printf("T_IDENTIFICADOR\n")}
#line 1835 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 158 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_PUNTO v_operando\n")}
#line 1841 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 159 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n")}
#line 1847 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_REF\n")}
#line 1853 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "gramatica.y" /* yacc.c:1646  */
    {printf("v_instruccion T_COMP_SECUENCIAL v_instrucciones\n")}
#line 1859 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "gramatica.y" /* yacc.c:1646  */
    {printf("v_instruccion\n")}
#line 1865 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "gramatica.y" /* yacc.c:1646  */
    {printf("T_CONTINUAR\n")}
#line 1871 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 168 "gramatica.y" /* yacc.c:1646  */
    {printf("v_asignacion\n")}
#line 1877 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 169 "gramatica.y" /* yacc.c:1646  */
    {printf("v_alternativa\n")}
#line 1883 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "gramatica.y" /* yacc.c:1646  */
    {printf("v_iteracion\n")}
#line 1889 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 171 "gramatica.y" /* yacc.c:1646  */
    {printf("v_accion_ll\n")}
#line 1895 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 174 "gramatica.y" /* yacc.c:1646  */
    {printf("v_operando T_ASIGNACION v_expresion\n")}
#line 1901 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 177 "gramatica.y" /* yacc.c:1646  */
    {printf("T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n")}
#line 1907 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 180 "gramatica.y" /* yacc.c:1646  */
    {printf("T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n")}
#line 1913 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 184 "gramatica.y" /* yacc.c:1646  */
    {printf("v_it_cota_fija | v_it_cota_exp\n")}
#line 1919 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 187 "gramatica.y" /* yacc.c:1646  */
    {printf("T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n")}
#line 1925 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "gramatica.y" /* yacc.c:1646  */
    {printf("T_PARA T_IDENTIFICADOR T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n")}
#line 1931 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 193 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ACCION v_a_cabecera bloque T_FACCION\n"); }
#line 1937 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 196 "gramatica.y" /* yacc.c:1646  */
    { printf("T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
#line 1943 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 199 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
#line 1949 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 205 "gramatica.y" /* yacc.c:1646  */
    { printf("v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
#line 1955 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 209 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ENT v_lista_id T_DEF_TIPO\n"); }
#line 1961 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 210 "gramatica.y" /* yacc.c:1646  */
    { printf("T_SAL v_lista_id T_DEF_TIPO\n"); }
#line 1967 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 211 "gramatica.y" /* yacc.c:1646  */
    { printf("T_E_S v_lista_id T_DEF_TIPO\n"); }
#line 1973 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 214 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 1979 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 217 "gramatica.y" /* yacc.c:1646  */
    { printf("T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 1985 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 220 "gramatica.y" /* yacc.c:1646  */
    { printf("v_expresion T_COMA v_l_ll\n"); }
#line 1991 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 221 "gramatica.y" /* yacc.c:1646  */
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
#line 224 "gramatica.y" /* yacc.c:1906  */

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
