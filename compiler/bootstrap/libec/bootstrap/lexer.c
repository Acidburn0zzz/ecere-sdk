/* Code generated from eC source file: lexer.ec */
#if defined(__GNUC__)
typedef long long int64;
typedef unsigned long long uint64;
#ifndef _WIN32
#define __declspec(x)
#endif
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#else
#define __declspec(x)
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
#include <stdint.h>
#include <sys/types.h>

#if /*defined(_W64) || */(defined(__WORDSIZE) && __WORDSIZE == 8) || defined(__x86_64__)
#define _64BIT 1
#else
#define _64BIT 0
#endif

#define arch_PointerSize                  sizeof(void *)
#define structSize_Instance               (_64BIT ? 24 : 12)

extern void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

extern void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BTNode;

struct __ecereNameSpace__ecere__sys__BTNode;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BinaryTree;

struct __ecereNameSpace__ecere__sys__BinaryTree
{
struct __ecereNameSpace__ecere__sys__BTNode * root;
int count;
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__OldList;

struct __ecereNameSpace__ecere__sys__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Method;

struct __ecereNameSpace__ecere__com__Method
{
char *  name;
struct __ecereNameSpace__ecere__com__Method * parent;
struct __ecereNameSpace__ecere__com__Method * left;
struct __ecereNameSpace__ecere__com__Method * right;
int depth;
int (*  function)();
int vid;
int type;
struct __ecereNameSpace__ecere__com__Class * _class;
void *  symbol;
char *  dataTypeString;
struct Type * dataType;
int memberAccess;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Property;

struct __ecereNameSpace__ecere__com__Property
{
struct __ecereNameSpace__ecere__com__Property * prev;
struct __ecereNameSpace__ecere__com__Property * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct Type * dataType;
void (*  Set)(void * , int);
int (*  Get)(void * );
unsigned int (*  IsSet)(void * );
void *  data;
void *  symbol;
int vid;
unsigned int conversion;
unsigned int watcherOffset;
char *  category;
unsigned int compiled;
unsigned int selfWatchable;
unsigned int isWatchable;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_CodePosition;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Location;

struct Location
{
struct CodePosition start;
struct CodePosition end;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Attrib;

struct Attrib;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExtDecl;

struct ExtDecl;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDefinition;

struct ClassDefinition;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Context;

struct Context;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Instantiation;

struct Instantiation;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declaration;

struct Declaration;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Statement;

struct Statement;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TypeName;

struct TypeName;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Initializer;

struct Initializer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataValue;

struct __ecereNameSpace__ecere__com__DataValue
{
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void *  p;
float f;
double d;
long long i64;
uint64 ui64;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Expression;

struct Expression;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateDatatype;

struct TemplateDatatype;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateArgument;

struct TemplateArgument;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateParameter;

struct TemplateParameter;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Specifier;

struct Specifier;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Identifier;

struct Identifier;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Pointer;

struct Pointer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declarator;

struct Declarator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_FunctionDefinition;

struct FunctionDefinition;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableDef;

struct DBTableDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_External;

struct External;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ModuleImport;

struct ModuleImport;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassImport;

struct ClassImport;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Symbol;

struct Symbol;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Type;

struct Type;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Class;

struct __ecereNameSpace__ecere__com__Class
{
struct __ecereNameSpace__ecere__com__Class * prev;
struct __ecereNameSpace__ecere__com__Class * next;
char *  name;
int offset;
int structSize;
int (* *  _vTbl)();
int vTblSize;
int (*  Constructor)(struct __ecereNameSpace__ecere__com__Instance *);
void (*  Destructor)(struct __ecereNameSpace__ecere__com__Instance *);
int offsetClass;
int sizeClass;
struct __ecereNameSpace__ecere__com__Class * base;
struct __ecereNameSpace__ecere__sys__BinaryTree methods;
struct __ecereNameSpace__ecere__sys__BinaryTree members;
struct __ecereNameSpace__ecere__sys__BinaryTree prop;
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;
struct __ecereNameSpace__ecere__sys__OldList derivatives;
int memberID;
int startMemberID;
int type;
struct __ecereNameSpace__ecere__com__Instance * module;
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;
char *  dataTypeString;
struct Type * dataType;
int typeSize;
int defaultAlignment;
void (*  Initialize)();
int memberOffset;
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;
char *  designerClass;
unsigned int noExpansion;
char *  defaultProperty;
unsigned int comRedefinition;
int count;
unsigned int isRemote;
unsigned int internalDecl;
void *  data;
unsigned int computeSize;
int structAlignment;
int destructionWatchOffset;
unsigned int fixed;
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;
int inheritanceAccess;
char *  fullName;
void *  symbol;
struct __ecereNameSpace__ecere__sys__OldList conversions;
struct __ecereNameSpace__ecere__sys__OldList templateParams;
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;
struct __ecereNameSpace__ecere__com__Class * templateClass;
struct __ecereNameSpace__ecere__sys__OldList templatized;
int numParams;
unsigned int isInstanceClass;
unsigned int byValueSystemClass;
} __attribute__ ((gcc_struct));

extern long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, char *  name);

extern void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

struct __ecereNameSpace__ecere__com__Instance
{
int (* *  _vTbl)();
struct __ecereNameSpace__ecere__com__Class * _class;
int _refCount;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataMember;

struct __ecereNameSpace__ecere__com__DataMember
{
struct __ecereNameSpace__ecere__com__DataMember * prev;
struct __ecereNameSpace__ecere__com__DataMember * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct Type * dataType;
int type;
int offset;
int memberID;
struct __ecereNameSpace__ecere__sys__OldList members;
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;
int memberOffset;
int structAlignment;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__SerialBuffer;

struct __ecereNameSpace__ecere__com__SerialBuffer
{
unsigned char *  _buffer;
unsigned int count;
unsigned int _size;
unsigned int pos;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__ClassTemplateArgument;

struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{
union
{
struct
{
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
} __attribute__ ((gcc_struct));
struct __ecereNameSpace__ecere__com__DataValue expression;
struct
{
char *  memberString;
union
{
struct __ecereNameSpace__ecere__com__DataMember * member;
struct __ecereNameSpace__ecere__com__Property * prop;
struct __ecereNameSpace__ecere__com__Method * method;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

void exit(int status);

void * calloc(size_t nmemb, size_t size);

void free(void * ptr);

void * malloc(size_t size);

void * realloc(void * ptr, size_t size);

long int strtol(const char * nptr, char ** endptr, int base);

long long int strtoll(const char * nptr, char ** endptr, int base);

unsigned long long int strtoull(const char * nptr, char ** endptr, int base);

typedef __builtin_va_list va_list;

typedef void FILE;

FILE * bsl_stdin(void);

FILE * bsl_stdout(void);

FILE * bsl_stderr(void);

char * fgets(char * s, int size, FILE * stream);

FILE * fopen(const char * path, const char * mode);

int fclose(FILE * fp);

int fflush(FILE * stream);

int fgetc(FILE * stream);

int fprintf(FILE * stream, const char * format, ...);

int fputc(int c, FILE * stream);

size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);

size_t fwrite(const void * ptr, size_t size, size_t nmemb, FILE * stream);

int vsnprintf(char *, size_t, const char *, ...);

int snprintf(char * str, size_t, const char * format, ...);

int fseek(FILE * stream, long offset, int whence);

long ftell(FILE * stream);

int feof(FILE * stream);

int ferror(FILE * stream);

int fileno(FILE * stream);

typedef struct yy_buffer_state * YY_BUFFER_STATE;

extern int yyleng;

extern FILE * yyin, * yyout;

typedef unsigned int yy_size_t;

struct yy_buffer_state
{
FILE * yy_input_file;
char * yy_ch_buf;
char * yy_buf_pos;
yy_size_t yy_buf_size;
int yy_n_chars;
int yy_is_our_buffer;
int yy_is_interactive;
int yy_at_bol;
int yy_fill_buffer;
int yy_buffer_status;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_yy_buffer_state;

static YY_BUFFER_STATE yy_current_buffer = 0;

static char yy_hold_char;

static int yy_n_chars;

int yyleng;

static char * yy_c_buf_p = (char *)0;

static int yy_init = 1;

static int yy_start = 0;

static int yy_did_buffer_switch_on_eof;

void yyrestart(FILE * input_file);

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer);

void yy_load_buffer_state(void);

YY_BUFFER_STATE yy_create_buffer(FILE * file, int size);

void yy_delete_buffer(YY_BUFFER_STATE b);

void yy_init_buffer(YY_BUFFER_STATE b, FILE * file);

void yy_flush_buffer(YY_BUFFER_STATE b);

YY_BUFFER_STATE yy_scan_buffer(char * base, yy_size_t size);

YY_BUFFER_STATE yy_scan_string(const char * yy_str);

YY_BUFFER_STATE yy_scan_bytes(const char * bytes, int len);

static void * yy_flex_alloc(yy_size_t);

static void * yy_flex_realloc(void *, yy_size_t);

static void yy_flex_free(void *);

typedef unsigned char YY_CHAR;

FILE * yyin = (FILE *)0, * yyout = (FILE *)0;

typedef int yy_state_type;

extern char * yytext;

static yy_state_type yy_get_previous_state(void);

static yy_state_type yy_try_NUL_trans(yy_state_type current_state);

static int yy_get_next_buffer(void);

static void yy_fatal_error(const char msg[]);

static const short int yy_accept[720] = 
{
(short)0, (short)112, (short)112, (short)177, (short)175, (short)173, (short)172, (short)171, (short)174, (short)158, (short)175, (short)1, (short)170, (short)164, (short)157, (short)175, (short)152, (short)153, (short)162, (short)161, (short)149, (short)160, (short)156, (short)163, (short)118, (short)118, (short)150, (short)146, (short)165, (short)151, (short)166, (short)169, (short)112, (short)112, (short)112, (short)154, (short)155, (short)167, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)147, (short)168, (short)148, (short)159, (short)145, (short)0, (short)123, (short)0, (short)131, (short)148, (short)140, (short)132, (short)0, (short)0, (short)129, (short)137, (short)127, (short)138, (short)128, (short)139, (short)0, (short)121, (short)2, (short)3, (short)130, (short)122, (short)117, (short)0, (short)118, (short)0, (short)118, (short)112, (short)155, (short)147, (short)154, (short)136, (short)142, (short)144, (short)143, (short)135, (short)0, (short)112, (short)0, (short)112, (short)0, (short)0, (short)133, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)11, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)19, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)134, (short)141, (short)119, (short)124, (short)0, (short)121, (short)121, (short)0, (short)122, (short)117, (short)0, (short)120, (short)0, (short)113, (short)112, (short)126, (short)125, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)92, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)17, (short)45, (short)112, (short)112, (short)112, (short)112, (short)20, (short)112, (short)112, (short)112, (short)51, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)44, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)0, (short)121, (short)0, (short)121, (short)0, (short)122, (short)120, (short)115, (short)116, (short)113, (short)0, (short)112, (short)112, (short)61, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)4, (short)112, (short)6, (short)7, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)13, (short)14, (short)112, (short)112, (short)112, (short)18, (short)112, (short)112, (short)112, (short)112, (short)112, (short)22, (short)112, (short)52, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)21, (short)112, (short)112, (short)112, (short)38, (short)112, (short)112, (short)112, (short)0, (short)121, (short)115, (short)115, (short)0, (short)115, (short)115, (short)116, (short)0, (short)0, (short)114, (short)62, (short)112, (short)112, (short)112, (short)93, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)5, (short)47, (short)8, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)16, (short)112, (short)112, (short)112, (short)58, (short)46, (short)112, (short)112, (short)112, (short)112, (short)112, (short)53, (short)112, (short)112, (short)25, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)36, (short)112, (short)112, (short)112, (short)95, (short)42, (short)0, (short)115, (short)115, (short)115, (short)0, (short)0, (short)116, (short)114, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)56, (short)50, (short)112, (short)112, (short)12, (short)15, (short)112, (short)55, (short)88, (short)72, (short)112, (short)112, (short)112, (short)84, (short)112, (short)54, (short)112, (short)24, (short)26, (short)29, (short)31, (short)112, (short)112, (short)33, (short)112, (short)34, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)0, (short)115, (short)112, (short)112, (short)112, (short)91, (short)112, (short)112, (short)76, (short)82, (short)112, (short)112, (short)112, (short)57, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)70, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)109, (short)110, (short)108, (short)10, (short)112, (short)112, (short)112, (short)112, (short)85, (short)112, (short)112, (short)112, (short)80, (short)112, (short)112, (short)112, (short)112, (short)35, (short)112, (short)49, (short)112, (short)112, (short)63, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)71, (short)112, (short)27, (short)112, (short)32, (short)94, (short)112, (short)112, (short)79, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)9, (short)112, (short)112, (short)112, (short)112, (short)112, (short)43, (short)23, (short)65, (short)112, (short)106, (short)112, (short)112, (short)37, (short)39, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)77, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)74, (short)75, (short)112, (short)107, (short)112, (short)112, (short)48, (short)112, (short)98, (short)64, (short)112, (short)112, (short)112, (short)112, (short)112, (short)69, (short)81, (short)28, (short)112, (short)41, (short)112, (short)87, (short)104, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)30, (short)68, (short)112, (short)0, (short)112, (short)112, (short)78, (short)112, (short)90, (short)112, (short)112, (short)101, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)73, (short)0, (short)112, (short)83, (short)40, (short)112, (short)112, (short)112, (short)112, (short)112, (short)97, (short)112, (short)96, (short)86, (short)67, (short)112, (short)112, (short)89, (short)112, (short)112, (short)112, (short)112, (short)111, (short)112, (short)112, (short)112, (short)112, (short)112, (short)99, (short)112, (short)105, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)60, (short)112, (short)112, (short)112, (short)112, (short)112, (short)59, (short)112, (short)112, (short)103, (short)112, (short)112, (short)100, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)112, (short)102, (short)112, (short)66, (short)0
};

static const int yy_ec[256] = 
{
0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 22, 22, 23, 22, 24, 22, 22, 22, 25, 26, 27, 28, 29, 30, 1, 31, 32, 33, 31, 34, 35, 36, 36, 37, 38, 36, 39, 36, 36, 36, 40, 36, 36, 36, 36, 41, 36, 36, 42, 36, 36, 43, 44, 45, 46, 47, 1, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 36, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};

static const int yy_meta[77] = 
{
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 4, 1, 1, 1, 1, 5, 1, 6, 6, 6, 6, 2, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 1, 1, 1, 1, 8, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 1, 1, 1
};

