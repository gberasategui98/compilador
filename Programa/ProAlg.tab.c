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

/*
* NOTA: T_LITERAL_CARACTER y T_LITERAL_NUMERICO reemplazados por 'T_LITERAL'
*/

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

#line 83 "ProAlg.tab.c" /* yacc.c:339  */

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
    T_ALGORITMO = 263,
    T_ID = 264,
    T_FALGORITMO = 265,
    T_COMENTARIO = 266,
    T_COMP_SECUENCIAL = 267,
    T_TIPO = 268,
    T_FTIPO = 269,
    T_CONSTANTE = 270,
    T_FCONST = 271,
    T_VAR = 272,
    T_FVAR = 273,
    T_CREAR_TIPO = 274,
    T_TUPLA = 275,
    T_FTUPLA = 276,
    T_TABLA = 277,
    T_INICIO_ARRAY = 278,
    T_SUBRANGO = 279,
    T_FIN_ARRAY = 280,
    T_DE = 281,
    T_REF = 282,
    T_TIPO_BASE = 283,
    T_DEF_TIPO = 284,
    T_SEPARADOR = 285,
    T_ENT = 286,
    T_SAL = 287,
    T_PARENTESIS_APERTURA = 288,
    T_PARENTESIS_CLAUSURA = 289,
    T_Y = 290,
    T_O = 291,
    T_NO = 292,
    T_VERDADERO = 293,
    T_FALSO = 294,
    T_CONTINUAR = 295,
    T_ASIGNACION = 296,
    T_SI = 297,
    T_SIMBOLO_BLOQUE_IF = 298,
    T_SIMBOLO_ELSE = 299,
    T_FSI = 300,
    T_MIENTRAS = 301,
    T_HACER = 302,
    T_FMIENTRAS = 303,
    T_PARA = 304,
    T_HASTA = 305,
    T_FPARA = 306,
    T_ACCION = 307,
    T_FACCION = 308,
    T_FUNCION = 309,
    T_DEV = 310,
    T_FFUNCION = 311,
    T_E_S = 312,
    T_OP_REL_MENOR = 313,
    T_OP_REL_MAYOR = 314,
    T_OP_REL_IGUAL = 315,
    T_OP_REL_DIF = 316,
    T_OP_REL_MAYOR_IGUAL = 317,
    T_OP_REL_MENOR_IGUAL = 318,
    T_OP_SUMA = 319,
    T_OP_RESTA = 320,
    T_OP_MULTI = 321,
    T_OP_DIV = 322,
    T_OP_MOD = 323,
    T_OP_DIV_ENT = 324,
    T_PUNTO = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "ProAlg.y" /* yacc.c:355  */

	char char_val;
	int int_val;
	double float_val;
	char* str_val;
	//list_t* symtab_item;