static const short int yy_base[729] = 
{
(short)0, (short)0, (short)0, (short)247, (short)2557, (short)2557, (short)2557, (short)2557, (short)2557, (short)217, (short)70, (short)2557, (short)2557, (short)50, (short)69, (short)183, (short)2557, (short)2557, (short)194, (short)65, (short)2557, (short)66, (short)64, (short)76, (short)96, (short)79, (short)80, (short)2557, (short)97, (short)183, (short)61, (short)2557, (short)81, (short)88, (short)116, (short)2557, (short)2557, (short)159, (short)132, (short)115, (short)87, (short)143, (short)147, (short)131, (short)148, (short)156, (short)160, (short)121, (short)164, (short)136, (short)203, (short)204, (short)206, (short)208, (short)212, (short)224, (short)2557, (short)88, (short)2557, (short)2557, (short)2557, (short)101, (short)2557, (short)175, (short)2557, (short)2557, (short)2557, (short)2557, (short)182, (short)174, (short)2557, (short)2557, (short)2557, (short)2557, (short)2557, (short)2557, (short)151, (short)259, (short)2557, (short)2557, (short)2557, (short)298, (short)339, (short)218, (short)247, (short)125, (short)0, (short)0, (short)2557, (short)2557, (short)2557, (short)111, (short)2557, (short)2557, (short)2557, (short)108, (short)106, (short)149, (short)104, (short)213, (short)186, (short)67, (short)2557, (short)233, (short)237, (short)232, (short)396, (short)221, (short)240, (short)241, (short)242, (short)265, (short)298, (short)313, (short)306, (short)318, (short)319, (short)323, (short)315, (short)316, (short)334, (short)331, (short)363, (short)364, (short)372, (short)328, (short)374, (short)375, (short)390, (short)391, (short)392, (short)393, (short)400, (short)409, (short)401, (short)394, (short)411, (short)398, (short)416, (short)424, (short)431, (short)399, (short)458, (short)459, (short)463, (short)466, (short)465, (short)468, (short)469, (short)475, (short)470, (short)476, (short)478, (short)487, (short)491, (short)2557, (short)2557, (short)2557, (short)2557, (short)527, (short)517, (short)556, (short)541, (short)546, (short)530, (short)483, (short)595, (short)0, (short)601, (short)0, (short)2557, (short)2557, (short)0, (short)533, (short)498, (short)550, (short)403, (short)596, (short)589, (short)612, (short)618, (short)611, (short)624, (short)620, (short)642, (short)517, (short)648, (short)600, (short)654, (short)658, (short)664, (short)497, (short)665, (short)666, (short)667, (short)669, (short)671, (short)675, (short)676, (short)571, (short)677, (short)682, (short)695, (short)692, (short)693, (short)701, (short)704, (short)710, (short)712, (short)714, (short)717, (short)508, (short)721, (short)723, (short)736, (short)742, (short)743, (short)747, (short)744, (short)748, (short)749, (short)765, (short)752, (short)764, (short)767, (short)768, (short)769, (short)770, (short)772, (short)780, (short)789, (short)793, (short)792, (short)797, (short)798, (short)804, (short)805, (short)800, (short)808, (short)817, (short)821, (short)820, (short)826, (short)824, (short)827, (short)830, (short)836, (short)845, (short)832, (short)854, (short)875, (short)884, (short)875, (short)894, (short)899, (short)900, (short)905, (short)948, (short)936, (short)992, (short)0, (short)854, (short)858, (short)860, (short)878, (short)876, (short)935, (short)965, (short)900, (short)938, (short)995, (short)998, (short)879, (short)1001, (short)1006, (short)1008, (short)1007, (short)1011, (short)925, (short)1013, (short)1010, (short)1016, (short)1018, (short)1028, (short)1017, (short)1019, (short)1023, (short)1026, (short)1029, (short)1035, (short)1038, (short)1039, (short)1041, (short)1045, (short)1060, (short)1064, (short)1066, (short)1069, (short)1071, (short)1073, (short)1076, (short)1081, (short)1077, (short)1082, (short)1092, (short)1094, (short)1098, (short)1097, (short)1101, (short)1099, (short)1107, (short)1104, (short)1103, (short)1109, (short)1110, (short)1114, (short)1130, (short)1120, (short)1127, (short)1133, (short)1135, (short)1136, (short)1137, (short)1142, (short)1155, (short)1148, (short)1146, (short)1163, (short)1159, (short)1165, (short)1166, (short)1168, (short)1170, (short)1171, (short)1174, (short)1178, (short)1181, (short)1194, (short)1198, (short)1201, (short)1202, (short)1206, (short)1219, (short)1225, (short)0, (short)1215, (short)1257, (short)1247, (short)0, (short)1255, (short)1297, (short)1241, (short)1301, (short)1205, (short)1258, (short)1245, (short)1277, (short)1213, (short)1280, (short)1284, (short)1226, (short)1305, (short)1316, (short)1317, (short)1321, (short)1323, (short)1324, (short)1326, (short)1334, (short)1339, (short)1341, (short)1351, (short)1342, (short)1354, (short)1357, (short)1360, (short)1361, (short)1363, (short)1367, (short)1369, (short)1370, (short)1372, (short)1387, (short)1389, (short)1391, (short)1395, (short)1397, (short)1396, (short)1400, (short)1402, (short)1408, (short)1412, (short)1413, (short)1415, (short)1417, (short)1421, (short)1418, (short)1430, (short)1433, (short)1440, (short)1441, (short)1442, (short)1446, (short)1451, (short)1453, (short)1450, (short)1457, (short)1463, (short)1466, (short)1468, (short)1469, (short)1472, (short)1473, (short)1474, (short)1475, (short)1476, (short)1479, (short)1478, (short)1491, (short)1496, (short)1499, (short)1502, (short)1504, (short)1275, (short)1535, (short)0, (short)1508, (short)1559, (short)1563, (short)1574, (short)1564, (short)1526, (short)1529, (short)1568, (short)1589, (short)1551, (short)1523, (short)1593, (short)1594, (short)1597, (short)1613, (short)1614, (short)1617, (short)1621, (short)1624, (short)1623, (short)1630, (short)1626, (short)1632, (short)1634, (short)1639, (short)1633, (short)1636, (short)1643, (short)1642, (short)1645, (short)1652, (short)1654, (short)1655, (short)1661, (short)1538, (short)1658, (short)1670, (short)1676, (short)1686, (short)1689, (short)1691, (short)1694, (short)1697, (short)1701, (short)1704, (short)1706, (short)1709, (short)1710, (short)1712, (short)1714, (short)1717, (short)1719, (short)1722, (short)1725, (short)1729, (short)1730, (short)1734, (short)1735, (short)1737, (short)1738, (short)1740, (short)1745, (short)1755, (short)1757, (short)1758, (short)1760, (short)1761, (short)1755, (short)1799, (short)1762, (short)1770, (short)1773, (short)1779, (short)1780, (short)1786, (short)1781, (short)1788, (short)1790, (short)1801, (short)1805, (short)1803, (short)1814, (short)1816, (short)1820, (short)1822, (short)1829, (short)1835, (short)1837, (short)1838, (short)1839, (short)1840, (short)1858, (short)1860, (short)1850, (short)1861, (short)1863, (short)1865, (short)1869, (short)1870, (short)1876, (short)1878, (short)1886, (short)1888, (short)1889, (short)1893, (short)1894, (short)1896, (short)1897, (short)1898, (short)1909, (short)1913, (short)1915, (short)1916, (short)1917, (short)1919, (short)1920, (short)1921, (short)1922, (short)1924, (short)1926, (short)1937, (short)1943, (short)1944, (short)1945, (short)1947, (short)1948, (short)1965, (short)1964, (short)1966, (short)1967, (short)1954, (short)1973, (short)1975, (short)1977, (short)1982, (short)1983, (short)1984, (short)1992, (short)1994, (short)1999, (short)2004, (short)2005, (short)2007, (short)2010, (short)2011, (short)2012, (short)2016, (short)2027, (short)2017, (short)2033, (short)2036, (short)2037, (short)2038, (short)2040, (short)2044, (short)2045, (short)2048, (short)2060, (short)2061, (short)2064, (short)2067, (short)2068, (short)2070, (short)2069, (short)2071, (short)2073, (short)2076, (short)2077, (short)2079, (short)2088, (short)2094, (short)2096, (short)2099, (short)2100, (short)2101, (short)2111, (short)2116, (short)2122, (short)2123, (short)2124, (short)2132, (short)2134, (short)2135, (short)2139, (short)2140, (short)2145, (short)2147, (short)2150, (short)2152, (short)2155, (short)2156, (short)2157, (short)2160, (short)2162, (short)2168, (short)2175, (short)2177, (short)2178, (short)2183, (short)2185, (short)2187, (short)2188, (short)2190, (short)2194, (short)2195, (short)2196, (short)2203, (short)2205, (short)2215, (short)2206, (short)2218, (short)2221, (short)2223, (short)96, (short)2225, (short)2226, (short)2224, (short)2227, (short)2233, (short)2244, (short)2250, (short)2252, (short)2254, (short)2255, (short)2270, (short)2259, (short)2267, (short)2271, (short)2272, (short)2276, (short)2274, (short)2557, (short)68, (short)2279, (short)2275, (short)2277, (short)2280, (short)2282, (short)2283, (short)2287, (short)2295, (short)2303, (short)2305, (short)2304, (short)2307, (short)2324, (short)2325, (short)2326, (short)2329, (short)2333, (short)2330, (short)2334, (short)2336, (short)2337, (short)2354, (short)2341, (short)2353, (short)2356, (short)2357, (short)2358, (short)2359, (short)2361, (short)2364, (short)2365, (short)2362, (short)2377, (short)2380, (short)2381, (short)2385, (short)2386, (short)2388, (short)2389, (short)2390, (short)2398, (short)2407, (short)2408, (short)2410, (short)2411, (short)2414, (short)2416, (short)2420, (short)2429, (short)2423, (short)2432, (short)2436, (short)2439, (short)2440, (short)2442, (short)2445, (short)2448, (short)2451, (short)2452, (short)2455, (short)2557, (short)2516, (short)2524, (short)2531, (short)2535, (short)2536, (short)2539, (short)2541, (short)2543, (short)2548
};

static const short int yy_def[729] = 
{
(short)0, (short)719, (short)1, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)720, (short)719, (short)719, (short)719, (short)719, (short)721, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)24, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)722, (short)722, (short)722, (short)719, (short)719, (short)719, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)719, (short)719, (short)719, (short)719, (short)720, (short)719, (short)720, (short)719, (short)719, (short)719, (short)719, (short)721, (short)721, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)723, (short)25, (short)724, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)722, (short)719, (short)722, (short)720, (short)721, (short)719, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)725, (short)723, (short)726, (short)719, (short)719, (short)727, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)77, (short)719, (short)719, (short)719, (short)81, (short)719, (short)725, (short)719, (short)719, (short)719, (short)726, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)161, (short)256, (short)719, (short)719, (short)257, (short)347, (short)719, (short)719, (short)719, (short)719, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)719, (short)347, (short)719, (short)719, (short)719, (short)719, (short)719, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)719, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)728, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)719, (short)728, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)722, (short)0, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719
};

static const short int yy_nxt[2634] = 
{
(short)0, (short)4, (short)5, (short)6, (short)7, (short)8, (short)9, (short)10, (short)11, (short)12, (short)13, (short)14, (short)15, (short)16, (short)17, (short)18, (short)19, (short)20, (short)21, (short)22, (short)23, (short)24, (short)25, (short)25, (short)25, (short)26, (short)27, (short)28, (short)29, (short)30, (short)31, (short)32, (short)33, (short)32, (short)32, (short)32, (short)32, (short)32, (short)32, (short)34, (short)32, (short)32, (short)32, (short)35, (short)4, (short)36, (short)37, (short)38, (short)39, (short)40, (short)41, (short)42, (short)43, (short)44, (short)45, (short)32, (short)46, (short)32, (short)32, (short)47, (short)32, (short)48, (short)32, (short)49, (short)50, (short)51, (short)52, (short)53, (short)54, (short)55, (short)32, (short)32, (short)32, (short)56, (short)57, (short)58, (short)59, (short)62, (short)64, (short)65, (short)66, (short)71, (short)657, (short)76, (short)73, (short)77, (short)77, (short)77, (short)77, (short)94, (short)95, (short)78, (short)96, (short)72, (short)74, (short)75, (short)79, (short)67, (short)96, (short)96, (short)86, (short)86, (short)86, (short)86, (short)80, (short)87, (short)98, (short)89, (short)62, (short)88, (short)657, (short)69, (short)98, (short)98, (short)63, (short)81, (short)155, (short)82, (short)82, (short)82, (short)82, (short)719, (short)90, (short)100, (short)91, (short)92, (short)96, (short)96, (short)101, (short)172, (short)83, (short)98, (short)96, (short)84, (short)84, (short)84, (short)171, (short)84, (short)85, (short)170, (short)98, (short)98, (short)96, (short)96, (short)167, (short)63, (short)98, (short)96, (short)83, (short)719, (short)99, (short)113, (short)84, (short)84, (short)96, (short)84, (short)98, (short)98, (short)96, (short)96, (short)96, (short)98, (short)156, (short)84, (short)103, (short)104, (short)85, (short)96, (short)98, (short)105, (short)158, (short)96, (short)98, (short)98, (short)98, (short)96, (short)110, (short)719, (short)719, (short)106, (short)111, (short)98, (short)112, (short)135, (short)107, (short)98, (short)68, (short)102, (short)108, (short)98, (short)123, (short)114, (short)124, (short)62, (short)157, (short)118, (short)119, (short)109, (short)115, (short)120, (short)138, (short)125, (short)116, (short)139, (short)126, (short)117, (short)121, (short)127, (short)129, (short)122, (short)128, (short)93, (short)136, (short)131, (short)96, (short)96, (short)137, (short)96, (short)130, (short)96, (short)132, (short)133, (short)70, (short)96, (short)96, (short)134, (short)69, (short)69, (short)98, (short)98, (short)63, (short)98, (short)96, (short)98, (short)165, (short)96, (short)165, (short)98, (short)98, (short)166, (short)166, (short)166, (short)166, (short)96, (short)96, (short)60, (short)98, (short)719, (short)96, (short)98, (short)719, (short)96, (short)96, (short)96, (short)719, (short)140, (short)141, (short)98, (short)98, (short)142, (short)143, (short)147, (short)98, (short)719, (short)149, (short)98, (short)98, (short)98, (short)151, (short)150, (short)144, (short)145, (short)153, (short)146, (short)152, (short)173, (short)96, (short)148, (short)719, (short)154, (short)77, (short)77, (short)77, (short)77, (short)84, (short)84, (short)84, (short)719, (short)84, (short)719, (short)98, (short)187, (short)176, (short)159, (short)160, (short)174, (short)160, (short)160, (short)160, (short)175, (short)719, (short)188, (short)719, (short)84, (short)84, (short)719, (short)84, (short)189, (short)719, (short)96, (short)719, (short)159, (short)160, (short)190, (short)84, (short)160, (short)160, (short)96, (short)160, (short)161, (short)161, (short)161, (short)161, (short)98, (short)96, (short)191, (short)96, (short)96, (short)719, (short)96, (short)96, (short)98, (short)162, (short)163, (short)96, (short)163, (short)163, (short)163, (short)98, (short)96, (short)98, (short)98, (short)96, (short)98, (short)98, (short)96, (short)719, (short)719, (short)98, (short)719, (short)162, (short)163, (short)719, (short)98, (short)163, (short)163, (short)98, (short)163, (short)81, (short)98, (short)82, (short)82, (short)82, (short)82, (short)192, (short)193, (short)195, (short)196, (short)719, (short)199, (short)719, (short)194, (short)200, (short)83, (short)96, (short)96, (short)164, (short)164, (short)164, (short)719, (short)164, (short)198, (short)201, (short)96, (short)197, (short)96, (short)96, (short)202, (short)98, (short)98, (short)204, (short)83, (short)719, (short)203, (short)208, (short)164, (short)164, (short)98, (short)164, (short)98, (short)98, (short)96, (short)96, (short)96, (short)96, (short)96, (short)164, (short)96, (short)719, (short)96, (short)96, (short)96, (short)96, (short)719, (short)96, (short)98, (short)98, (short)98, (short)98, (short)98, (short)96, (short)98, (short)96, (short)98, (short)98, (short)98, (short)98, (short)96, (short)98, (short)206, (short)205, (short)719, (short)719, (short)719, (short)98, (short)96, (short)98, (short)210, (short)209, (short)207, (short)719, (short)98, (short)96, (short)719, (short)177, (short)178, (short)179, (short)180, (short)181, (short)98, (short)719, (short)265, (short)182, (short)719, (short)211, (short)219, (short)98, (short)212, (short)213, (short)215, (short)183, (short)184, (short)185, (short)214, (short)186, (short)229, (short)218, (short)221, (short)216, (short)96, (short)96, (short)220, (short)222, (short)224, (short)96, (short)217, (short)96, (short)96, (short)223, (short)96, (short)96, (short)96, (short)719, (short)98, (short)98, (short)225, (short)96, (short)96, (short)98, (short)96, (short)98, (short)98, (short)226, (short)98, (short)98, (short)98, (short)227, (short)228, (short)96, (short)719, (short)98, (short)98, (short)96, (short)98, (short)166, (short)166, (short)166, (short)166, (short)96, (short)96, (short)719, (short)233, (short)98, (short)231, (short)234, (short)237, (short)98, (short)719, (short)719, (short)96, (short)230, (short)238, (short)98, (short)98, (short)239, (short)235, (short)242, (short)236, (short)96, (short)719, (short)719, (short)232, (short)240, (short)98, (short)245, (short)243, (short)241, (short)246, (short)719, (short)719, (short)244, (short)719, (short)98, (short)249, (short)96, (short)249, (short)719, (short)248, (short)250, (short)250, (short)250, (short)250, (short)160, (short)247, (short)160, (short)160, (short)160, (short)253, (short)98, (short)253, (short)263, (short)96, (short)254, (short)254, (short)254, (short)254, (short)719, (short)164, (short)164, (short)164, (short)160, (short)164, (short)278, (short)160, (short)160, (short)98, (short)160, (short)161, (short)161, (short)161, (short)161, (short)163, (short)96, (short)163, (short)163, (short)163, (short)164, (short)164, (short)279, (short)164, (short)251, (short)252, (short)262, (short)252, (short)252, (short)252, (short)98, (short)164, (short)719, (short)163, (short)96, (short)719, (short)163, (short)163, (short)719, (short)163, (short)719, (short)96, (short)251, (short)252, (short)264, (short)96, (short)252, (short)252, (short)98, (short)252, (short)166, (short)166, (short)166, (short)166, (short)257, (short)98, (short)96, (short)96, (short)719, (short)98, (short)719, (short)293, (short)719, (short)96, (short)255, (short)96, (short)255, (short)255, (short)255, (short)96, (short)98, (short)98, (short)258, (short)258, (short)258, (short)259, (short)258, (short)98, (short)719, (short)98, (short)719, (short)719, (short)255, (short)98, (short)719, (short)255, (short)255, (short)96, (short)255, (short)266, (short)269, (short)258, (short)258, (short)96, (short)258, (short)267, (short)268, (short)270, (short)259, (short)96, (short)281, (short)98, (short)258, (short)96, (short)272, (short)719, (short)275, (short)98, (short)271, (short)96, (short)96, (short)96, (short)96, (short)98, (short)96, (short)273, (short)96, (short)98, (short)719, (short)274, (short)96, (short)96, (short)96, (short)98, (short)98, (short)98, (short)98, (short)96, (short)98, (short)719, (short)98, (short)719, (short)276, (short)719, (short)98, (short)98, (short)98, (short)96, (short)96, (short)719, (short)96, (short)98, (short)277, (short)283, (short)280, (short)284, (short)96, (short)282, (short)286, (short)96, (short)719, (short)98, (short)98, (short)287, (short)98, (short)96, (short)719, (short)96, (short)292, (short)96, (short)98, (short)285, (short)96, (short)98, (short)295, (short)719, (short)96, (short)288, (short)96, (short)98, (short)289, (short)98, (short)294, (short)98, (short)290, (short)291, (short)98, (short)296, (short)298, (short)299, (short)98, (short)96, (short)98, (short)300, (short)301, (short)297, (short)719, (short)96, (short)96, (short)96, (short)302, (short)719, (short)96, (short)96, (short)96, (short)98, (short)719, (short)96, (short)304, (short)306, (short)305, (short)98, (short)98, (short)98, (short)303, (short)311, (short)98, (short)98, (short)98, (short)96, (short)96, (short)98, (short)96, (short)96, (short)96, (short)96, (short)719, (short)96, (short)719, (short)307, (short)315, (short)719, (short)719, (short)98, (short)98, (short)96, (short)98, (short)98, (short)98, (short)98, (short)312, (short)98, (short)308, (short)310, (short)96, (short)314, (short)313, (short)96, (short)96, (short)98, (short)309, (short)719, (short)96, (short)96, (short)719, (short)96, (short)719, (short)719, (short)98, (short)96, (short)96, (short)98, (short)98, (short)96, (short)316, (short)320, (short)98, (short)98, (short)319, (short)98, (short)318, (short)317, (short)96, (short)98, (short)98, (short)96, (short)96, (short)98, (short)719, (short)96, (short)321, (short)96, (short)96, (short)322, (short)719, (short)96, (short)98, (short)96, (short)325, (short)98, (short)98, (short)96, (short)327, (short)98, (short)330, (short)98, (short)98, (short)323, (short)324, (short)98, (short)96, (short)98, (short)719, (short)719, (short)719, (short)98, (short)719, (short)326, (short)719, (short)96, (short)719, (short)328, (short)719, (short)96, (short)98, (short)96, (short)329, (short)333, (short)331, (short)250, (short)250, (short)250, (short)250, (short)98, (short)336, (short)338, (short)332, (short)98, (short)339, (short)98, (short)334, (short)96, (short)335, (short)96, (short)96, (short)341, (short)719, (short)337, (short)719, (short)340, (short)250, (short)250, (short)250, (short)250, (short)342, (short)98, (short)342, (short)98, (short)98, (short)343, (short)343, (short)343, (short)343, (short)719, (short)252, (short)96, (short)252, (short)252, (short)252, (short)254, (short)254, (short)254, (short)254, (short)353, (short)254, (short)254, (short)254, (short)254, (short)719, (short)98, (short)719, (short)719, (short)252, (short)362, (short)355, (short)252, (short)252, (short)719, (short)252, (short)255, (short)96, (short)255, (short)255, (short)255, (short)344, (short)354, (short)345, (short)345, (short)345, (short)346, (short)96, (short)719, (short)719, (short)96, (short)98, (short)719, (short)719, (short)255, (short)719, (short)719, (short)255, (short)255, (short)344, (short)255, (short)98, (short)345, (short)345, (short)98, (short)345, (short)719, (short)358, (short)719, (short)346, (short)347, (short)347, (short)347, (short)347, (short)258, (short)258, (short)258, (short)96, (short)258, (short)719, (short)347, (short)347, (short)347, (short)347, (short)348, (short)719, (short)349, (short)349, (short)349, (short)350, (short)369, (short)98, (short)356, (short)258, (short)258, (short)359, (short)258, (short)347, (short)347, (short)347, (short)347, (short)347, (short)348, (short)719, (short)258, (short)349, (short)349, (short)96, (short)349, (short)351, (short)96, (short)351, (short)350, (short)96, (short)352, (short)352, (short)352, (short)352, (short)96, (short)96, (short)96, (short)98, (short)96, (short)96, (short)98, (short)96, (short)357, (short)98, (short)96, (short)96, (short)96, (short)96, (short)98, (short)98, (short)98, (short)96, (short)98, (short)98, (short)96, (short)98, (short)96, (short)96, (short)98, (short)98, (short)98, (short)98, (short)719, (short)96, (short)360, (short)98, (short)96, (short)96, (short)98, (short)96, (short)98, (short)98, (short)719, (short)96, (short)719, (short)719, (short)361, (short)98, (short)367, (short)368, (short)98, (short)98, (short)364, (short)98, (short)363, (short)372, (short)371, (short)98, (short)96, (short)365, (short)366, (short)373, (short)96, (short)370, (short)96, (short)374, (short)375, (short)96, (short)376, (short)96, (short)719, (short)96, (short)98, (short)719, (short)96, (short)96, (short)98, (short)380, (short)98, (short)96, (short)96, (short)98, (short)379, (short)98, (short)381, (short)98, (short)719, (short)377, (short)98, (short)98, (short)96, (short)378, (short)96, (short)98, (short)98, (short)96, (short)96, (short)96, (short)382, (short)96, (short)383, (short)96, (short)96, (short)719, (short)98, (short)96, (short)98, (short)96, (short)96, (short)98, (short)98, (short)98, (short)96, (short)98, (short)396, (short)98, (short)98, (short)385, (short)96, (short)98, (short)384, (short)98, (short)98, (short)388, (short)386, (short)96, (short)98, (short)389, (short)96, (short)719, (short)387, (short)96, (short)98, (short)96, (short)96, (short)96, (short)719, (short)719, (short)394, (short)98, (short)96, (short)719, (short)98, (short)390, (short)96, (short)98, (short)96, (short)98, (short)98, (short)98, (short)391, (short)392, (short)393, (short)96, (short)98, (short)395, (short)397, (short)96, (short)98, (short)400, (short)98, (short)96, (short)398, (short)96, (short)96, (short)399, (short)96, (short)98, (short)96, (short)96, (short)401, (short)98, (short)96, (short)719, (short)719, (short)98, (short)96, (short)98, (short)98, (short)96, (short)98, (short)719, (short)98, (short)98, (short)719, (short)402, (short)98, (short)404, (short)405, (short)409, (short)98, (short)403, (short)96, (short)98, (short)407, (short)406, (short)96, (short)408, (short)410, (short)96, (short)96, (short)719, (short)412, (short)96, (short)96, (short)414, (short)98, (short)415, (short)719, (short)416, (short)98, (short)96, (short)413, (short)98, (short)98, (short)411, (short)719, (short)98, (short)98, (short)719, (short)719, (short)719, (short)418, (short)719, (short)96, (short)98, (short)417, (short)343, (short)343, (short)343, (short)343, (short)719, (short)719, (short)343, (short)343, (short)343, (short)343, (short)345, (short)98, (short)345, (short)345, (short)345, (short)719, (short)96, (short)421, (short)422, (short)719, (short)434, (short)419, (short)352, (short)352, (short)352, (short)352, (short)719, (short)420, (short)345, (short)96, (short)98, (short)345, (short)345, (short)423, (short)345, (short)423, (short)437, (short)719, (short)424, (short)424, (short)424, (short)424, (short)425, (short)98, (short)426, (short)426, (short)426, (short)427, (short)96, (short)719, (short)349, (short)96, (short)349, (short)349, (short)349, (short)96, (short)424, (short)424, (short)424, (short)424, (short)425, (short)432, (short)98, (short)426, (short)426, (short)98, (short)426, (short)719, (short)349, (short)98, (short)427, (short)349, (short)349, (short)428, (short)349, (short)428, (short)96, (short)431, (short)429, (short)429, (short)429, (short)429, (short)352, (short)352, (short)352, (short)352, (short)719, (short)96, (short)96, (short)719, (short)98, (short)433, (short)96, (short)719, (short)96, (short)96, (short)430, (short)96, (short)430, (short)430, (short)430, (short)98, (short)98, (short)436, (short)435, (short)96, (short)98, (short)442, (short)98, (short)98, (short)96, (short)98, (short)96, (short)96, (short)430, (short)719, (short)719, (short)430, (short)430, (short)98, (short)430, (short)719, (short)96, (short)719, (short)98, (short)96, (short)98, (short)98, (short)96, (short)440, (short)438, (short)96, (short)96, (short)719, (short)96, (short)439, (short)98, (short)441, (short)96, (short)98, (short)96, (short)96, (short)98, (short)96, (short)445, (short)98, (short)98, (short)444, (short)98, (short)719, (short)443, (short)446, (short)98, (short)447, (short)98, (short)98, (short)719, (short)98, (short)96, (short)448, (short)96, (short)719, (short)96, (short)449, (short)719, (short)451, (short)96, (short)96, (short)96, (short)452, (short)453, (short)96, (short)98, (short)96, (short)98, (short)450, (short)98, (short)719, (short)455, (short)96, (short)98, (short)98, (short)98, (short)96, (short)96, (short)98, (short)96, (short)98, (short)96, (short)96, (short)454, (short)456, (short)96, (short)98, (short)719, (short)719, (short)719, (short)98, (short)98, (short)457, (short)98, (short)96, (short)98, (short)98, (short)96, (short)719, (short)98, (short)460, (short)458, (short)461, (short)459, (short)96, (short)96, (short)96, (short)464, (short)98, (short)719, (short)96, (short)98, (short)462, (short)466, (short)96, (short)96, (short)463, (short)96, (short)98, (short)98, (short)98, (short)96, (short)465, (short)468, (short)98, (short)475, (short)469, (short)96, (short)98, (short)98, (short)96, (short)98, (short)96, (short)96, (short)467, (short)98, (short)96, (short)96, (short)96, (short)96, (short)96, (short)98, (short)96, (short)96, (short)98, (short)473, (short)98, (short)98, (short)719, (short)470, (short)98, (short)98, (short)98, (short)98, (short)98, (short)96, (short)98, (short)98, (short)472, (short)471, (short)96, (short)719, (short)476, (short)96, (short)477, (short)474, (short)96, (short)478, (short)96, (short)98, (short)719, (short)480, (short)479, (short)482, (short)98, (short)484, (short)719, (short)98, (short)719, (short)487, (short)98, (short)481, (short)98, (short)485, (short)488, (short)719, (short)719, (short)96, (short)486, (short)719, (short)96, (short)719, (short)483, (short)96, (short)719, (short)719, (short)426, (short)490, (short)426, (short)426, (short)426, (short)98, (short)96, (short)492, (short)98, (short)489, (short)719, (short)98, (short)491, (short)424, (short)424, (short)424, (short)424, (short)719, (short)426, (short)96, (short)98, (short)426, (short)426, (short)719, (short)426, (short)719, (short)719, (short)345, (short)719, (short)345, (short)345, (short)345, (short)493, (short)98, (short)493, (short)495, (short)96, (short)494, (short)494, (short)494, (short)494, (short)429, (short)429, (short)429, (short)429, (short)345, (short)500, (short)496, (short)345, (short)345, (short)98, (short)345, (short)429, (short)429, (short)429, (short)429, (short)430, (short)96, (short)430, (short)430, (short)430, (short)96, (short)96, (short)719, (short)499, (short)96, (short)349, (short)719, (short)349, (short)349, (short)349, (short)98, (short)719, (short)719, (short)430, (short)98, (short)98, (short)430, (short)430, (short)98, (short)430, (short)96, (short)96, (short)719, (short)349, (short)96, (short)497, (short)349, (short)349, (short)96, (short)349, (short)96, (short)96, (short)498, (short)96, (short)98, (short)98, (short)506, (short)96, (short)98, (short)96, (short)96, (short)96, (short)98, (short)96, (short)98, (short)98, (short)96, (short)98, (short)501, (short)96, (short)96, (short)98, (short)96, (short)98, (short)98, (short)98, (short)502, (short)98, (short)503, (short)96, (short)98, (short)96, (short)96, (short)98, (short)98, (short)96, (short)98, (short)509, (short)96, (short)719, (short)504, (short)505, (short)508, (short)98, (short)510, (short)98, (short)98, (short)96, (short)719, (short)98, (short)719, (short)507, (short)98, (short)96, (short)511, (short)719, (short)719, (short)514, (short)515, (short)516, (short)517, (short)98, (short)518, (short)96, (short)512, (short)513, (short)96, (short)98, (short)96, (short)523, (short)519, (short)96, (short)520, (short)525, (short)96, (short)521, (short)522, (short)98, (short)96, (short)719, (short)98, (short)96, (short)98, (short)96, (short)719, (short)98, (short)96, (short)96, (short)98, (short)96, (short)524, (short)96, (short)98, (short)526, (short)96, (short)98, (short)96, (short)98, (short)527, (short)96, (short)98, (short)98, (short)96, (short)98, (short)528, (short)98, (short)96, (short)96, (short)98, (short)719, (short)98, (short)96, (short)96, (short)98, (short)96, (short)96, (short)98, (short)96, (short)530, (short)719, (short)98, (short)98, (short)96, (short)529, (short)531, (short)98, (short)98, (short)719, (short)98, (short)98, (short)533, (short)98, (short)96, (short)534, (short)96, (short)96, (short)98, (short)96, (short)96, (short)96, (short)719, (short)532, (short)494, (short)494, (short)494, (short)494, (short)98, (short)96, (short)98, (short)98, (short)96, (short)98, (short)98, (short)98, (short)538, (short)535, (short)96, (short)96, (short)96, (short)719, (short)719, (short)98, (short)719, (short)96, (short)98, (short)96, (short)536, (short)96, (short)537, (short)719, (short)98, (short)98, (short)98, (short)539, (short)540, (short)541, (short)544, (short)98, (short)96, (short)98, (short)96, (short)98, (short)96, (short)542, (short)546, (short)543, (short)494, (short)494, (short)494, (short)494, (short)719, (short)96, (short)98, (short)96, (short)98, (short)548, (short)98, (short)96, (short)545, (short)96, (short)426, (short)547, (short)426, (short)426, (short)426, (short)98, (short)96, (short)98, (short)549, (short)719, (short)719, (short)98, (short)96, (short)98, (short)96, (short)96, (short)96, (short)96, (short)426, (short)550, (short)98, (short)426, (short)426, (short)552, (short)426, (short)719, (short)98, (short)96, (short)98, (short)98, (short)98, (short)98, (short)551, (short)554, (short)719, (short)96, (short)553, (short)96, (short)96, (short)556, (short)96, (short)98, (short)96, (short)719, (short)719, (short)555, (short)96, (short)96, (short)557, (short)98, (short)719, (short)98, (short)98, (short)96, (short)98, (short)96, (short)98, (short)558, (short)561, (short)559, (short)98, (short)98, (short)719, (short)96, (short)560, (short)96, (short)96, (short)98, (short)719, (short)98, (short)96, (short)96, (short)562, (short)96, (short)96, (short)96, (short)563, (short)98, (short)565, (short)98, (short)98, (short)567, (short)564, (short)568, (short)98, (short)98, (short)96, (short)98, (short)98, (short)98, (short)96, (short)566, (short)96, (short)96, (short)96, (short)719, (short)96, (short)96, (short)96, (short)96, (short)98, (short)96, (short)719, (short)96, (short)98, (short)571, (short)98, (short)98, (short)98, (short)572, (short)98, (short)98, (short)98, (short)98, (short)96, (short)98, (short)569, (short)98, (short)570, (short)719, (short)96, (short)96, (short)96, (short)719, (short)96, (short)96, (short)719, (short)574, (short)98, (short)576, (short)575, (short)96, (short)579, (short)573, (short)98, (short)98, (short)98, (short)580, (short)98, (short)98, (short)581, (short)96, (short)96, (short)96, (short)96, (short)98, (short)577, (short)578, (short)719, (short)582, (short)96, (short)719, (short)96, (short)719, (short)96, (short)98, (short)98, (short)98, (short)98, (short)96, (short)96, (short)96, (short)584, (short)719, (short)98, (short)587, (short)98, (short)583, (short)98, (short)96, (short)588, (short)96, (short)586, (short)98, (short)98, (short)98, (short)96, (short)585, (short)589, (short)591, (short)590, (short)96, (short)96, (short)98, (short)96, (short)98, (short)719, (short)96, (short)96, (short)96, (short)98, (short)719, (short)592, (short)96, (short)96, (short)98, (short)98, (short)719, (short)98, (short)595, (short)593, (short)98, (short)98, (short)98, (short)96, (short)594, (short)719, (short)98, (short)98, (short)719, (short)96, (short)597, (short)600, (short)96, (short)96, (short)96, (short)596, (short)96, (short)98, (short)719, (short)602, (short)96, (short)96, (short)598, (short)98, (short)96, (short)719, (short)98, (short)98, (short)98, (short)599, (short)98, (short)601, (short)605, (short)606, (short)98, (short)98, (short)96, (short)96, (short)98, (short)607, (short)96, (short)603, (short)604, (short)96, (short)96, (short)96, (short)96, (short)96, (short)719, (short)96, (short)98, (short)98, (short)96, (short)96, (short)98, (short)96, (short)608, (short)98, (short)98, (short)98, (short)98, (short)98, (short)610, (short)98, (short)96, (short)611, (short)98, (short)98, (short)609, (short)98, (short)96, (short)719, (short)96, (short)613, (short)719, (short)96, (short)96, (short)96, (short)98, (short)615, (short)719, (short)618, (short)719, (short)616, (short)98, (short)620, (short)98, (short)96, (short)621, (short)98, (short)98, (short)98, (short)96, (short)719, (short)622, (short)614, (short)612, (short)617, (short)96, (short)96, (short)96, (short)98, (short)619, (short)719, (short)719, (short)623, (short)98, (short)625, (short)96, (short)626, (short)96, (short)96, (short)98, (short)98, (short)98, (short)96, (short)96, (short)628, (short)629, (short)624, (short)627, (short)96, (short)98, (short)96, (short)98, (short)98, (short)96, (short)719, (short)96, (short)98, (short)98, (short)96, (short)96, (short)96, (short)639, (short)98, (short)96, (short)98, (short)96, (short)630, (short)98, (short)632, (short)98, (short)631, (short)96, (short)98, (short)98, (short)98, (short)719, (short)633, (short)98, (short)96, (short)98, (short)96, (short)96, (short)719, (short)634, (short)635, (short)98, (short)96, (short)719, (short)96, (short)636, (short)96, (short)96, (short)98, (short)96, (short)98, (short)98, (short)637, (short)96, (short)96, (short)96, (short)98, (short)641, (short)98, (short)719, (short)98, (short)98, (short)96, (short)98, (short)96, (short)96, (short)640, (short)98, (short)98, (short)98, (short)642, (short)638, (short)643, (short)644, (short)96, (short)719, (short)98, (short)96, (short)98, (short)98, (short)96, (short)719, (short)96, (short)96, (short)96, (short)96, (short)96, (short)719, (short)98, (short)647, (short)646, (short)98, (short)96, (short)719, (short)98, (short)649, (short)98, (short)98, (short)98, (short)98, (short)98, (short)652, (short)645, (short)96, (short)654, (short)719, (short)98, (short)650, (short)719, (short)96, (short)719, (short)96, (short)648, (short)96, (short)96, (short)651, (short)655, (short)98, (short)96, (short)656, (short)659, (short)660, (short)661, (short)98, (short)653, (short)98, (short)96, (short)98, (short)98, (short)96, (short)96, (short)96, (short)98, (short)96, (short)96, (short)96, (short)96, (short)719, (short)96, (short)96, (short)98, (short)96, (short)96, (short)98, (short)98, (short)98, (short)96, (short)98, (short)98, (short)98, (short)98, (short)662, (short)98, (short)98, (short)96, (short)98, (short)98, (short)719, (short)719, (short)663, (short)98, (short)719, (short)96, (short)96, (short)96, (short)664, (short)96, (short)665, (short)98, (short)673, (short)666, (short)671, (short)667, (short)669, (short)674, (short)672, (short)98, (short)98, (short)98, (short)677, (short)98, (short)668, (short)676, (short)96, (short)96, (short)96, (short)670, (short)719, (short)96, (short)96, (short)719, (short)719, (short)96, (short)96, (short)675, (short)96, (short)96, (short)98, (short)98, (short)98, (short)96, (short)678, (short)98, (short)98, (short)679, (short)680, (short)98, (short)98, (short)719, (short)98, (short)98, (short)719, (short)96, (short)96, (short)98, (short)96, (short)96, (short)96, (short)96, (short)719, (short)96, (short)96, (short)682, (short)96, (short)96, (short)681, (short)98, (short)98, (short)684, (short)98, (short)98, (short)98, (short)98, (short)683, (short)98, (short)98, (short)96, (short)98, (short)98, (short)96, (short)96, (short)719, (short)685, (short)686, (short)96, (short)96, (short)719, (short)96, (short)96, (short)96, (short)98, (short)719, (short)689, (short)98, (short)98, (short)687, (short)688, (short)96, (short)98, (short)98, (short)691, (short)98, (short)98, (short)98, (short)696, (short)690, (short)96, (short)96, (short)692, (short)96, (short)96, (short)98, (short)693, (short)96, (short)694, (short)96, (short)719, (short)695, (short)719, (short)96, (short)98, (short)98, (short)96, (short)98, (short)98, (short)699, (short)701, (short)98, (short)96, (short)98, (short)697, (short)96, (short)698, (short)98, (short)719, (short)96, (short)98, (short)700, (short)96, (short)96, (short)703, (short)96, (short)98, (short)702, (short)96, (short)98, (short)706, (short)96, (short)704, (short)98, (short)96, (short)96, (short)98, (short)98, (short)96, (short)98, (short)709, (short)719, (short)98, (short)719, (short)719, (short)98, (short)707, (short)708, (short)98, (short)98, (short)705, (short)719, (short)98, (short)710, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)713, (short)719, (short)715, (short)719, (short)717, (short)719, (short)719, (short)711, (short)718, (short)712, (short)719, (short)719, (short)719, (short)719, (short)719, (short)714, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)716, (short)61, (short)61, (short)61, (short)61, (short)61, (short)61, (short)61, (short)61, (short)68, (short)68, (short)719, (short)68, (short)68, (short)68, (short)68, (short)68, (short)97, (short)719, (short)719, (short)719, (short)97, (short)97, (short)97, (short)168, (short)168, (short)168, (short)169, (short)169, (short)256, (short)256, (short)260, (short)260, (short)260, (short)261, (short)261, (short)658, (short)719, (short)658, (short)658, (short)658, (short)3, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719
};