#line 202 "ProAlg.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROALG_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "ProAlg.tab.c" /* yacc.c:358  */

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
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    64,    67,    70,    71,    72,    75,    76,
      77,    80,    83,    84,    85,    86,    89,    92,    95,    98,
      99,   103,   104,   105,   106,   107,   108,   111,   112,   115,
     116,   119,   120,   123,   124,   125,   126,   129,   130,   134,
     137,   138,   141,   142,   143,   146,   149,   152,   153,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   180,   181,   183,   184,   185,   186,   189,   190,   193,
     194,   195,   196,   197,   200,   203,   207,   208,   211,   211,
     214,   217,   220,   223,   226,   229,   232,   233,   236,   237,
     238,   241,   244,   247,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LITERAL_ENTERO", "T_LITERAL_BOOLEANO",
  "T_LITERAL_REAL", "T_LITERAL_CARACTER", "T_LITERAL_CADENA",
  "T_ALGORITMO", "T_ID", "T_FALGORITMO", "T_COMENTARIO",
  "T_COMP_SECUENCIAL", "T_TIPO", "T_FTIPO", "T_CONSTANTE", "T_FCONST",
  "T_VAR", "T_FVAR", "T_CREAR_TIPO", "T_TUPLA", "T_FTUPLA", "T_TABLA",
  "T_INICIO_ARRAY", "T_SUBRANGO", "T_FIN_ARRAY", "T_DE", "T_REF",
  "T_TIPO_BASE", "T_DEF_TIPO", "T_SEPARADOR", "T_ENT", "T_SAL",
  "T_PARENTESIS_APERTURA", "T_PARENTESIS_CLAUSURA", "T_Y", "T_O", "T_NO",
  "T_VERDADERO", "T_FALSO", "T_CONTINUAR", "T_ASIGNACION", "T_SI",
  "T_SIMBOLO_BLOQUE_IF", "T_SIMBOLO_ELSE", "T_FSI", "T_MIENTRAS",
  "T_HACER", "T_FMIENTRAS", "T_PARA", "T_HASTA", "T_FPARA", "T_ACCION",
  "T_FACCION", "T_FUNCION", "T_DEV", "T_FFUNCION", "T_E_S",
  "T_OP_REL_MENOR", "T_OP_REL_MAYOR", "T_OP_REL_IGUAL", "T_OP_REL_DIF",
  "T_OP_REL_MAYOR_IGUAL", "T_OP_REL_MENOR_IGUAL", "T_OP_SUMA",
  "T_OP_RESTA", "T_OP_MULTI", "T_OP_DIV", "T_OP_MOD", "T_OP_DIV_ENT",
  "T_PUNTO", "$accept", "v_desc_algoritmo", "v_cabecera_alg",
  "v_bloque_alg", "v_decl_globales", "v_decl_a_f", "v_bloque",
  "v_declaraciones", "v_declaracion_tipo", "v_declaracion_cte",
  "v_declaracion_var", "v_lista_d_tipo", "v_d_tipo", "v_expresion_t",
  "v_lista_campos", "v_lista_d_cte", "v_literal", "v_lista_d_var",
  "v_lista_id", "v_decl_ent_sal", "v_decl_ent", "v_decl_sal",
  "v_expresion", "v_exp", "v_literal_numerico", "v_operando",
  "v_instrucciones", "v_instruccion", "v_asignacion", "v_alternativa",
  "v_lista_opciones", "v_iteracion", "v_it_cota_exp", "v_it_cota_fija",
  "v_accion_d", "v_funcion_d", "v_a_cabecera", "v_f_cabecera",
  "v_d_par_form", "v_d_p_form", "v_accion_ll", "v_funcion_ll", "v_l_ll", YY_NULLPTR
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
     325
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,     9,    22,    27,  -118,    15,    34,    44,   124,   -12,
      15,    15,    48,    62,    76,    68,    72,    88,    89,   107,
     124,   124,   124,   112,   117,    86,   -12,   -12,  -118,  -118,
     137,   126,   174,   138,    95,   140,     0,    82,  -118,   133,
    -118,    32,    32,   151,    -8,  -118,   155,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,   135,   124,   157,   124,
      72,    72,   160,   141,  -118,  -118,  -118,  -118,  -118,  -118,
       5,   177,   175,   137,  -118,    55,    55,  -118,  -118,    55,
      55,   185,   176,  -118,   168,  -118,    -7,  -118,  -118,  -118,
    -118,  -118,   187,  -118,  -118,   137,    72,   193,    72,   197,
    -118,    32,   190,   164,   161,   183,    32,  -118,    32,   216,
     107,   -21,   186,    72,   188,  -118,  -118,  -118,  -118,    32,
     209,   219,    18,  -118,  -118,   153,    64,  -118,  -118,    34,
      18,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    44,  -118,  -118,  -118,  -118,
     229,   212,   210,   107,   107,    32,   220,  -118,  -118,  -118,
      72,    72,    72,   213,   234,  -118,   214,    32,   215,   137,
    -118,   226,  -118,  -118,  -118,    64,    64,   127,   127,   127,
     127,   127,   127,   116,   116,  -118,  -118,  -118,  -118,  -118,
      72,    32,  -118,   207,   204,   203,  -118,   225,   227,   228,
     243,   -21,   205,   202,  -118,   247,    18,  -118,  -118,    32,
     217,  -118,    32,  -118,  -118,  -118,  -118,  -118,   137,  -118,
     177,   236,   221,  -118,   218,   251,  -118,   240,   107,   107,
    -118,   137,   207,   222,  -118,  -118,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    39,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    73,
      79,     0,     0,     0,     0,    11,    78,    80,    81,    82,
      89,    88,    83,    12,    13,    14,     0,    15,     0,    15,
      39,    39,     0,    42,    44,     8,     9,    71,    72,    28,
      73,    30,     0,     0,    26,     0,     0,    63,    64,     0,
       0,     0,     0,    27,    47,    57,    56,    48,    16,    35,
      33,    36,     0,    34,    17,     0,     0,     0,    39,     0,
       2,     0,    73,     0,     0,     0,     0,    76,     0,     0,
       0,    97,     0,    39,     0,    45,    46,     3,    43,     0,
       0,     0,     0,    25,    73,     0,    62,    59,    58,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    41,    40,    18,    38,
       0,   104,     0,     0,     0,     0,     0,    84,    74,    77,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
      21,     0,    55,    19,    24,    60,    61,    65,    66,    67,
      68,    69,    70,    49,    50,    51,    52,    53,    54,    31,
      39,     0,   101,    87,     0,     0,    75,     0,     0,     0,
       0,    97,     0,     0,   102,     0,     0,    37,   103,     0,
       0,    90,     0,    98,    99,   100,    94,    96,     0,    93,
      30,     0,     0,    85,     0,     0,    29,     0,     0,     0,
      95,     0,    87,     0,    22,    86,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   134,   128,    -5,    65,    21,    67,
    -118,   139,   -70,  -117,    47,   125,  -118,   -54,   -87,  -118,
    -118,   206,   -40,   -30,   239,   -19,  -106,  -118,  -118,  -118,
      40,  -118,  -118,  -118,  -118,  -118,  -118,  -118,    73,  -118,
    -118,  -118,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    81,    82,   121,    15,    92,    35,    36,    62,
      63,    64,    83,    84,    85,    86,    45,    46,    47,    48,
     210,    49,    50,    51,    26,    27,    57,    59,   163,   164,
      52,    87,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   103,   104,   123,   159,   171,   115,   116,   168,   147,
     160,   161,    98,   174,     1,   106,   106,   -23,     3,   107,
     107,    67,     4,    68,    69,   146,    10,   102,     6,    99,
       7,    10,    10,   108,   -23,    67,   162,    68,   119,     5,
      23,   102,    24,    12,   149,   125,   126,   193,   194,   127,
     128,    75,   112,    14,   114,    76,    77,    78,    67,   166,
      68,   151,   109,   109,   124,    75,   156,    30,   157,    76,
      77,    78,    11,   197,   198,   199,    31,    11,    11,   151,
     208,    34,    79,    80,    33,    53,    54,    55,    75,   221,
     158,    44,    76,    77,    78,    32,    79,    80,    37,   205,
      38,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   195,    39,    60,    61,    79,
      80,    56,   232,   233,    95,    96,    58,   203,   139,   140,
     141,   142,   143,   144,    44,    44,   207,     6,    88,     7,
      67,    16,    68,    69,    28,    29,    70,    40,   225,    41,
      94,   151,   100,    42,    65,    66,    43,    71,    97,    72,
     105,   234,   131,   132,    73,    74,   101,   110,   111,   222,
      75,   117,   224,    61,    76,    77,    78,    67,    89,    68,
      90,    91,   141,   142,   143,   144,   120,   172,   131,   132,
     113,   139,   140,   141,   142,   143,   144,   129,   122,   145,
     130,    79,    80,   131,   132,   148,   150,   153,   154,    44,
      44,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   119,   155,   124,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   169,   165,
     170,   190,   191,   167,   192,   196,   201,   200,   202,   204,
     206,   209,   211,   212,   213,   216,   214,   215,   219,   220,
     218,   227,   223,   230,   228,   229,   231,   226,   173,   118,
     189,    93,   235,   236,   217
};