static const short int yy_chk[2634] = 
{
(short)0, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)10, (short)13, (short)13, (short)14, (short)19, (short)658, (short)22, (short)21, (short)22, (short)22, (short)22, (short)22, (short)30, (short)30, (short)23, (short)32, (short)19, (short)21, (short)21, (short)23, (short)14, (short)40, (short)33, (short)25, (short)25, (short)25, (short)25, (short)23, (short)26, (short)32, (short)28, (short)61, (short)26, (short)639, (short)101, (short)40, (short)33, (short)10, (short)24, (short)57, (short)24, (short)24, (short)24, (short)24, (short)25, (short)28, (short)34, (short)28, (short)28, (short)39, (short)34, (short)34, (short)98, (short)24, (short)96, (short)47, (short)24, (short)24, (short)24, (short)95, (short)24, (short)24, (short)91, (short)39, (short)34, (short)43, (short)38, (short)85, (short)61, (short)47, (short)49, (short)24, (short)25, (short)33, (short)40, (short)24, (short)24, (short)41, (short)24, (short)43, (short)38, (short)42, (short)44, (short)97, (short)49, (short)57, (short)24, (short)38, (short)38, (short)24, (short)45, (short)41, (short)38, (short)76, (short)46, (short)42, (short)44, (short)97, (short)48, (short)39, (short)69, (short)63, (short)38, (short)39, (short)45, (short)39, (short)47, (short)38, (short)46, (short)69, (short)37, (short)38, (short)48, (short)43, (short)41, (short)43, (short)100, (short)68, (short)42, (short)42, (short)38, (short)41, (short)42, (short)49, (short)43, (short)41, (short)49, (short)44, (short)41, (short)42, (short)44, (short)45, (short)42, (short)44, (short)29, (short)48, (short)46, (short)50, (short)51, (short)48, (short)52, (short)45, (short)53, (short)46, (short)46, (short)18, (short)54, (short)99, (short)46, (short)68, (short)15, (short)50, (short)51, (short)100, (short)52, (short)107, (short)53, (short)83, (short)55, (short)83, (short)54, (short)99, (short)83, (short)83, (short)83, (short)83, (short)105, (short)103, (short)9, (short)107, (short)3, (short)104, (short)55, (short)0, (short)108, (short)109, (short)110, (short)0, (short)50, (short)51, (short)105, (short)103, (short)51, (short)51, (short)52, (short)104, (short)0, (short)53, (short)108, (short)109, (short)110, (short)54, (short)53, (short)51, (short)51, (short)55, (short)51, (short)54, (short)99, (short)111, (short)52, (short)0, (short)55, (short)77, (short)77, (short)77, (short)77, (short)84, (short)84, (short)84, (short)0, (short)84, (short)0, (short)111, (short)107, (short)105, (short)77, (short)77, (short)103, (short)77, (short)77, (short)77, (short)104, (short)0, (short)108, (short)0, (short)84, (short)84, (short)0, (short)84, (short)109, (short)0, (short)112, (short)0, (short)77, (short)77, (short)110, (short)84, (short)77, (short)77, (short)114, (short)77, (short)81, (short)81, (short)81, (short)81, (short)112, (short)113, (short)111, (short)118, (short)119, (short)0, (short)115, (short)116, (short)114, (short)81, (short)81, (short)117, (short)81, (short)81, (short)81, (short)113, (short)125, (short)118, (short)119, (short)121, (short)115, (short)116, (short)120, (short)0, (short)0, (short)117, (short)0, (short)81, (short)81, (short)0, (short)125, (short)81, (short)81, (short)121, (short)81, (short)82, (short)120, (short)82, (short)82, (short)82, (short)82, (short)112, (short)113, (short)115, (short)116, (short)0, (short)119, (short)0, (short)114, (short)119, (short)82, (short)122, (short)123, (short)82, (short)82, (short)82, (short)0, (short)82, (short)118, (short)119, (short)124, (short)117, (short)126, (short)127, (short)120, (short)122, (short)123, (short)121, (short)82, (short)0, (short)120, (short)125, (short)82, (short)82, (short)124, (short)82, (short)126, (short)127, (short)128, (short)129, (short)130, (short)131, (short)135, (short)82, (short)106, (short)0, (short)137, (short)141, (short)132, (short)134, (short)0, (short)176, (short)128, (short)129, (short)130, (short)131, (short)135, (short)133, (short)106, (short)136, (short)137, (short)141, (short)132, (short)134, (short)138, (short)176, (short)123, (short)122, (short)0, (short)0, (short)0, (short)133, (short)139, (short)136, (short)127, (short)126, (short)124, (short)0, (short)138, (short)140, (short)0, (short)106, (short)106, (short)106, (short)106, (short)106, (short)139, (short)0, (short)176, (short)106, (short)0, (short)128, (short)135, (short)140, (short)129, (short)130, (short)133, (short)106, (short)106, (short)106, (short)132, (short)106, (short)141, (short)134, (short)137, (short)133, (short)142, (short)143, (short)136, (short)138, (short)139, (short)144, (short)133, (short)146, (short)145, (short)138, (short)147, (short)148, (short)150, (short)0, (short)142, (short)143, (short)140, (short)149, (short)151, (short)144, (short)152, (short)146, (short)145, (short)140, (short)147, (short)148, (short)150, (short)140, (short)140, (short)153, (short)0, (short)149, (short)151, (short)154, (short)152, (short)165, (short)165, (short)165, (short)165, (short)191, (short)174, (short)0, (short)144, (short)153, (short)143, (short)144, (short)145, (short)154, (short)0, (short)0, (short)211, (short)142, (short)146, (short)191, (short)174, (short)147, (short)144, (short)150, (short)144, (short)185, (short)0, (short)0, (short)143, (short)148, (short)211, (short)152, (short)150, (short)149, (short)152, (short)0, (short)0, (short)151, (short)0, (short)185, (short)159, (short)173, (short)159, (short)0, (short)154, (short)159, (short)159, (short)159, (short)159, (short)160, (short)153, (short)160, (short)160, (short)160, (short)162, (short)173, (short)162, (short)174, (short)175, (short)162, (short)162, (short)162, (short)162, (short)0, (short)164, (short)164, (short)164, (short)160, (short)164, (short)185, (short)160, (short)160, (short)175, (short)160, (short)161, (short)161, (short)161, (short)161, (short)163, (short)199, (short)163, (short)163, (short)163, (short)164, (short)164, (short)185, (short)164, (short)161, (short)161, (short)173, (short)161, (short)161, (short)161, (short)199, (short)164, (short)0, (short)163, (short)178, (short)0, (short)163, (short)163, (short)0, (short)163, (short)0, (short)177, (short)161, (short)161, (short)175, (short)187, (short)161, (short)161, (short)178, (short)161, (short)166, (short)166, (short)166, (short)166, (short)168, (short)177, (short)181, (short)179, (short)0, (short)187, (short)0, (short)199, (short)0, (short)180, (short)166, (short)183, (short)166, (short)166, (short)166, (short)182, (short)181, (short)179, (short)168, (short)168, (short)168, (short)168, (short)168, (short)180, (short)0, (short)183, (short)0, (short)0, (short)166, (short)182, (short)0, (short)166, (short)166, (short)184, (short)166, (short)177, (short)178, (short)168, (short)168, (short)186, (short)168, (short)177, (short)177, (short)179, (short)168, (short)188, (short)187, (short)184, (short)168, (short)189, (short)180, (short)0, (short)183, (short)186, (short)179, (short)190, (short)192, (short)193, (short)194, (short)188, (short)195, (short)181, (short)196, (short)189, (short)0, (short)182, (short)197, (short)198, (short)200, (short)190, (short)192, (short)193, (short)194, (short)201, (short)195, (short)0, (short)196, (short)0, (short)184, (short)0, (short)197, (short)198, (short)200, (short)203, (short)204, (short)0, (short)202, (short)201, (short)184, (short)189, (short)186, (short)190, (short)205, (short)188, (short)193, (short)206, (short)0, (short)203, (short)204, (short)194, (short)202, (short)207, (short)0, (short)208, (short)198, (short)209, (short)205, (short)192, (short)210, (short)206, (short)201, (short)0, (short)212, (short)195, (short)213, (short)207, (short)196, (short)208, (short)200, (short)209, (short)197, (short)197, (short)210, (short)202, (short)203, (short)204, (short)212, (short)214, (short)213, (short)204, (short)205, (short)202, (short)0, (short)215, (short)216, (short)218, (short)206, (short)0, (short)217, (short)219, (short)220, (short)214, (short)0, (short)222, (short)208, (short)210, (short)209, (short)215, (short)216, (short)218, (short)207, (short)217, (short)217, (short)219, (short)220, (short)223, (short)221, (short)222, (short)224, (short)225, (short)226, (short)227, (short)0, (short)228, (short)0, (short)213, (short)221, (short)0, (short)0, (short)223, (short)221, (short)229, (short)224, (short)225, (short)226, (short)227, (short)218, (short)228, (short)214, (short)216, (short)230, (short)220, (short)219, (short)232, (short)231, (short)229, (short)215, (short)0, (short)233, (short)234, (short)0, (short)237, (short)0, (short)0, (short)230, (short)235, (short)236, (short)232, (short)231, (short)238, (short)222, (short)226, (short)233, (short)234, (short)225, (short)237, (short)224, (short)223, (short)239, (short)235, (short)236, (short)241, (short)240, (short)238, (short)0, (short)243, (short)227, (short)242, (short)244, (short)228, (short)0, (short)245, (short)239, (short)248, (short)232, (short)241, (short)240, (short)246, (short)234, (short)243, (short)237, (short)242, (short)244, (short)230, (short)231, (short)245, (short)247, (short)248, (short)0, (short)0, (short)0, (short)246, (short)0, (short)233, (short)0, (short)261, (short)0, (short)235, (short)0, (short)262, (short)247, (short)263, (short)236, (short)240, (short)238, (short)249, (short)249, (short)249, (short)249, (short)261, (short)243, (short)245, (short)239, (short)262, (short)246, (short)263, (short)241, (short)265, (short)242, (short)264, (short)272, (short)248, (short)0, (short)244, (short)0, (short)247, (short)250, (short)250, (short)250, (short)250, (short)251, (short)265, (short)251, (short)264, (short)272, (short)251, (short)251, (short)251, (short)251, (short)250, (short)252, (short)268, (short)252, (short)252, (short)252, (short)253, (short)253, (short)253, (short)253, (short)263, (short)254, (short)254, (short)254, (short)254, (short)0, (short)268, (short)0, (short)250, (short)252, (short)272, (short)265, (short)252, (short)252, (short)254, (short)252, (short)255, (short)278, (short)255, (short)255, (short)255, (short)256, (short)264, (short)256, (short)256, (short)256, (short)256, (short)266, (short)0, (short)0, (short)269, (short)278, (short)254, (short)0, (short)255, (short)0, (short)0, (short)255, (short)255, (short)256, (short)255, (short)266, (short)256, (short)256, (short)269, (short)256, (short)0, (short)268, (short)0, (short)256, (short)257, (short)257, (short)257, (short)257, (short)258, (short)258, (short)258, (short)267, (short)258, (short)0, (short)257, (short)257, (short)257, (short)257, (short)257, (short)0, (short)257, (short)257, (short)257, (short)257, (short)278, (short)267, (short)266, (short)258, (short)258, (short)269, (short)258, (short)257, (short)257, (short)257, (short)257, (short)257, (short)257, (short)0, (short)258, (short)257, (short)257, (short)270, (short)257, (short)259, (short)271, (short)259, (short)257, (short)273, (short)259, (short)259, (short)259, (short)259, (short)274, (short)276, (short)275, (short)270, (short)280, (short)277, (short)271, (short)279, (short)267, (short)273, (short)281, (short)284, (short)282, (short)285, (short)274, (short)276, (short)275, (short)286, (short)280, (short)277, (short)287, (short)279, (short)283, (short)288, (short)281, (short)284, (short)282, (short)285, (short)0, (short)289, (short)270, (short)286, (short)290, (short)291, (short)287, (short)292, (short)283, (short)288, (short)0, (short)293, (short)0, (short)0, (short)271, (short)289, (short)276, (short)277, (short)290, (short)291, (short)274, (short)292, (short)273, (short)281, (short)280, (short)293, (short)294, (short)274, (short)275, (short)282, (short)295, (short)279, (short)296, (short)283, (short)284, (short)297, (short)286, (short)298, (short)0, (short)299, (short)294, (short)0, (short)300, (short)302, (short)295, (short)292, (short)296, (short)301, (short)303, (short)297, (short)291, (short)298, (short)293, (short)299, (short)0, (short)289, (short)300, (short)302, (short)304, (short)290, (short)305, (short)301, (short)303, (short)307, (short)306, (short)309, (short)294, (short)308, (short)295, (short)312, (short)311, (short)0, (short)304, (short)310, (short)305, (short)313, (short)314, (short)307, (short)306, (short)309, (short)315, (short)308, (short)311, (short)312, (short)311, (short)297, (short)317, (short)310, (short)296, (short)313, (short)314, (short)300, (short)298, (short)318, (short)315, (short)301, (short)316, (short)0, (short)299, (short)319, (short)317, (short)320, (short)321, (short)322, (short)0, (short)0, (short)309, (short)318, (short)323, (short)0, (short)316, (short)304, (short)326, (short)319, (short)325, (short)320, (short)321, (short)322, (short)305, (short)306, (short)308, (short)324, (short)323, (short)310, (short)312, (short)328, (short)326, (short)317, (short)325, (short)327, (short)314, (short)329, (short)330, (short)316, (short)331, (short)324, (short)332, (short)333, (short)318, (short)328, (short)334, (short)0, (short)0, (short)327, (short)335, (short)329, (short)330, (short)336, (short)331, (short)0, (short)332, (short)333, (short)0, (short)319, (short)334, (short)321, (short)322, (short)326, (short)335, (short)320, (short)337, (short)336, (short)324, (short)323, (short)338, (short)325, (short)327, (short)339, (short)340, (short)0, (short)329, (short)353, (short)341, (short)331, (short)337, (short)332, (short)0, (short)333, (short)338, (short)357, (short)330, (short)339, (short)340, (short)328, (short)0, (short)353, (short)341, (short)0, (short)0, (short)0, (short)336, (short)0, (short)360, (short)357, (short)335, (short)342, (short)342, (short)342, (short)342, (short)0, (short)0, (short)343, (short)343, (short)343, (short)343, (short)345, (short)360, (short)345, (short)345, (short)345, (short)0, (short)355, (short)340, (short)341, (short)343, (short)357, (short)337, (short)351, (short)351, (short)351, (short)351, (short)0, (short)339, (short)345, (short)354, (short)355, (short)345, (short)345, (short)346, (short)345, (short)346, (short)360, (short)343, (short)346, (short)346, (short)346, (short)346, (short)347, (short)354, (short)347, (short)347, (short)347, (short)347, (short)356, (short)0, (short)349, (short)358, (short)349, (short)349, (short)349, (short)359, (short)423, (short)423, (short)423, (short)423, (short)347, (short)355, (short)356, (short)347, (short)347, (short)358, (short)347, (short)0, (short)349, (short)359, (short)347, (short)349, (short)349, (short)350, (short)349, (short)350, (short)361, (short)354, (short)350, (short)350, (short)350, (short)350, (short)352, (short)352, (short)352, (short)352, (short)0, (short)362, (short)363, (short)0, (short)361, (short)356, (short)364, (short)0, (short)365, (short)366, (short)352, (short)367, (short)352, (short)352, (short)352, (short)362, (short)363, (short)359, (short)358, (short)368, (short)364, (short)365, (short)365, (short)366, (short)369, (short)367, (short)370, (short)372, (short)352, (short)0, (short)0, (short)352, (short)352, (short)368, (short)352, (short)0, (short)371, (short)0, (short)369, (short)373, (short)370, (short)372, (short)374, (short)363, (short)361, (short)375, (short)376, (short)0, (short)377, (short)362, (short)371, (short)364, (short)378, (short)373, (short)379, (short)380, (short)374, (short)381, (short)368, (short)375, (short)376, (short)367, (short)377, (short)0, (short)366, (short)369, (short)378, (short)370, (short)379, (short)380, (short)0, (short)381, (short)382, (short)371, (short)383, (short)0, (short)384, (short)372, (short)0, (short)374, (short)385, (short)387, (short)386, (short)375, (short)377, (short)388, (short)382, (short)389, (short)383, (short)373, (short)384, (short)0, (short)380, (short)390, (short)385, (short)387, (short)386, (short)391, (short)392, (short)388, (short)393, (short)389, (short)394, (short)396, (short)379, (short)381, (short)395, (short)390, (short)0, (short)0, (short)0, (short)391, (short)392, (short)382, (short)393, (short)397, (short)394, (short)396, (short)398, (short)0, (short)395, (short)385, (short)383, (short)386, (short)384, (short)399, (short)400, (short)401, (short)389, (short)397, (short)0, (short)402, (short)398, (short)387, (short)391, (short)405, (short)403, (short)388, (short)404, (short)399, (short)400, (short)401, (short)406, (short)390, (short)394, (short)402, (short)403, (short)395, (short)407, (short)405, (short)403, (short)408, (short)404, (short)409, (short)410, (short)393, (short)406, (short)411, (short)412, (short)413, (short)414, (short)415, (short)407, (short)417, (short)416, (short)408, (short)401, (short)409, (short)410, (short)0, (short)398, (short)411, (short)412, (short)413, (short)414, (short)415, (short)418, (short)417, (short)416, (short)400, (short)399, (short)419, (short)0, (short)404, (short)420, (short)405, (short)402, (short)421, (short)407, (short)422, (short)418, (short)0, (short)409, (short)408, (short)411, (short)419, (short)413, (short)0, (short)420, (short)0, (short)416, (short)421, (short)410, (short)422, (short)414, (short)416, (short)0, (short)0, (short)436, (short)415, (short)0, (short)431, (short)0, (short)412, (short)432, (short)0, (short)0, (short)426, (short)419, (short)426, (short)426, (short)426, (short)436, (short)460, (short)421, (short)431, (short)418, (short)0, (short)432, (short)420, (short)424, (short)424, (short)424, (short)424, (short)0, (short)426, (short)435, (short)460, (short)426, (short)426, (short)0, (short)426, (short)0, (short)0, (short)424, (short)0, (short)424, (short)424, (short)424, (short)427, (short)435, (short)427, (short)431, (short)433, (short)427, (short)427, (short)427, (short)427, (short)428, (short)428, (short)428, (short)428, (short)424, (short)436, (short)432, (short)424, (short)424, (short)433, (short)424, (short)429, (short)429, (short)429, (short)429, (short)430, (short)434, (short)430, (short)430, (short)430, (short)437, (short)438, (short)0, (short)435, (short)439, (short)429, (short)0, (short)429, (short)429, (short)429, (short)434, (short)0, (short)0, (short)430, (short)437, (short)438, (short)430, (short)430, (short)439, (short)430, (short)440, (short)441, (short)0, (short)429, (short)442, (short)433, (short)429, (short)429, (short)443, (short)429, (short)445, (short)444, (short)434, (short)447, (short)440, (short)441, (short)442, (short)446, (short)442, (short)448, (short)451, (short)449, (short)443, (short)452, (short)445, (short)444, (short)450, (short)447, (short)437, (short)454, (short)453, (short)446, (short)455, (short)448, (short)451, (short)449, (short)438, (short)452, (short)439, (short)456, (short)450, (short)457, (short)458, (short)454, (short)453, (short)461, (short)455, (short)445, (short)459, (short)0, (short)440, (short)441, (short)444, (short)456, (short)446, (short)457, (short)458, (short)462, (short)0, (short)461, (short)0, (short)443, (short)459, (short)463, (short)447, (short)0, (short)0, (short)450, (short)451, (short)452, (short)453, (short)462, (short)453, (short)464, (short)448, (short)449, (short)465, (short)463, (short)466, (short)456, (short)453, (short)467, (short)453, (short)458, (short)468, (short)454, (short)455, (short)464, (short)469, (short)0, (short)465, (short)470, (short)466, (short)471, (short)0, (short)467, (short)472, (short)473, (short)468, (short)474, (short)457, (short)475, (short)469, (short)459, (short)476, (short)470, (short)477, (short)471, (short)462, (short)478, (short)472, (short)473, (short)479, (short)474, (short)463, (short)475, (short)480, (short)481, (short)476, (short)0, (short)477, (short)482, (short)483, (short)478, (short)484, (short)485, (short)479, (short)486, (short)470, (short)0, (short)480, (short)481, (short)487, (short)466, (short)471, (short)482, (short)483, (short)0, (short)484, (short)485, (short)474, (short)486, (short)488, (short)476, (short)489, (short)490, (short)487, (short)491, (short)492, (short)495, (short)0, (short)472, (short)493, (short)493, (short)493, (short)493, (short)488, (short)496, (short)489, (short)490, (short)497, (short)491, (short)492, (short)495, (short)486, (short)481, (short)498, (short)499, (short)501, (short)0, (short)0, (short)496, (short)0, (short)500, (short)497, (short)502, (short)482, (short)503, (short)484, (short)0, (short)498, (short)499, (short)501, (short)487, (short)488, (short)489, (short)492, (short)500, (short)504, (short)502, (short)506, (short)503, (short)505, (short)490, (short)496, (short)491, (short)494, (short)494, (short)494, (short)494, (short)0, (short)507, (short)504, (short)508, (short)506, (short)499, (short)505, (short)509, (short)495, (short)510, (short)494, (short)497, (short)494, (short)494, (short)494, (short)507, (short)511, (short)508, (short)500, (short)0, (short)0, (short)509, (short)512, (short)510, (short)513, (short)514, (short)515, (short)516, (short)494, (short)503, (short)511, (short)494, (short)494, (short)505, (short)494, (short)0, (short)512, (short)519, (short)513, (short)514, (short)515, (short)516, (short)504, (short)508, (short)0, (short)517, (short)507, (short)518, (short)520, (short)510, (short)521, (short)519, (short)522, (short)0, (short)0, (short)509, (short)523, (short)524, (short)511, (short)517, (short)0, (short)518, (short)520, (short)525, (short)521, (short)526, (short)522, (short)512, (short)516, (short)513, (short)523, (short)524, (short)0, (short)527, (short)515, (short)528, (short)529, (short)525, (short)0, (short)526, (short)530, (short)531, (short)517, (short)532, (short)533, (short)534, (short)517, (short)527, (short)519, (short)528, (short)529, (short)521, (short)518, (short)522, (short)530, (short)531, (short)535, (short)532, (short)533, (short)534, (short)536, (short)520, (short)537, (short)538, (short)539, (short)0, (short)540, (short)541, (short)542, (short)543, (short)535, (short)544, (short)0, (short)545, (short)536, (short)529, (short)537, (short)538, (short)539, (short)530, (short)540, (short)541, (short)542, (short)543, (short)546, (short)544, (short)527, (short)545, (short)528, (short)0, (short)547, (short)548, (short)549, (short)0, (short)550, (short)551, (short)0, (short)533, (short)546, (short)536, (short)534, (short)556, (short)539, (short)532, (short)547, (short)548, (short)549, (short)541, (short)550, (short)551, (short)543, (short)553, (short)552, (short)554, (short)555, (short)556, (short)537, (short)538, (short)0, (short)544, (short)557, (short)0, (short)558, (short)0, (short)559, (short)553, (short)552, (short)554, (short)555, (short)560, (short)561, (short)562, (short)547, (short)0, (short)557, (short)550, (short)558, (short)546, (short)559, (short)563, (short)551, (short)564, (short)549, (short)560, (short)561, (short)562, (short)565, (short)548, (short)552, (short)554, (short)553, (short)566, (short)567, (short)563, (short)568, (short)564, (short)0, (short)569, (short)570, (short)571, (short)565, (short)0, (short)555, (short)572, (short)574, (short)566, (short)567, (short)0, (short)568, (short)561, (short)558, (short)569, (short)570, (short)571, (short)573, (short)559, (short)0, (short)572, (short)574, (short)0, (short)575, (short)563, (short)565, (short)576, (short)577, (short)578, (short)562, (short)579, (short)573, (short)0, (short)568, (short)580, (short)581, (short)563, (short)575, (short)582, (short)0, (short)576, (short)577, (short)578, (short)564, (short)579, (short)566, (short)571, (short)572, (short)580, (short)581, (short)583, (short)584, (short)582, (short)573, (short)585, (short)569, (short)570, (short)586, (short)587, (short)589, (short)588, (short)590, (short)0, (short)591, (short)583, (short)584, (short)592, (short)593, (short)585, (short)594, (short)576, (short)586, (short)587, (short)589, (short)588, (short)590, (short)579, (short)591, (short)595, (short)582, (short)592, (short)593, (short)578, (short)594, (short)596, (short)0, (short)597, (short)584, (short)0, (short)598, (short)599, (short)600, (short)595, (short)586, (short)0, (short)589, (short)0, (short)587, (short)596, (short)591, (short)597, (short)601, (short)592, (short)598, (short)599, (short)600, (short)602, (short)0, (short)593, (short)585, (short)583, (short)588, (short)603, (short)604, (short)605, (short)601, (short)590, (short)0, (short)0, (short)594, (short)602, (short)596, (short)606, (short)597, (short)607, (short)608, (short)603, (short)604, (short)605, (short)609, (short)610, (short)599, (short)600, (short)595, (short)598, (short)611, (short)606, (short)612, (short)607, (short)608, (short)613, (short)0, (short)614, (short)609, (short)610, (short)615, (short)616, (short)617, (short)616, (short)611, (short)618, (short)612, (short)619, (short)601, (short)613, (short)605, (short)614, (short)602, (short)620, (short)615, (short)616, (short)617, (short)0, (short)607, (short)618, (short)621, (short)619, (short)622, (short)623, (short)0, (short)608, (short)610, (short)620, (short)624, (short)0, (short)625, (short)613, (short)626, (short)627, (short)621, (short)628, (short)622, (short)623, (short)614, (short)629, (short)630, (short)631, (short)624, (short)619, (short)625, (short)0, (short)626, (short)627, (short)632, (short)628, (short)633, (short)635, (short)617, (short)629, (short)630, (short)631, (short)621, (short)615, (short)622, (short)623, (short)634, (short)0, (short)632, (short)636, (short)633, (short)635, (short)637, (short)0, (short)638, (short)642, (short)640, (short)641, (short)643, (short)0, (short)634, (short)628, (short)627, (short)636, (short)644, (short)0, (short)637, (short)630, (short)638, (short)642, (short)640, (short)641, (short)643, (short)633, (short)626, (short)645, (short)635, (short)0, (short)644, (short)631, (short)0, (short)646, (short)0, (short)647, (short)629, (short)648, (short)649, (short)632, (short)637, (short)645, (short)651, (short)638, (short)640, (short)641, (short)643, (short)646, (short)634, (short)647, (short)652, (short)648, (short)649, (short)650, (short)653, (short)654, (short)651, (short)656, (short)660, (short)655, (short)661, (short)0, (short)659, (short)662, (short)652, (short)663, (short)664, (short)650, (short)653, (short)654, (short)665, (short)656, (short)660, (short)655, (short)661, (short)645, (short)659, (short)662, (short)666, (short)663, (short)664, (short)0, (short)0, (short)646, (short)665, (short)0, (short)667, (short)669, (short)668, (short)648, (short)670, (short)649, (short)666, (short)656, (short)650, (short)655, (short)651, (short)653, (short)659, (short)655, (short)667, (short)669, (short)668, (short)664, (short)670, (short)652, (short)663, (short)671, (short)672, (short)673, (short)654, (short)0, (short)674, (short)676, (short)0, (short)0, (short)675, (short)677, (short)662, (short)678, (short)679, (short)671, (short)672, (short)673, (short)681, (short)665, (short)674, (short)676, (short)666, (short)668, (short)675, (short)677, (short)0, (short)678, (short)679, (short)0, (short)682, (short)680, (short)681, (short)683, (short)684, (short)685, (short)686, (short)0, (short)687, (short)690, (short)673, (short)688, (short)689, (short)672, (short)682, (short)680, (short)675, (short)683, (short)684, (short)685, (short)686, (short)673, (short)687, (short)690, (short)691, (short)688, (short)689, (short)692, (short)693, (short)0, (short)676, (short)677, (short)694, (short)695, (short)0, (short)696, (short)697, (short)698, (short)691, (short)0, (short)681, (short)692, (short)693, (short)678, (short)680, (short)699, (short)694, (short)695, (short)683, (short)696, (short)697, (short)698, (short)690, (short)682, (short)700, (short)701, (short)684, (short)702, (short)703, (short)699, (short)686, (short)704, (short)688, (short)705, (short)0, (short)689, (short)0, (short)706, (short)700, (short)701, (short)708, (short)702, (short)703, (short)693, (short)695, (short)704, (short)707, (short)705, (short)691, (short)709, (short)692, (short)706, (short)0, (short)710, (short)708, (short)694, (short)711, (short)712, (short)698, (short)713, (short)707, (short)697, (short)714, (short)709, (short)701, (short)715, (short)699, (short)710, (short)716, (short)717, (short)711, (short)712, (short)718, (short)713, (short)706, (short)0, (short)714, (short)0, (short)0, (short)715, (short)703, (short)704, (short)716, (short)717, (short)700, (short)0, (short)718, (short)707, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)711, (short)0, (short)713, (short)0, (short)715, (short)0, (short)0, (short)709, (short)717, (short)710, (short)0, (short)0, (short)0, (short)0, (short)0, (short)712, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)714, (short)720, (short)720, (short)720, (short)720, (short)720, (short)720, (short)720, (short)720, (short)721, (short)721, (short)0, (short)721, (short)721, (short)721, (short)721, (short)721, (short)722, (short)0, (short)0, (short)0, (short)722, (short)722, (short)722, (short)723, (short)723, (short)723, (short)724, (short)724, (short)725, (short)725, (short)726, (short)726, (short)726, (short)727, (short)727, (short)728, (short)0, (short)728, (short)728, (short)728, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719, (short)719
};