static const yytype_uint8 yycheck[] =
{
      19,    41,    42,    73,   110,   122,    60,    61,   119,    96,
      31,    32,    12,   130,     8,    23,    23,    12,     9,    27,
      27,     3,     0,     5,     6,    95,     5,     9,    13,    29,
      15,    10,    11,    41,    29,     3,    57,     5,    33,    12,
      52,     9,    54,     9,    98,    75,    76,   153,   154,    79,
      80,    33,    57,     9,    59,    37,    38,    39,     3,   113,
       5,   101,    70,    70,     9,    33,   106,    19,   108,    37,
      38,    39,     5,   160,   161,   162,    14,    10,    11,   119,
     191,     9,    64,    65,    16,    20,    21,    22,    33,   206,
     109,   110,    37,    38,    39,    19,    64,    65,    10,   169,
      11,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   155,     9,    31,    32,    64,
      65,     9,   228,   229,    29,    30,     9,   167,    64,    65,
      66,    67,    68,    69,   153,   154,   190,    13,    12,    15,
       3,    17,     5,     6,    10,    11,     9,    40,   218,    42,
      12,   191,    70,    46,    26,    27,    49,    20,    18,    22,
       9,   231,    35,    36,    27,    28,    33,    12,    33,   209,
      33,    11,   212,    32,    37,    38,    39,     3,     4,     5,
       6,     7,    66,    67,    68,    69,     9,    34,    35,    36,
      33,    64,    65,    66,    67,    68,    69,    12,    23,    12,
      24,    64,    65,    35,    36,    12,     9,    43,    47,   228,
     229,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    33,    41,     9,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    29,    53,
      21,    12,    30,    55,    34,    25,    12,    34,    34,    34,
      24,    44,    48,    50,    29,    12,    29,    29,    56,    12,
      55,    25,    45,    12,    43,    47,    26,   220,   129,    63,
     145,    32,   232,    51,   201
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    72,     9,     0,    12,    13,    15,    73,    75,
      79,    80,     9,    82,     9,    86,    17,    74,    77,    78,
      79,    80,    81,    52,    54,    76,   105,   106,    75,    75,
      19,    14,    19,    16,     9,    88,    89,    10,    11,     9,
      40,    42,    46,    49,    96,    97,    98,    99,   100,   102,
     103,   104,   111,    78,    78,    78,     9,   107,     9,   108,
      31,    32,    90,    91,    92,    76,    76,     3,     5,     6,
       9,    20,    22,    27,    28,    33,    37,    38,    39,    64,
      65,    83,    84,    93,    94,    95,    96,   112,    12,     4,
       6,     7,    87,    95,    12,    29,    30,    18,    12,    29,
      70,    33,     9,    93,    93,     9,    23,    27,    41,    70,
      12,    33,    77,    33,    77,    88,    88,    11,    92,    33,
       9,    85,    23,    83,     9,    94,    94,    94,    94,    12,
      24,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    12,    83,    89,    12,    88,
       9,    93,   113,    43,    47,    41,    93,    93,    96,    97,
      31,    32,    57,   109,   110,    53,    88,    55,   113,    29,
      21,    84,    34,    82,    84,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    86,
      12,    30,    34,    97,    97,    93,    25,    89,    89,    89,
      34,    12,    34,    93,    34,    83,    24,    88,   113,    44,
     101,    48,    50,    29,    29,    29,    12,   109,    55,    56,
      12,    84,    93,    45,    93,    83,    85,    25,    43,    47,
      12,    26,    97,    97,    83,   101,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    75,    75,    75,    76,    76,
      76,    77,    78,    78,    78,    78,    79,    80,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    90,    91,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    98,    98,    98,    99,   100,   101,   101,   102,   102,
     103,   104,   105,   106,   107,   108,   109,   109,   110,   110,
     110,   111,   112,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     1,     1,     1,     1,     5,     3,     0,
       3,     3,     1,     2,     1,     2,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     2,
       3,     3,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     4,     2,     3,     1,     1,
       1,     1,     1,     1,     3,     6,     5,     0,     1,     1,
       5,     9,     4,     6,     5,     7,     3,     0,     3,     3,
       3,     4,     4,     3,     1
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
#line 61 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_desc_algoritmo: T_ALGORITMO T_ID T_COMP_SECUENCIAL v_cabecera_alg v_bloque_alg T_FALGORITMO T_PUNTO\n"); }
#line 1483 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 64 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_cabecera_alg: v_decl_globales v_decl_a_f v_decl_ent_sal T_COMENTARIO\n"); }
#line 1489 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_bloque_alg: v_bloque T_COMENTARIO\n"); }
#line 1495 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 70 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_globales: v_declaracion_tipo v_decl_globales\n"); }
#line 1501 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 71 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_globales: v_declaracion_cte v_decl_globales\n"); }
#line 1507 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_a_f: v_accion_d v_decl_a_f\n"); }
#line 1513 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_a_f: v_funcion_d v_decl_a_f\n"); }
#line 1519 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_bloque: v_declaraciones v_instrucciones\n"); }
#line 1525 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_tipo v_declaraciones\n"); }
#line 1531 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_cte v_declaraciones\n"); }
#line 1537 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaraciones: v_declaracion_var v_declaraciones\n"); }
#line 1543 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_tipo: T_TIPO v_lista_d_tipo T_FTIPO T_COMP_SECUENCIAL\n"); }
#line 1549 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 92 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_cte: T_CONSTANTE v_lista_d_cte T_FCONST T_COMP_SECUENCIAL\n"); }
#line 1555 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_declaracion_var: T_VAR v_lista_d_var T_FVAR T_COMP_SECUENCIAL\n"); }
#line 1561 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_d_tipo: T_ID T_CREAR_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_d_tipo\n"); }
#line 1567 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_TUPLA v_lista_campos T_FTUPLA\n"); }
#line 1573 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_TABLA T_INICIO_ARRAY v_expresion_t T_SUBRANGO v_expresion_t T_FIN_ARRAY T_DE v_d_tipo\n"); }
#line 1579 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_ID\n"); }
#line 1585 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: v_expresion_t T_SUBRANGO v_expresion_t\n"); }
#line 1591 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 107 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_REF v_d_tipo\n"); }
#line 1597 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 108 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_tipo: T_TIPO_BASE\n"); }
#line 1603 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_expresion_t: v_expresion\n"); }
#line 1609 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_expresion_t: T_LITERAL_CARACTER\n"); }
#line 1615 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_campos: T_ID T_DEF_TIPO v_d_tipo T_COMP_SECUENCIAL v_lista_campos\n"); }
#line 1621 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_d_cte: T_ID T_CREAR_TIPO v_literal T_COMP_SECUENCIAL v_lista_d_cte\n"); }
#line 1627 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_CARACTER\n");}
#line 1633 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: v_literal_numerico\n");}
#line 1639 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_BOOLEANO\n");}
#line 1645 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_literal: T_LITERAL_CADENA\n");}
#line 1651 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_d_var: v_lista_id T_DEF_TIPO T_ID T_COMP_SECUENCIAL lista_d_var\n"); }
#line 1657 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 130 "ProAlg.y" /* yacc.c:1646  */
    { 
			printf("v_lista_d_var: v_lista_id v_lista_id T_COMP_SECUENCIAL v_lista_d_var\n"); 
			
		}
#line 1666 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_id: T_ID T_SEPARADOR v_lista_id\n"); }
#line 1672 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_lista_id: T_ID T_DEF_TIPO v_d_tipo\n"); }
#line 1678 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 141 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_ent\n"); }
#line 1684 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_ent v_decl_sal\n"); }
#line 1690 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent_sal: v_decl_sal\n"); }
#line 1696 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_ent: T_ENT v_lista_d_var\n"); }
#line 1702 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_decl_sal: T_SAL v_lista_d_var\n"); }
#line 1708 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_expresion: v_exp_a\n");}
#line 1714 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 153 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_expresion: v_funcion_ll\n");}
#line 1720 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_SUMA v_exp_a\n");}
#line 1726 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_RESTA v_exp_a\n");}
#line 1732 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 158 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_MULTI v_exp_a\n");}
#line 1738 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_DIV v_exp_a\n");}
#line 1744 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_MOD v_exp_a\n");}
#line 1750 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 161 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_a T_OP_DIV_ENT v_exp_a\n");}
#line 1756 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_PARENTESIS_APERTURA v_exp_a T_PARENTESIS_CLAUSURA\n");}
#line 1762 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_operando\n");}
#line 1768 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_literal_numerico\n");}
#line 1774 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_OP_RESTA v_exp_a\n");}
#line 1780 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 166 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_OP_RESTA v_exp_a\n");}
#line 1786 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 167 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_Y v_exp_b\n");}
#line 1792 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_O v_exp_b\n");}
#line 1798 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_NO v_exp_b\n");}
#line 1804 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_VERDADERO\n");}
#line 1810 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: T_FALSO\n");}
#line 1816 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 172 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_MENOR v_exp_b\n");}
#line 1822 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_MAYOR v_exp_b\n");}
#line 1828 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 174 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_IGUAL v_exp_b\n");}
#line 1834 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 175 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_DIF v_exp_b\n");}
#line 1840 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 176 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_MAYOR_IGUAL v_exp_b\n");}
#line 1846 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_exp: v_exp_b T_OP_REL_MENOR_IGUAL v_exp_b\n");}
#line 1852 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "ProAlg.y" /* yacc.c:1646  */
    {}
#line 1858 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 181 "ProAlg.y" /* yacc.c:1646  */
    {}
#line 1864 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 183 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: T_ID\n");}
#line 1870 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 184 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_PUNTO v_operando\n");}
#line 1876 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 185 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_INICIO_ARRAY v_expresion T_FIN_ARRAY\n");}
#line 1882 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 186 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_operando: v_operando T_REF\n");}
#line 1888 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 189 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instrucciones: v_instruccion T_COMP_SECUENCIAL v_instrucciones\n");}
#line 1894 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 190 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instrucciones: v_instruccion\n");}
#line 1900 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 193 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: T_CONTINUAR\n");}
#line 1906 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 194 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_asignacion\n");}
#line 1912 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 195 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_alternativa\n");}
#line 1918 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 196 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_iteracion\n");}
#line 1924 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 197 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_instruccion: v_accion_ll\n");}
#line 1930 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 200 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_asignacion: v_operando T_ASIGNACION v_expresion\n");}
#line 1936 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 203 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_alternativa: T_SI v_expresion T_SIMBOLO_BLOQUE_IF v_instrucciones v_lista_opciones T_FSI\n");}
#line 1942 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 207 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_lista_opciones: T_SIMBOLO_ELSE v_expresion T_SI v_instrucciones v_lista_opciones\n");}
#line 1948 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 211 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_iteracion: v_it_cota_fija | v_it_cota_exp\n");}
#line 1954 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 214 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_it_cota_exp: T_MIENTRAS v_expresion T_HACER v_instrucciones T_FMIENTRAS\n");}
#line 1960 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 217 "ProAlg.y" /* yacc.c:1646  */
    {printf("v_it_cota_fija: T_PARA T_ID T_ASIGNACION v_expresion T_HASTA v_expresion T_HACER v_instrucciones T_FPARA\n");}
#line 1966 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 220 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_accion_d: T_ACCION v_a_cabecera bloque T_FACCION\n"); }
#line 1972 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 223 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_funcion_d: T_FUNCION v_f_cabecera v_bloque T_DEV v_expresion T_FFUNCION\n"); }
#line 1978 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 226 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_a_cabecera: T_ID T_PARENTESIS_APERTURA v_d_par_form T_PARENTESIS_CLAUSURA T_COMP_SECUENCIAL\n"); }
#line 1984 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 229 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_f_cabecera: T_ID T_PARENTESIS_APERTURA v_lista_d_var T_PARENTESIS_CLAUSURA T_DEV v_d_tipo T_COMP_SECUENCIAL"); }
#line 1990 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 232 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_par_form: v_d_p_form T_COMP_SECUENCIAL v_d_par_form\n"); }
#line 1996 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 236 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_ENT v_lista_id T_DEF_TIPO\n"); }
#line 2002 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 237 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_SAL v_lista_id T_DEF_TIPO\n"); }
#line 2008 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 238 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_d_p_form: T_E_S v_lista_id T_DEF_TIPO\n"); }
#line 2014 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 241 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_accion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 2020 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 244 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_funcion_ll: T_ID T_PARENTESIS_APERTURA v_l_ll T_PARENTESIS_CLAUSURA\n"); }
#line 2026 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 247 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_l_ll: v_expresion T_CT_SEPARADOROMA v_l_ll\n"); }
#line 2032 "ProAlg.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 248 "ProAlg.y" /* yacc.c:1646  */
    { printf("v_l_ll: v_expresion\n"); }
#line 2038 "ProAlg.tab.c" /* yacc.c:1646  */
    break;


#line 2042 "ProAlg.tab.c" /* yacc.c:1646  */
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
#line 251 "ProAlg.y" /* yacc.c:1906  */

int main( int argc, char **argv ) {
	/*
	#ifdef YYDEBUG
	yydebug = 1;
	#endif
	*/

	/*Ejemplo de TS*/
	/*
	Simbolo *TS = crear_TS();
	insertar(&TS, "Primer simbolo", "Variable");
	insertar(&TS, "Segundo simbolo", "Funcion");
	insertar(&TS, "Tercer simbolo", "Funcion");
	insertar(&TS, "Cuarto simbolo", "Funcion");

	printf("%s %s\n", TS->nombre, TS->tipo_simbolo);
	printf("%s %s\n", TS->next->nombre, TS->next->tipo_simbolo);
	printf("%s %s\n", TS->next->next->nombre, TS->next->next->tipo_simbolo);
	printf("%s %s\n", TS->next->next->next->nombre, TS->next->next->next->tipo_simbolo);

	Simbolo* s = buscar(TS, "Tercer simbolo");
	printf("%s %s\n", s->nombre, s->tipo_simbolo);
	s->tipo_simbolo = "pepe";
	printf("%s %s\n", TS->next->nombre, TS->next->tipo_simbolo);
	*/
	int flag;
	yyin = fopen( argv[1], "r" );
	flag = yyparse();
	return flag;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