static yy_state_type yy_last_accepting_state;

static char * yy_last_accepting_cpos;

char * yytext;

enum yytokentype
{
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, LONG = 294, SIGNED = 295, UNSIGNED = 296, FLOAT = 297, DOUBLE = 298, CONST = 299, VOLATILE = 300, VOID = 301, VALIST = 302, STRUCT = 303, UNION = 304, ENUM = 305, ELLIPSIS = 306, CASE = 307, DEFAULT = 308, IF = 309, SWITCH = 310, WHILE = 311, DO = 312, FOR = 313, GOTO = 314, CONTINUE = 315, BREAK = 316, RETURN = 317, IFX = 318, ELSE = 319, CLASS = 320, THISCLASS = 321, CLASS_NAME = 322, PROPERTY = 323, SETPROP = 324, GETPROP = 325, NEWOP = 326, RENEW = 327, DELETE = 328, EXT_DECL = 329, EXT_STORAGE = 330, IMPORT = 331, DEFINE = 332, VIRTUAL = 333, ATTRIB = 334, PUBLIC = 335, PRIVATE = 336, TYPED_OBJECT = 337, ANY_OBJECT = 338, _INCREF = 339, EXTENSION = 340, ASM = 341, TYPEOF = 342, WATCH = 343, STOPWATCHING = 344, FIREWATCHERS = 345, WATCHABLE = 346, CLASS_DESIGNER = 347, CLASS_NO_EXPANSION = 348, CLASS_FIXED = 349, ISPROPSET = 350, CLASS_DEFAULT_PROPERTY = 351, PROPERTY_CATEGORY = 352, CLASS_DATA = 353, CLASS_PROPERTY = 354, SUBCLASS = 355, NAMESPACE = 356, NEW0OP = 357, RENEW0 = 358, VAARG = 359, DBTABLE = 360, DBFIELD = 361, DBINDEX = 362, DATABASE_OPEN = 363, ALIGNOF = 364, ATTRIB_DEP = 365, __ATTRIB = 366, BOOL = 367, _BOOL = 368, _COMPLEX = 369, _IMAGINARY = 370, RESTRICT = 371, THREAD = 372
};

typedef union YYSTYPE
{
int specifierType;
int i;
int declMode;
struct Identifier * id;
struct Expression * exp;
struct Specifier * specifier;
struct __ecereNameSpace__ecere__sys__OldList * list;
struct Enumerator * enumerator;
struct Declarator * declarator;
struct Pointer * pointer;
struct Initializer * initializer;
struct InitDeclarator * initDeclarator;
struct TypeName * typeName;
struct Declaration * declaration;
struct Statement * stmt;
struct FunctionDefinition * function;
struct External * external;
struct Context * context;
struct AsmField * asmField;
struct Attrib * attrib;
struct ExtDecl * extDecl;
struct Attribute * attribute;
struct Instantiation * instance;
struct MembersInit * membersInit;
struct MemberInit * memberInit;
struct ClassFunction * classFunction;
struct ClassDefinition * _class;
struct ClassDef * classDef;
struct PropertyDef * prop;
char * string;
struct Symbol * symbol;
struct PropertyWatch * propertyWatch;
struct TemplateParameter * templateParameter;
struct TemplateArgument * templateArgument;
struct TemplateDatatype * templateDatatype;
struct DBTableEntry * dbtableEntry;
struct DBIndexItem * dbindexItem;
struct DBTableDef * dbtableDef;
} __attribute__ ((gcc_struct)) YYSTYPE;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Enumerator;

struct Enumerator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_InitDeclarator;

struct InitDeclarator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_AsmField;

struct AsmField;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Attribute;

struct Attribute;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassFunction;

struct ClassFunction;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_MembersInit;

struct MembersInit;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_MemberInit;

struct MemberInit;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyDef;

struct PropertyDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyWatch;

struct PropertyWatch;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDef;

struct ClassDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableEntry;

struct DBTableEntry;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBIndexItem;

struct DBIndexItem;

extern YYSTYPE yylval;

extern struct Location yylloc;

unsigned int echoOn = 0x1;

void SetEchoOn(unsigned int b)
{
echoOn = b;
}

extern struct Location type_yylloc;

extern struct Location expression_yylloc;

extern struct __ecereNameSpace__ecere__com__Instance * fileInput;

int preprocessor();

int comment();

void TESTTTT()
{
yylloc.end.charPos += yyleng;
yylloc.end.pos += yyleng;
type_yylloc.end.charPos += yyleng;
type_yylloc.end.pos += yyleng;
expression_yylloc.end.charPos += yyleng;
expression_yylloc.end.pos += yyleng;
}

YY_BUFFER_STATE include_stack[30];

struct __ecereNameSpace__ecere__com__Instance * fileStack[30];

char sourceFileStack[30][797];

extern char *  strcpy(char * , const char * );

void SetSomeSourceFileStack(char * fileName, int index)
{
strcpy(sourceFileStack[index], fileName);
}

struct Location locStack[30];

int declModeStack[30];

int include_stack_ptr = 0;

extern int yywrap(void);

static void yyunput(int c, char * buf_ptr);

static int input(void);

int commentCPP();

extern int check_type(void);

extern int defaultDeclMode;

extern int declMode;

extern int structDeclMode;

extern unsigned int inCompiler;

extern int printf(char * , ...);

extern int yyerror(void);

extern void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

int yylex(void)
{
register yy_state_type yy_current_state;
register char * yy_cp, * yy_bp;
register int yy_act;

yylloc.start = yylloc.end;
type_yylloc.start = type_yylloc.end;
expression_yylloc.start = expression_yylloc.end;
if(yy_init)
{
yy_init = 0;
if(!yy_start)
yy_start = 1;
if(!yyin)
yyin = (bsl_stdin());
if(!yyout)
yyout = (bsl_stdout());
if(!yy_current_buffer)
yy_current_buffer = yy_create_buffer(yyin, 16384);
yy_load_buffer_state();
}
while(1)
{
yy_cp = yy_c_buf_p;
*yy_cp = yy_hold_char;
yy_bp = yy_cp;
yy_current_state = yy_start;
yy_match:
do
{
register YY_CHAR yy_c = yy_ec[((unsigned int)(unsigned char)*yy_cp)];

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 720)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
++yy_cp;
}while(yy_base[yy_current_state] != (short)2557);
yy_find_action:
yy_act = yy_accept[yy_current_state];
if(yy_act == 0)
{
yy_cp = yy_last_accepting_cpos;
yy_current_state = yy_last_accepting_state;
yy_act = yy_accept[yy_current_state];
}
yytext = yy_bp;
yyleng = (int)(yy_cp - yy_bp);
yy_hold_char = *yy_cp;
*yy_cp = '\0';
yy_c_buf_p = yy_cp;
;
do_action:
switch(yy_act)
{
case 0:
*yy_cp = yy_hold_char;
yy_cp = yy_last_accepting_cpos;
yy_current_state = yy_last_accepting_state;
goto yy_find_action;
case 1:
TESTTTT();
{
preprocessor();
}
break;
case 2:
TESTTTT();
{
comment();
}
break;
case 3:
TESTTTT();
{
commentCPP();
}
break;
case 4:
TESTTTT();
{
return (AUTO);
}
break;
case 5:
TESTTTT();
{
return (BREAK);
}
break;
case 6:
TESTTTT();
{
return (CASE);
}
break;
case 7:
TESTTTT();
{
return (CHAR);
}
break;
case 8:
TESTTTT();
{
return (CONST);
}
break;
case 9:
TESTTTT();
{
return (CONTINUE);
}
break;
case 10:
TESTTTT();
{
return (DEFAULT);
}
break;
case 11:
TESTTTT();
{
return (DO);
}
break;
case 12:
TESTTTT();
{
return (DOUBLE);
}
break;
case 13:
TESTTTT();
{
return (ELSE);
}
break;
case 14:
TESTTTT();
{
return (ENUM);
}
break;
case 15:
TESTTTT();
{
return (EXTERN);
}
break;
case 16:
TESTTTT();
{
return (FLOAT);
}
break;
case 17:
TESTTTT();
{
return (FOR);
}
break;
case 18:
TESTTTT();
{
return (GOTO);
}
break;
case 19:
TESTTTT();
{
return (IF);
}
break;
case 20:
TESTTTT();
{
return (INT);
}
break;
case 21:
TESTTTT();
{
return (UINT);
}
break;
case 22:
TESTTTT();
{
return (LONG);
}
break;
case 23:
TESTTTT();
{
return (REGISTER);
}
break;
case 24:
TESTTTT();
{
return (RETURN);
}
break;
case 25:
TESTTTT();
{
return (SHORT);
}
break;
case 26:
TESTTTT();
{
return (SIGNED);
}
break;
case 27:
TESTTTT();
{
return (SIGNED);
}
break;
case 28:
TESTTTT();
{
return (SIGNED);
}
break;
case 29:
TESTTTT();
{
return (SIZEOF);
}
break;
case 30:
TESTTTT();
{
return (ALIGNOF);
}
break;
case 31:
TESTTTT();
{
return (STATIC);
}
break;
case 32:
TESTTTT();
{
return (THREAD);
}
break;
case 33:
TESTTTT();
{
return (STRUCT);
}
break;
case 34:
TESTTTT();
{
return (SWITCH);
}
break;
case 35:
TESTTTT();
{
return (TYPEDEF);
}
break;
case 36:
TESTTTT();
{
return (UNION);
}
break;
case 37:
TESTTTT();
{
return (UNSIGNED);
}
break;
case 38:
TESTTTT();
{
return (VOID);
}
break;
case 39:
TESTTTT();
{
return (VOLATILE);
}
break;
case 40:
TESTTTT();
{
return (VOLATILE);
}
break;
case 41:
TESTTTT();
{
return (VOLATILE);
}
break;
case 42:
TESTTTT();
{
return (WHILE);
}
break;
case 43:
TESTTTT();
{
return (PROPERTY);
}
break;
case 44:
TESTTTT();
{
return (SETPROP);
}
break;
case 45:
TESTTTT();
{
return (GETPROP);
}
break;
case 46:
TESTTTT();
{
return (ISPROPSET);
}
break;
case 47:
TESTTTT();
{
return (CLASS);
}
break;
case 48:
TESTTTT();
{
return (THISCLASS);
}
break;
case 49:
TESTTTT();
{
return (VIRTUAL);
}
break;
case 50:
TESTTTT();
{
return (DELETE);
}
break;
case 51:
TESTTTT();
{
return (NEWOP);
}
break;
case 52:
TESTTTT();
{
return (NEW0OP);
}
break;
case 53:
TESTTTT();
{
return (RENEW);
}
break;
case 54:
TESTTTT();
{
return (RENEW0);
}
break;
case 55:
TESTTTT();
{
return (IMPORT);
}
break;
case 56:
TESTTTT();
{
return (DEFINE);
}
break;
case 57:
TESTTTT();
{
return (INT64);
}
break;
case 58:
TESTTTT();
{
return (INT64);
}
break;
case 59:
TESTTTT();
{
return (VALIST);
}
break;
case 60:
TESTTTT();
{
return (VAARG);
}
break;
case 61:
TESTTTT();
{
return (BOOL);
}
break;
case 62:
TESTTTT();
{
return (_BOOL);
}
break;
case 63:
TESTTTT();
{
return (_COMPLEX);
}
break;
case 64:
TESTTTT();
{
return (_IMAGINARY);
}
break;
case 65:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 66:
TESTTTT();
{
return ATTRIB_DEP;
}
break;
case 67:
TESTTTT();
{
return ATTRIB;
}
break;
case 68:
TESTTTT();
{
return __ATTRIB;
}
break;
case 69:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 70:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 71:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 72:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 73:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 74:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 75:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 76:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 77:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 78:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 79:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 80:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 81:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 82:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 83:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 84:
TESTTTT();
{
return (PUBLIC);
}
break;
case 85:
TESTTTT();
{
return (PRIVATE);
}
break;
case 86:
TESTTTT();
{
return (TYPED_OBJECT);
}
break;
case 87:
TESTTTT();
{
return (ANY_OBJECT);
}
break;
case 88:
TESTTTT();
{
return (_INCREF);
}
break;
case 89:
TESTTTT();
{
return (EXTENSION);
}
break;
case 90:
TESTTTT();
{
return (EXTENSION);
}
break;
case 91:
TESTTTT();
{
return (ASM);
}
break;
case 92:
TESTTTT();
{
return (ASM);
}
break;
case 93:
TESTTTT();
{
return (ASM);
}
break;
case 94:
TESTTTT();
{
return (TYPEOF);
}
break;
case 95:
TESTTTT();
{
return (WATCH);
}
break;
case 96:
TESTTTT();
{
return (STOPWATCHING);
}
break;
case 97:
TESTTTT();
{
return (FIREWATCHERS);
}
break;
case 98:
TESTTTT();
{
return (WATCHABLE);
}
break;
case 99:
TESTTTT();
{
return (CLASS_DESIGNER);
}
break;
case 100:
TESTTTT();
{
return (CLASS_NO_EXPANSION);
}
break;
case 101:
TESTTTT();
{
return (CLASS_FIXED);
}
break;
case 102:
TESTTTT();
{
return (CLASS_DEFAULT_PROPERTY);
}
break;
case 103:
TESTTTT();
{
return (PROPERTY_CATEGORY);
}
break;
case 104:
TESTTTT();
{
return (CLASS_DATA);
}
break;
case 105:
TESTTTT();
{
return (CLASS_PROPERTY);
}
break;
case 106:
TESTTTT();
{
return (SUBCLASS);
}
break;
case 107:
TESTTTT();
{
return (NAMESPACE);
}
break;
case 108:
TESTTTT();
{
return (DBTABLE);
}
break;
case 109:
TESTTTT();
{
return (DBFIELD);
}
break;
case 110:
TESTTTT();
{
return (DBINDEX);
}
break;
case 111:
TESTTTT();
{
return (DATABASE_OPEN);
}
break;
case 112:
TESTTTT();
{
return (check_type());
}
break;
case 113:
TESTTTT();
{
return (CONSTANT);
}
break;
case 114:
TESTTTT();
{
return (CONSTANT);
}
break;
case 115:
TESTTTT();
{
return (CONSTANT);
}
break;
case 116:
TESTTTT();
{
return (CONSTANT);
}
break;
case 117:
TESTTTT();
{
return (CONSTANT);
}
break;
case 118:
TESTTTT();
{
return (CONSTANT);
}
break;
case 119:
TESTTTT();
{
return (CONSTANT);
}
break;
case 120:
TESTTTT();
{
return (CONSTANT);
}
break;
case 121:
TESTTTT();
{
return (CONSTANT);
}
break;
case 122:
TESTTTT();
{
return (CONSTANT);
}
break;
case 123:
TESTTTT();
{
return (STRING_LITERAL);
}
break;
case 124:
TESTTTT();
{
return (ELLIPSIS);
}
break;
case 125:
TESTTTT();
{
return (RIGHT_ASSIGN);
}
break;
case 126:
TESTTTT();
{
return (LEFT_ASSIGN);
}
break;
case 127:
TESTTTT();
{
return (ADD_ASSIGN);
}
break;
case 128:
TESTTTT();
{
return (SUB_ASSIGN);
}
break;
case 129:
TESTTTT();
{
return (MUL_ASSIGN);
}
break;
case 130:
TESTTTT();
{
return (DIV_ASSIGN);
}
break;
case 131:
TESTTTT();
{
return (MOD_ASSIGN);
}
break;
case 132:
TESTTTT();
{
return (AND_ASSIGN);
}
break;
case 133:
TESTTTT();
{
return (XOR_ASSIGN);
}
break;
case 134:
TESTTTT();
{
return (OR_ASSIGN);
}
break;
case 135:
TESTTTT();
{
return (RIGHT_OP);
}
break;
case 136:
TESTTTT();
{
return (LEFT_OP);
}
break;
case 137:
TESTTTT();
{
return (INC_OP);
}
break;
case 138:
TESTTTT();
{
return (DEC_OP);
}
break;
case 139:
TESTTTT();
{
return (PTR_OP);
}
break;
case 140:
TESTTTT();
{
return (AND_OP);
}
break;
case 141:
TESTTTT();
{
return (OR_OP);
}
break;
case 142:
TESTTTT();
{
return (LE_OP);
}
break;
case 143:
TESTTTT();
{
return (GE_OP);
}
break;
case 144:
TESTTTT();
{
return (EQ_OP);
}
break;
case 145:
TESTTTT();
{
return (NE_OP);
}
break;
case 146:
TESTTTT();
{
return (';');
}
break;
case 147:
TESTTTT();
{
return ('{');
}
break;
case 148:
TESTTTT();
{
return ('}');
}
break;
case 149:
TESTTTT();
{
return (',');
}
break;
case 150:
TESTTTT();
{
return (':');
}
break;
case 151:
TESTTTT();
{
return ('=');
}
break;
case 152:
TESTTTT();
{
return ('(');
}
break;
case 153:
TESTTTT();
{
return (')');
}
break;
case 154:
TESTTTT();
{
return ('[');
}
break;
case 155:
TESTTTT();
{
return (']');
}
break;
case 156:
TESTTTT();
{
return ('.');
}
break;
case 157:
TESTTTT();
{
return ('&');
}
break;
case 158:
TESTTTT();
{
return ('!');
}
break;
case 159:
TESTTTT();
{
return ('~');
}
break;
case 160:
TESTTTT();
{
return ('-');
}
break;
case 161:
TESTTTT();
{
return ('+');
}
break;
case 162:
TESTTTT();
{
return ('*');
}
break;
case 163:
TESTTTT();
{
return ('/');
}
break;
case 164:
TESTTTT();
{
return ('%');
}
break;
case 165:
TESTTTT();
{
return ('<');
}
break;
case 166:
TESTTTT();
{
return ('>');
}
break;
case 167:
TESTTTT();
{
return ('^');
}
break;
case 168:
TESTTTT();
{
return ('|');
}
break;
case 169:
TESTTTT();
{
return ('?');
}
break;
case 170:
TESTTTT();
{
return ('$');
}
break;
case 178:
{
while(include_stack_ptr && !fileStack[include_stack_ptr - 1])
{
--include_stack_ptr;
defaultDeclMode = declMode = structDeclMode = declModeStack[include_stack_ptr];
}
if(--include_stack_ptr < 0)
{
include_stack_ptr = 0;
return 0;
}
else
{
(__ecereNameSpace__ecere__com__eInstance_DecRef(fileInput), fileInput = 0);
yy_delete_buffer(yy_current_buffer);
fileInput = fileStack[include_stack_ptr];
yylloc = locStack[include_stack_ptr];
type_yylloc = locStack[include_stack_ptr];
expression_yylloc = locStack[include_stack_ptr];
yy_switch_to_buffer(include_stack[include_stack_ptr]);
defaultDeclMode = declMode = structDeclMode = declModeStack[include_stack_ptr];
}
}
break;
case 171:
TESTTTT();
{
yylloc.start = yylloc.end;
type_yylloc.start = type_yylloc.end;
expression_yylloc.start = expression_yylloc.end;
}
break;
case 172:
TESTTTT();
{
yylloc.end.charPos = 1;
yylloc.end.line += yyleng;
yylloc.start = yylloc.end;
type_yylloc.end.charPos = 1;
type_yylloc.end.line += yyleng;
type_yylloc.start = type_yylloc.end;
expression_yylloc.end.charPos = 1;
expression_yylloc.end.line += yyleng;
expression_yylloc.start = expression_yylloc.end;
}
break;
case 173:
TESTTTT();
{
yylloc.start.charPos++;
yylloc.end.charPos = yylloc.start.charPos;
yylloc.start.pos = yylloc.end.pos;
expression_yylloc.start.charPos++;
expression_yylloc.end.charPos = expression_yylloc.start.charPos;
expression_yylloc.start.pos = expression_yylloc.end.pos;
type_yylloc.start.charPos++;
type_yylloc.end.charPos = type_yylloc.start.charPos;
type_yylloc.start.pos = type_yylloc.end.pos;
}
break;
case 174:
TESTTTT();
{
yylloc.start = yylloc.end;
expression_yylloc.start = expression_yylloc.end;
type_yylloc.start = type_yylloc.end;
}
break;
case 175:
TESTTTT();
{
yylloc.start = yylloc.end;
expression_yylloc.start = expression_yylloc.end;
type_yylloc.start = type_yylloc.end;
if(inCompiler)
printf("lexer error: invalid char 0x%X at line %d, col %d\n", (unsigned char)yytext[0], yylloc.start.line, yylloc.start.charPos);
yyerror();
}
break;
case 176:
TESTTTT();
(void)fwrite(yytext, yyleng, 1, yyout);
break;
case 177:
{
int yy_amount_of_matched_text = (int)(yy_cp - yytext) - 1;

*yy_cp = yy_hold_char;
if((*yy_current_buffer).yy_buffer_status == 0)
{
yy_n_chars = (*yy_current_buffer).yy_n_chars;
(*yy_current_buffer).yy_input_file = yyin;
(*yy_current_buffer).yy_buffer_status = 1;
}
if(yy_c_buf_p <= &(*yy_current_buffer).yy_ch_buf[yy_n_chars])
{
yy_state_type yy_next_state;

yy_c_buf_p = yytext + yy_amount_of_matched_text;
yy_current_state = yy_get_previous_state();
yy_next_state = yy_try_NUL_trans(yy_current_state);
yy_bp = yytext + 0;
if(yy_next_state)
{
yy_cp = ++yy_c_buf_p;
yy_current_state = yy_next_state;
goto yy_match;
}
else
{
yy_cp = yy_c_buf_p;
goto yy_find_action;
}
}
else
switch(yy_get_next_buffer())
{
case 1:
{
yy_did_buffer_switch_on_eof = 0;
if(yywrap())
{
yy_c_buf_p = yytext + 0;
yy_act = (177 + ((yy_start - 1) / 2) + 1);
goto do_action;
}
else
{
if(!yy_did_buffer_switch_on_eof)
yyrestart(yyin);
}
break;
}
case 0:
yy_c_buf_p = yytext + yy_amount_of_matched_text;
yy_current_state = yy_get_previous_state();
yy_cp = yy_c_buf_p;
yy_bp = yytext + 0;
goto yy_match;
case 2:
yy_c_buf_p = &(*yy_current_buffer).yy_ch_buf[yy_n_chars];
yy_current_state = yy_get_previous_state();
yy_cp = yy_c_buf_p;
yy_bp = yytext + 0;
goto yy_find_action;
}
break;
}
default:
yy_fatal_error("fatal flex scanner internal error--no action found");
}
}
}

int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__File;

static int yy_get_next_buffer()
{
register char * dest = (*yy_current_buffer).yy_ch_buf;
register char * source = yytext;
register int number_to_move, i;
int ret_val;

if(yy_c_buf_p > &(*yy_current_buffer).yy_ch_buf[yy_n_chars + 1])
yy_fatal_error("fatal flex scanner internal error--end of buffer missed");
if((*yy_current_buffer).yy_fill_buffer == 0)
{
if(yy_c_buf_p - yytext - 0 == 1)
{
return 1;
}
else
{
return 2;
}
}
number_to_move = (int)(yy_c_buf_p - yytext) - 1;
for(i = 0; i < number_to_move; ++i)
*(dest++) = *(source++);
if((*yy_current_buffer).yy_buffer_status == 2)
(*yy_current_buffer).yy_n_chars = yy_n_chars = 0;
else
{
int num_to_read = (*yy_current_buffer).yy_buf_size - number_to_move - 1;

while(num_to_read <= 0)
{
YY_BUFFER_STATE b = yy_current_buffer;
int yy_c_buf_p_offset = (int)(yy_c_buf_p - (*b).yy_ch_buf);

if((*b).yy_is_our_buffer)
{
int new_size = (*b).yy_buf_size * 2;

if(new_size <= 0)
(*b).yy_buf_size += (*b).yy_buf_size / 8;
else
(*b).yy_buf_size *= 2;
(*b).yy_ch_buf = (char *)yy_flex_realloc((void *)(*b).yy_ch_buf, (*b).yy_buf_size + 2);
}
else
(*b).yy_ch_buf = 0;
if(!(*b).yy_ch_buf)
yy_fatal_error("fatal error - scanner input buffer overflow");
yy_c_buf_p = &(*b).yy_ch_buf[yy_c_buf_p_offset];
num_to_read = (*yy_current_buffer).yy_buf_size - number_to_move - 1;
}
if(num_to_read > 8192)
num_to_read = 8192;
yy_n_chars = ((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = fileInput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(fileInput, (&(*yy_current_buffer).yy_ch_buf[number_to_move]), 1, num_to_read);
(*yy_current_buffer).yy_n_chars = yy_n_chars;
}
if(yy_n_chars == 0)
{
if(number_to_move == 0)
{
ret_val = 1;
yyrestart(yyin);
}
else
{
ret_val = 2;
(*yy_current_buffer).yy_buffer_status = 2;
}
}
else
ret_val = 0;
yy_n_chars += number_to_move;
(*yy_current_buffer).yy_ch_buf[yy_n_chars] = (char)0;
(*yy_current_buffer).yy_ch_buf[yy_n_chars + 1] = (char)0;
yytext = &(*yy_current_buffer).yy_ch_buf[0];
return ret_val;
}

static yy_state_type yy_get_previous_state()
{
register yy_state_type yy_current_state;
register char * yy_cp;

yy_current_state = yy_start;
for(yy_cp = yytext + 0; yy_cp < yy_c_buf_p; ++yy_cp)
{
register YY_CHAR yy_c = (*yy_cp ? yy_ec[((unsigned int)(unsigned char)*yy_cp)] : (unsigned char)1);

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 720)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
}
return yy_current_state;
}

static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state)
{
register int yy_is_jam;
register char * yy_cp = yy_c_buf_p;
register YY_CHAR yy_c = (unsigned char)1;

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 720)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
yy_is_jam = (yy_current_state == 719);
return yy_is_jam ? 0 : yy_current_state;
}

static void yyunput(int c, register char * yy_bp)
{
register char * yy_cp = yy_c_buf_p;

*yy_cp = yy_hold_char;
if(yy_cp < (*yy_current_buffer).yy_ch_buf + 2)
{
register int number_to_move = yy_n_chars + 2;
register char * dest = &(*yy_current_buffer).yy_ch_buf[(*yy_current_buffer).yy_buf_size + 2];
register char * source = &(*yy_current_buffer).yy_ch_buf[number_to_move];

while(source > (*yy_current_buffer).yy_ch_buf)
*--dest = *--source;
yy_cp += (int)(dest - source);
yy_bp += (int)(dest - source);
(*yy_current_buffer).yy_n_chars = yy_n_chars = (*yy_current_buffer).yy_buf_size;
if(yy_cp < (*yy_current_buffer).yy_ch_buf + 2)
yy_fatal_error("flex scanner push-back overflow");
}
*--yy_cp = (char)c;
yytext = yy_bp;
yy_hold_char = *yy_cp;
yy_c_buf_p = yy_cp;
}

static int input()
{
int c;

*yy_c_buf_p = yy_hold_char;
if(*yy_c_buf_p == (char)0)
{
if(yy_c_buf_p < &(*yy_current_buffer).yy_ch_buf[yy_n_chars])
*yy_c_buf_p = '\0';
else
{
int offset = yy_c_buf_p - yytext;

++yy_c_buf_p;
switch(yy_get_next_buffer())
{
case 2:
yyrestart(yyin);
case 1:
{
if(yywrap())
return (-1);
if(!yy_did_buffer_switch_on_eof)
yyrestart(yyin);
return input();
}
case 0:
yy_c_buf_p = yytext + offset;
break;
}
}
}
c = *(unsigned char *)yy_c_buf_p;
*yy_c_buf_p = '\0';
yy_hold_char = *++yy_c_buf_p;
return c;
}

void yyrestart(FILE * input_file)
{
if(!yy_current_buffer)
yy_current_buffer = yy_create_buffer(yyin, 16384);
yy_init_buffer(yy_current_buffer, input_file);
yy_load_buffer_state();
}

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer)
{
if(yy_current_buffer == new_buffer)
return ;
if(yy_current_buffer)
{
*yy_c_buf_p = yy_hold_char;
(*yy_current_buffer).yy_buf_pos = yy_c_buf_p;
(*yy_current_buffer).yy_n_chars = yy_n_chars;
}
yy_current_buffer = new_buffer;
yy_load_buffer_state();
yy_did_buffer_switch_on_eof = 1;
}

void yy_load_buffer_state(void)
{
yy_n_chars = (*yy_current_buffer).yy_n_chars;
yytext = yy_c_buf_p = (*yy_current_buffer).yy_buf_pos;
yyin = (*yy_current_buffer).yy_input_file;
yy_hold_char = *yy_c_buf_p;
}

YY_BUFFER_STATE yy_create_buffer(FILE * file, int size)
{
YY_BUFFER_STATE b;

b = (YY_BUFFER_STATE)yy_flex_alloc(sizeof(struct yy_buffer_state));
if(!b)
yy_fatal_error("out of dynamic memory in yy_create_buffer()");
(*b).yy_buf_size = size;
(*b).yy_ch_buf = (char *)yy_flex_alloc((*b).yy_buf_size + 2);
if(!(*b).yy_ch_buf)
yy_fatal_error("out of dynamic memory in yy_create_buffer()");
(*b).yy_is_our_buffer = 1;
yy_init_buffer(b, file);
return b;
}

void yy_delete_buffer(YY_BUFFER_STATE b)
{
if(!b)
return ;
if(b == yy_current_buffer)
yy_current_buffer = (YY_BUFFER_STATE)0;
if((*b).yy_is_our_buffer)
yy_flex_free((void *)(*b).yy_ch_buf);
yy_flex_free((void *)b);
}

void yy_init_buffer(YY_BUFFER_STATE b, FILE * file)
{
yy_flush_buffer(b);
(*b).yy_input_file = file;
(*b).yy_fill_buffer = 1;
(*b).yy_is_interactive = 0;
}

void yy_flush_buffer(YY_BUFFER_STATE b)
{
if(!b)
return ;
(*b).yy_n_chars = 0;
(*b).yy_ch_buf[0] = (char)0;
(*b).yy_ch_buf[1] = (char)0;
(*b).yy_buf_pos = &(*b).yy_ch_buf[0];
(*b).yy_at_bol = 1;
(*b).yy_buffer_status = 0;
if(b == yy_current_buffer)
yy_load_buffer_state();
}

YY_BUFFER_STATE yy_scan_buffer(char * base, yy_size_t size)
{
YY_BUFFER_STATE b;

if(size < 2 || base[size - 2] != (char)0 || base[size - 1] != (char)0)
return 0;
b = (YY_BUFFER_STATE)yy_flex_alloc(sizeof(struct yy_buffer_state));
if(!b)
yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
(*b).yy_buf_size = size - 2;
(*b).yy_buf_pos = (*b).yy_ch_buf = base;
(*b).yy_is_our_buffer = 0;
(*b).yy_input_file = 0;
(*b).yy_n_chars = (*b).yy_buf_size;
(*b).yy_is_interactive = 0;
(*b).yy_at_bol = 1;
(*b).yy_fill_buffer = 0;
(*b).yy_buffer_status = 0;
yy_switch_to_buffer(b);
return b;
}

YY_BUFFER_STATE yy_scan_string(const char * yy_str)
{
int len;

for(len = 0; yy_str[len]; ++len)
;
return yy_scan_bytes(yy_str, len);
}

YY_BUFFER_STATE yy_scan_bytes(const char * bytes, int len)
{
YY_BUFFER_STATE b;
char * buf;
yy_size_t n;
int i;

n = len + 2;
buf = (char *)yy_flex_alloc(n);
if(!buf)
yy_fatal_error("out of dynamic memory in yy_scan_bytes()");
for(i = 0; i < len; ++i)
buf[i] = bytes[i];
buf[len] = buf[len + 1] = (char)0;
b = yy_scan_buffer(buf, n);
if(!b)
yy_fatal_error("bad buffer in yy_scan_bytes()");
(*b).yy_is_our_buffer = 1;
return b;
}

static void yy_fatal_error(const char msg[])
{
(void)fprintf((bsl_stderr()), "%s\n", msg);
exit(2);
}

static void * yy_flex_alloc(yy_size_t size)
{
return (void *)malloc(size);
}

static void * yy_flex_realloc(void * ptr, yy_size_t size)
{
return (void *)realloc((char *)ptr, size);
}

static void yy_flex_free(void * ptr)
{
free(ptr);
}

yywrap()
{
return (1);
}

int comment()
{
int c, last = 0;

for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
else
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
if(c == '/' && last == '*')
break;
last = c;
}
yylloc.start = yylloc.end;
return 0;
}

int commentCPP()
{
int c, last = 0;

for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
break;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
else
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
last = c;
}
yylloc.start = yylloc.end;
return 0;
}

extern int __ecereNameSpace__ecere__sys__GetValue(char * *  buffer);

extern unsigned int __ecereNameSpace__ecere__sys__GetString(char * *  buffer, char *  string, int max);

extern char *  __ecereNameSpace__ecere__sys__GetExtension(char *  string, char *  output);

extern int strcmp(const char * , const char * );

extern int GetIncludeFileID(char *  includeFile);

extern char *  __ecereNameSpace__ecere__sys__TrimLSpaces(char *  string, char *  output);

extern int strncmp(const char * , const char * , size_t n);

extern void *  memmove(void * , const void * , size_t size);

extern size_t strlen(const char * );

extern char *  strncpy(char * , const char * , size_t n);

extern char *  __ecereNameSpace__ecere__GetTranslatedString(char * name, char *  string, char *  stringAndContext);

extern int FindIncludeFileID(char *  includeFile);

extern struct __ecereNameSpace__ecere__com__Instance * OpenIncludeFile(char *  includeFile);

int preprocessor()
{
int c, last = 0;
int count = 0;
char line[1024];

line[0] = '\0';
for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
if(last != '\\')
{
char * pointer = line + 1;
int lineNumber;

line[count] = (char)0;
lineNumber = __ecereNameSpace__ecere__sys__GetValue(&pointer);
if(lineNumber)
{
char fileName[797];
int inOut;

fileName[0] = (char)0;
__ecereNameSpace__ecere__sys__GetString(&pointer, fileName, (797));
inOut = __ecereNameSpace__ecere__sys__GetValue(&pointer);
if(inOut == 1)
{
char extension[17];

defaultDeclMode = declModeStack[include_stack_ptr] = declMode;
__ecereNameSpace__ecere__sys__GetExtension(fileName, extension);
if(!strcmp(extension, "c") || !strcmp(extension, "h"))
declMode = defaultDeclMode = structDeclMode = 0;
fileStack[include_stack_ptr] = (((void *)0));
include_stack_ptr++;
}
else if(inOut == 2)
{
include_stack_ptr--;
defaultDeclMode = declMode = structDeclMode = declModeStack[include_stack_ptr];
}
yylloc.end.charPos = 1;
yylloc.end.line = lineNumber;
if(include_stack_ptr > 0 || (lineNumber && fileName[0]))
yylloc.end.included = GetIncludeFileID(fileName);
else
yylloc.end.included = 0;
}
break;
}
count = 0;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
line[count++] = c;
}
else
{
yylloc.end.pos++;
if(c != '\r')
{
yylloc.end.charPos++;
line[count++] = c;
}
}
last = c;
}
yylloc.start = yylloc.end;
line[count] = (char)0;
__ecereNameSpace__ecere__sys__TrimLSpaces(line, line);
for(c = 0; line[c] && line[c] != ' '; c++)
;
if(!strncmp(line, "include", c))
{
char includeFile[797] = "";

memmove(line, line + c, strlen(line + c) + 1);
__ecereNameSpace__ecere__sys__TrimLSpaces(line, line);
if(line[0] == '\"')
{
for(c = 1; line[c]; c++)
{
if(line[c] == '\"')
{
strncpy(includeFile, line + 1, c - 1);
includeFile[c - 1] = '\0';
break;
}
}
}
else if(line[0] == '<')
{
for(c = 1; line[c]; c++)
if(line[c] == '>')
{
strncpy(includeFile, line + 1, c - 1);
includeFile[c - 1] = '\0';
break;
}
}
if(include_stack_ptr >= (30))
{
fprintf((bsl_stderr()), __ecereNameSpace__ecere__GetTranslatedString("ec", "Includes nested too deeply", (((void *)0))));
exit(1);
}
if(inCompiler || !FindIncludeFileID(includeFile))
{
struct __ecereNameSpace__ecere__com__Instance * file = OpenIncludeFile(includeFile);

if(file)
{
char extension[17];

fileStack[include_stack_ptr] = fileInput;
locStack[include_stack_ptr] = yylloc;
defaultDeclMode = declModeStack[include_stack_ptr] = declMode;
include_stack[include_stack_ptr++] = yy_current_buffer;
yylloc.start.charPos = yylloc.end.charPos = 1;
yylloc.start.line = yylloc.end.line = 1;
yylloc.start.pos = yylloc.end.pos = 0;
yylloc.start.included = yylloc.end.included = GetIncludeFileID(includeFile);
__ecereNameSpace__ecere__sys__GetExtension(includeFile, extension);
if(!strcmp(extension, "c") || !strcmp(extension, "h"))
declMode = defaultDeclMode = structDeclMode = 0;
fileInput = file;
yy_switch_to_buffer(yy_create_buffer(fileInput, 16384));
yy_start = 1 + 2 * (0);
}
else
printf("");
}
}
return 0;
}

void resetScanner()
{
yy_flush_buffer(yy_current_buffer);
yylloc.start.charPos = yylloc.end.charPos = 1;
yylloc.start.line = yylloc.end.line = 1;
yylloc.start.pos = yylloc.end.pos = 0;
yylloc.start.included = yylloc.end.included = 0;
expression_yylloc.start.charPos = expression_yylloc.end.charPos = 1;
expression_yylloc.start.line = expression_yylloc.end.line = 1;
expression_yylloc.start.pos = expression_yylloc.end.pos = 0;
expression_yylloc.start.included = expression_yylloc.end.included = 0;
type_yylloc.start.charPos = type_yylloc.end.charPos = 1;
type_yylloc.start.line = type_yylloc.end.line = 1;
type_yylloc.start.pos = type_yylloc.end.pos = 0;
type_yylloc.start.included = type_yylloc.end.included = 0;
include_stack_ptr = 0;
}

void resetScannerPos(struct CodePosition * pos)
{
yy_flush_buffer(yy_current_buffer);
yylloc.start = yylloc.end = *pos;
type_yylloc.start = type_yylloc.end = *pos;
expression_yylloc.start = expression_yylloc.end = *pos;
}

struct LexerBackup
{
struct Location yylloc;
struct Location type_yylloc;
struct Location expression_yylloc;
int declMode;
int defaultDeclMode;
struct __ecereNameSpace__ecere__com__Instance * fileInput;
YY_BUFFER_STATE include_stack[30];
struct __ecereNameSpace__ecere__com__Instance * fileStack[30];
char sourceFileStack[30][797];
struct Location locStack[30];
int declModeStack[30];
int include_stack_ptr;
YY_BUFFER_STATE buffer;
int yy_n_chars;
char * yytext;
char * yy_c_buf_p;
FILE * yyin;
char yy_hold_char;
int yychar;
int yy_init;
int yy_start;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_LexerBackup;

extern void *  memcpy(void * , const void * , size_t size);

extern int yychar;

extern void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

struct __ecereNameSpace__ecere__com__Instance * pushLexer()
{
struct __ecereNameSpace__ecere__com__Instance * backup = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_LexerBackup);

((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yylloc = yylloc;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->type_yylloc = type_yylloc;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->expression_yylloc = expression_yylloc;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->fileInput = fileInput;
memcpy(((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->include_stack, include_stack, sizeof (include_stack));
memcpy(((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->fileStack, fileStack, sizeof (fileStack));
memcpy(((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->sourceFileStack, sourceFileStack, sizeof (sourceFileStack));
memcpy(((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->locStack, locStack, sizeof (locStack));
memcpy(((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->declModeStack, declModeStack, sizeof (declModeStack));
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->include_stack_ptr = include_stack_ptr;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->defaultDeclMode = defaultDeclMode;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->declMode = declMode;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->buffer = yy_current_buffer;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_n_chars = yy_n_chars;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yytext = yytext;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_c_buf_p = yy_c_buf_p;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yyin = yyin;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_hold_char = yy_hold_char;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yychar = yychar;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_init = yy_init;
((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_start = yy_start;
yy_init = 1;
yy_current_buffer = 0;
yylloc.start.charPos = yylloc.end.charPos = 1;
yylloc.start.line = yylloc.end.line = 1;
yylloc.start.pos = yylloc.end.pos = 0;
yylloc.start.included = yylloc.end.included = 0;
expression_yylloc.start.charPos = expression_yylloc.end.charPos = 1;
expression_yylloc.start.line = expression_yylloc.end.line = 1;
expression_yylloc.start.pos = expression_yylloc.end.pos = 0;
expression_yylloc.start.included = expression_yylloc.end.included = 0;
type_yylloc.start.charPos = type_yylloc.end.charPos = 1;
type_yylloc.start.line = type_yylloc.end.line = 1;
type_yylloc.start.pos = type_yylloc.end.pos = 0;
type_yylloc.start.included = type_yylloc.end.included = 0;
include_stack_ptr = 0;
return backup;
}

void popLexer(struct __ecereNameSpace__ecere__com__Instance * backup)
{
yylloc = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yylloc;
type_yylloc = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->type_yylloc;
expression_yylloc = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->expression_yylloc;
fileInput = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->fileInput;
memcpy(include_stack, ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->include_stack, sizeof (include_stack));
memcpy(fileStack, ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->fileStack, sizeof (fileStack));
memcpy(sourceFileStack, ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->sourceFileStack, sizeof (sourceFileStack));
memcpy(locStack, ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->locStack, sizeof (locStack));
memcpy(declModeStack, ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->declModeStack, sizeof (declModeStack));
include_stack_ptr = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->include_stack_ptr;
defaultDeclMode = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->defaultDeclMode;
declMode = structDeclMode = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->declMode;
yy_current_buffer = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->buffer;
yy_n_chars = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_n_chars;
yytext = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yytext;
yy_c_buf_p = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_c_buf_p;
yyin = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yyin;
yy_hold_char = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_hold_char;
yychar = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yychar;
yy_init = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_init;
yy_start = ((struct LexerBackup *)(((char *)backup + __ecereClass_LexerBackup->offset)))->yy_start;
(__ecereNameSpace__ecere__com__eInstance_DecRef(backup), backup = 0);
}

extern struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, char *  name, char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__NameSpace;

struct __ecereNameSpace__ecere__com__NameSpace
{
char *  name;
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;
struct __ecereNameSpace__ecere__com__NameSpace *  left;
struct __ecereNameSpace__ecere__com__NameSpace *  right;
int depth;
struct __ecereNameSpace__ecere__com__NameSpace *  parent;
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;
struct __ecereNameSpace__ecere__sys__BinaryTree classes;
struct __ecereNameSpace__ecere__sys__BinaryTree defines;
struct __ecereNameSpace__ecere__sys__BinaryTree functions;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

struct __ecereNameSpace__ecere__com__Module
{
struct __ecereNameSpace__ecere__com__Instance * application;
struct __ecereNameSpace__ecere__sys__OldList classes;
struct __ecereNameSpace__ecere__sys__OldList defines;
struct __ecereNameSpace__ecere__sys__OldList functions;
struct __ecereNameSpace__ecere__sys__OldList modules;
struct __ecereNameSpace__ecere__com__Instance * prev;
struct __ecereNameSpace__ecere__com__Instance * next;
char *  name;
void *  library;
void *  Unload;
int importType;
int origImportType;
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

extern struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__GlobalFunction;

struct __ecereNameSpace__ecere__com__GlobalFunction;

extern struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(char *  name, char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

void __ecereRegisterModule_lexer(struct __ecereNameSpace__ecere__com__Instance * module)
{
struct __ecereNameSpace__ecere__com__Class * class;

class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "yy_buffer_state", 0, sizeof(struct yy_buffer_state), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_yy_buffer_state = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_input_file", "void *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_ch_buf", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buf_pos", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buf_size", "uint", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_n_chars", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_is_our_buffer", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_is_interactive", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_at_bol", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_fill_buffer", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buffer_status", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetEchoOn", "void SetEchoOn(bool b)", SetEchoOn, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("TESTTTT", "void TESTTTT(void)", TESTTTT, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetSomeSourceFileStack", "void SetSomeSourceFileStack(char * fileName, int index)", SetSomeSourceFileStack, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("yywrap", "int yywrap(void)", yywrap, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("comment", "int comment(void)", comment, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("commentCPP", "int commentCPP(void)", commentCPP, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("preprocessor", "int preprocessor(void)", preprocessor, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("resetScanner", "void resetScanner(void)", resetScanner, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("resetScannerPos", "void resetScannerPos(CodePosition pos)", resetScannerPos, module, 2);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "LexerBackup", 0, sizeof(struct LexerBackup), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_LexerBackup = class;
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("pushLexer", "LexerBackup pushLexer(void)", pushLexer, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("popLexer", "void popLexer(LexerBackup backup)", popLexer, module, 2);
}

void __ecereUnregisterModule_lexer(struct __ecereNameSpace__ecere__com__Instance * module)
{

}

