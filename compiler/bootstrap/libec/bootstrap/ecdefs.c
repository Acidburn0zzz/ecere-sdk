/* Code generated from eC source file: ecdefs.ec */
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
#define structSize_Module                 (_64BIT ? 560 : 300)
#define structSize_BinaryTree             (_64BIT ? 32 : 16)
#define structSize_OldList                (_64BIT ? 32 : 20)

#define structSize_ExpCall                (_64BIT ? 48 : 40)
#define structSize_ExpMember              (_64BIT ? 24 : 16)
#define structSize_OpTable                (_64BIT ? 280 : 140)

extern void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

extern void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

extern void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

struct __ecereNameSpace__ecere__sys__BTNode;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BTNode;

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

struct CodePosition
{
int line, charPos, pos;
int included;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_CodePosition;

struct Location
{
struct CodePosition start, end;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Location;

struct Attrib
{
struct Location loc;
int type;
struct __ecereNameSpace__ecere__sys__OldList * attribs;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Attrib;

struct ExtDecl
{
struct Location loc;
int type;
union
{
char * s;
struct Attrib * attr;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExtDecl;

struct ClassDefinition
{
struct ClassDefinition * prev, * next;
struct Location loc;
struct Specifier * _class;
struct __ecereNameSpace__ecere__sys__OldList * baseSpecs;
struct __ecereNameSpace__ecere__sys__OldList * definitions;
struct Symbol * symbol;
struct Location blockStart;
struct Location nameLoc;
int endid;
int declMode;
unsigned int deleteWatchable;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDefinition;

struct Context
{
struct Context * parent;
struct __ecereNameSpace__ecere__sys__BinaryTree types;
struct __ecereNameSpace__ecere__sys__BinaryTree classes;
struct __ecereNameSpace__ecere__sys__BinaryTree symbols;
struct __ecereNameSpace__ecere__sys__BinaryTree structSymbols;
int nextID;
int simpleID;
struct __ecereNameSpace__ecere__sys__BinaryTree templateTypes;
struct ClassDefinition * classDef;
unsigned int templateTypesOnly;
unsigned int hasNameSpace;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Context;

struct Instantiation
{
struct Instantiation * prev, * next;
struct Location loc;
struct Specifier * _class;
struct Expression * exp;
struct __ecereNameSpace__ecere__sys__OldList * members;
struct Symbol * symbol;
unsigned int fullSet;
unsigned int isConstant;
unsigned char * data;
struct Location nameLoc, insideLoc;
unsigned int built;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Instantiation;

struct Declaration
{
struct Declaration * prev, * next;
struct Location loc;
int type;
union
{
struct
{
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct __ecereNameSpace__ecere__sys__OldList * declarators;
} __attribute__ ((gcc_struct));
struct Instantiation * inst;
struct
{
struct Identifier * id;
struct Expression * exp;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
struct Specifier * extStorage;
struct Symbol * symbol;
int declMode;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declaration;

struct Statement
{
struct Statement * prev, * next;
struct Location loc;
int type;
union
{
struct __ecereNameSpace__ecere__sys__OldList * expressions;
struct
{
struct Identifier * id;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) labeled;
struct
{
struct Expression * exp;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) caseStmt;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * declarations;
struct __ecereNameSpace__ecere__sys__OldList * statements;
struct Context * context;
unsigned int isSwitch;
} __attribute__ ((gcc_struct)) compound;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct Statement * stmt;
struct Statement * elseStmt;
} __attribute__ ((gcc_struct)) ifStmt;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) switchStmt;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) whileStmt;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) doWhile;
struct
{
struct Statement * init;
struct Statement * check;
struct __ecereNameSpace__ecere__sys__OldList * increment;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) forStmt;
struct
{
struct Identifier * id;
} __attribute__ ((gcc_struct)) gotoStmt;
struct
{
struct Specifier * spec;
char * statements;
struct __ecereNameSpace__ecere__sys__OldList * inputFields;
struct __ecereNameSpace__ecere__sys__OldList * outputFields;
struct __ecereNameSpace__ecere__sys__OldList * clobberedFields;
} __attribute__ ((gcc_struct)) asmStmt;
struct
{
struct Expression * watcher, * object;
struct __ecereNameSpace__ecere__sys__OldList * watches;
} __attribute__ ((gcc_struct)) _watch;
struct
{
struct Identifier * id;
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct __ecereNameSpace__ecere__sys__OldList * filter;
struct Statement * stmt;
} __attribute__ ((gcc_struct)) forEachStmt;
struct Declaration * decl;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Statement;

struct TypeName
{
struct TypeName * prev, * next;
struct Location loc;
struct __ecereNameSpace__ecere__sys__OldList * qualifiers;
struct Declarator * declarator;
int classObjectType;
struct Expression * bitCount;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TypeName;

struct Initializer
{
struct Initializer * prev, * next;
struct Location loc;
int type;
union
{
struct Expression * exp;
struct __ecereNameSpace__ecere__sys__OldList * list;
} __attribute__ ((gcc_struct));
unsigned int isConstant;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Initializer;

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

struct Expression
{
struct Expression * prev, * next;
struct Location loc;
int type;
union
{
struct
{
char * constant;
struct Identifier * identifier;
} __attribute__ ((gcc_struct));
struct Statement * compound;
struct Instantiation * instance;
struct
{
char * string;
unsigned int intlString;
} __attribute__ ((gcc_struct));
struct __ecereNameSpace__ecere__sys__OldList * list;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct Declarator * decl;
} __attribute__ ((gcc_struct)) _classExp;
struct
{
struct Identifier * id;
} __attribute__ ((gcc_struct)) classData;
struct
{
struct Expression * exp;
struct __ecereNameSpace__ecere__sys__OldList * arguments;
struct Location argLoc;
} __attribute__ ((gcc_struct)) call;
struct
{
struct Expression * exp;
struct __ecereNameSpace__ecere__sys__OldList * index;
} __attribute__ ((gcc_struct)) index;
struct
{
struct Expression * exp;
struct Identifier * member;
int memberType;
unsigned int thisPtr;
} __attribute__ ((gcc_struct)) member;
struct
{
int op;
struct Expression * exp1, * exp2;
} __attribute__ ((gcc_struct)) op;
struct TypeName * typeName;
struct Specifier * _class;
struct
{
struct TypeName * typeName;
struct Expression * exp;
} __attribute__ ((gcc_struct)) cast;
struct
{
struct Expression * cond;
struct __ecereNameSpace__ecere__sys__OldList * exp;
struct Expression * elseExp;
} __attribute__ ((gcc_struct)) cond;
struct
{
struct TypeName * typeName;
struct Expression * size;
} __attribute__ ((gcc_struct)) _new;
struct
{
struct TypeName * typeName;
struct Expression * size;
struct Expression * exp;
} __attribute__ ((gcc_struct)) _renew;
struct
{
char * table;
struct Identifier * id;
} __attribute__ ((gcc_struct)) db;
struct
{
struct Expression * ds;
struct Expression * name;
} __attribute__ ((gcc_struct)) dbopen;
struct
{
struct TypeName * typeName;
struct Initializer * initializer;
} __attribute__ ((gcc_struct)) initializer;
struct
{
struct Expression * exp;
struct TypeName * typeName;
} __attribute__ ((gcc_struct)) vaArg;
} __attribute__ ((gcc_struct));
unsigned int debugValue;
struct __ecereNameSpace__ecere__com__DataValue val;
uint64 address;
unsigned int hasAddress;
struct Type * expType;
struct Type * destType;
unsigned int usage;
int tempCount;
unsigned int byReference;
unsigned int isConstant;
unsigned int addedThis;
unsigned int needCast;
unsigned int thisPtr;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Expression;

struct TemplateDatatype
{
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct Declarator * decl;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateDatatype;

struct TemplateArgument
{
struct TemplateArgument * prev, * next;
struct Location loc;
struct Identifier * name;
int type;
union
{
struct Expression * expression;
struct Identifier * identifier;
struct TemplateDatatype * templateDatatype;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateArgument;

struct TemplateParameter
{
struct TemplateParameter * prev, * next;
struct Location loc;
int type;
struct Identifier * identifier;
union
{
struct TemplateDatatype * dataType;
int memberType;
} __attribute__ ((gcc_struct));
struct TemplateArgument * defaultArgument;
char * dataTypeString;
struct Type * baseType;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateParameter;

struct Specifier
{
struct Specifier * prev, * next;
struct Location loc;
int type;
union
{
int specifier;
struct
{
struct ExtDecl * extDecl;
char * name;
struct Symbol * symbol;
struct __ecereNameSpace__ecere__sys__OldList * templateArgs;
} __attribute__ ((gcc_struct));
struct
{
struct Identifier * id;
struct __ecereNameSpace__ecere__sys__OldList * list;
struct __ecereNameSpace__ecere__sys__OldList * baseSpecs;
struct __ecereNameSpace__ecere__sys__OldList * definitions;
unsigned int addNameSpace;
struct Context * ctx;
struct ExtDecl * extDeclStruct;
} __attribute__ ((gcc_struct));
struct Expression * expression;
struct Specifier * _class;
struct TemplateParameter * templateParameter;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Specifier;

struct Identifier
{
struct Identifier * prev, * next;
struct Location loc;
struct Symbol * classSym;
struct Specifier * _class;
char * string;
struct Identifier * badID;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Identifier;

struct Pointer
{
struct Pointer * prev, * next;
struct Location loc;
struct __ecereNameSpace__ecere__sys__OldList * qualifiers;
struct Pointer * pointer;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Pointer;

struct Declarator
{
struct Declarator * prev, * next;
struct Location loc;
int type;
struct Symbol * symbol;
struct Declarator * declarator;
union
{
struct Identifier * identifier;
struct
{
struct Expression * exp;
struct Expression * posExp;
struct Attrib * attrib;
} __attribute__ ((gcc_struct)) structDecl;
struct
{
struct Expression * exp;
struct Specifier * enumClass;
} __attribute__ ((gcc_struct)) array;
struct
{
struct __ecereNameSpace__ecere__sys__OldList * parameters;
} __attribute__ ((gcc_struct)) function;
struct
{
struct Pointer * pointer;
} __attribute__ ((gcc_struct)) pointer;
struct
{
struct ExtDecl * extended;
} __attribute__ ((gcc_struct)) extended;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declarator;

struct FunctionDefinition
{
struct FunctionDefinition * prev, * next;
struct Location loc;
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct Declarator * declarator;
struct __ecereNameSpace__ecere__sys__OldList * declarations;
struct Statement * body;
struct __ecereNameSpace__ecere__com__Class * _class;
struct __ecereNameSpace__ecere__sys__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
int tempCount;
unsigned int propertyNoThis;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_FunctionDefinition;

struct DBTableDef
{
char * name;
struct Symbol * symbol;
struct __ecereNameSpace__ecere__sys__OldList * definitions;
int declMode;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableDef;

struct External
{
struct External * prev, * next;
struct Location loc;
int type;
struct Symbol * symbol;
union
{
struct FunctionDefinition * function;
struct ClassDefinition * _class;
struct Declaration * declaration;
char * importString;
struct Identifier * id;
struct DBTableDef * table;
} __attribute__ ((gcc_struct));
int importType;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_External;

struct ModuleImport
{
struct ModuleImport * prev, * next;
char * name;
struct __ecereNameSpace__ecere__sys__OldList classes;
struct __ecereNameSpace__ecere__sys__OldList functions;
int importType;
int importAccess;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ModuleImport;

struct ClassImport
{
struct ClassImport * prev, * next;
char * name;
struct __ecereNameSpace__ecere__sys__OldList methods;
struct __ecereNameSpace__ecere__sys__OldList properties;
unsigned int itself;
unsigned int isRemote;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassImport;

struct Symbol
{
char * string;
struct Symbol * parent, * left, * right;
int depth;
struct Type * type;
union
{
struct __ecereNameSpace__ecere__com__Method * method;
struct __ecereNameSpace__ecere__com__Property * _property;
struct __ecereNameSpace__ecere__com__Class * registered;
} __attribute__ ((gcc_struct));
int id, idCode;
union
{
struct
{
struct External * pointerExternal;
struct External * structExternal;
} __attribute__ ((gcc_struct));
struct
{
struct External * externalGet;
struct External * externalSet;
struct External * externalPtr;
struct External * externalIsSet;
} __attribute__ ((gcc_struct));
struct
{
struct External * methodExternal;
struct External * methodCodeExternal;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
unsigned int imported, declaredStructSym;
struct __ecereNameSpace__ecere__com__Class * _class;
unsigned int declaredStruct;
unsigned int needConstructor, needDestructor;
char * constructorName, * structName, * className, * destructorName;
struct ModuleImport * module;
struct ClassImport * _import;
struct Location nameLoc;
unsigned int isParam;
unsigned int isRemote;
unsigned int isStruct;
unsigned int fireWatchersDone;
int declaring;
unsigned int classData;
unsigned int isStatic;
char * shortName;
struct __ecereNameSpace__ecere__sys__OldList * templateParams;
struct __ecereNameSpace__ecere__sys__OldList templatedClasses;
struct Context * ctx;
int isIterator;
struct Expression * propCategory;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Symbol;

struct Type
{
struct Type * prev, * next;
int refCount;
union
{
struct Symbol * _class;
struct
{
struct __ecereNameSpace__ecere__sys__OldList members;
char * enumName;
} __attribute__ ((gcc_struct));
struct
{
struct Type * returnType;
struct __ecereNameSpace__ecere__sys__OldList params;
struct Symbol * thisClass;
unsigned int staticMethod;
struct TemplateParameter * thisClassTemplate;
} __attribute__ ((gcc_struct));
struct
{
struct __ecereNameSpace__ecere__com__Method * method;
struct __ecereNameSpace__ecere__com__Class * methodClass;
struct __ecereNameSpace__ecere__com__Class * usedClass;
} __attribute__ ((gcc_struct));
struct
{
struct Type * arrayType;
int arraySize;
struct Expression * arraySizeExp;
unsigned int freeExp;
struct Symbol * enumClass;
} __attribute__ ((gcc_struct));
struct Type * type;
struct TemplateParameter * templateParameter;
} __attribute__ ((gcc_struct));
int kind;
unsigned int size;
char * name;
char * typeName;
int classObjectType;
int alignment;
unsigned int offset;
int bitFieldCount;
int count;
unsigned int isSigned : 1;
unsigned int constant : 1;
unsigned int truth : 1;
unsigned int byReference : 1;
unsigned int extraParam : 1;
unsigned int directClassAccess : 1;
unsigned int computing : 1;
unsigned int keepCast : 1;
unsigned int passAsTemplate : 1;
unsigned int dllExport : 1;
unsigned int attrStdcall : 1;
unsigned int declaredWithStruct : 1;
unsigned int typedByReference : 1;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Type;

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

struct Enumerator
{
struct Enumerator * prev, * next;
struct Location loc;
struct Identifier * id;
struct Expression * exp;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Enumerator;

struct InitDeclarator
{
struct InitDeclarator * prev, * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_InitDeclarator;

struct AsmField
{
struct AsmField * prev, * next;
struct Location loc;
char * command;
struct Expression * expression;
struct Identifier * symbolic;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_AsmField;

struct Attribute
{
struct Attribute * prev, * next;
struct Location loc;
char * attr;
struct Expression * exp;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Attribute;

struct ClassFunction
{
struct ClassFunction * prev, * next;
struct Location loc;
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct Declarator * declarator;
struct __ecereNameSpace__ecere__sys__OldList * declarations;
struct Statement * body;
struct __ecereNameSpace__ecere__com__Class * _class;
struct __ecereNameSpace__ecere__sys__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
unsigned int isVirtual;
unsigned int isConstructor, isDestructor;
unsigned int dontMangle;
int id, idCode;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassFunction;

struct MembersInit
{
struct MembersInit * prev, * next;
struct Location loc;
int type;
union
{
struct __ecereNameSpace__ecere__sys__OldList * dataMembers;
struct ClassFunction * function;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MembersInit;

struct MemberInit
{
struct MemberInit * prev, * next;
struct Location loc;
struct Location realLoc;
struct __ecereNameSpace__ecere__sys__OldList * identifiers;
struct Initializer * initializer;
unsigned int used;
unsigned int variable;
unsigned int takeOutExp;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MemberInit;

struct PropertyDef
{
struct PropertyDef * prev, * next;
struct Location loc;
struct __ecereNameSpace__ecere__sys__OldList * specifiers;
struct Declarator * declarator;
struct Identifier * id;
struct Statement * getStmt;
struct Statement * setStmt;
struct Statement * issetStmt;
struct Symbol * symbol;
struct Expression * category;
struct
{
unsigned int conversion : 1;
unsigned int isWatchable : 1;
unsigned int isDBProp : 1;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyDef;

struct PropertyWatch
{
struct PropertyWatch * prev, * next;
struct Location loc;
struct Statement * compound;
struct __ecereNameSpace__ecere__sys__OldList * properties;
unsigned int deleteWatch;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyWatch;

struct ClassDef
{
struct ClassDef * prev, * next;
struct Location loc;
int type;
union
{
struct Declaration * decl;
struct ClassFunction * function;
struct __ecereNameSpace__ecere__sys__OldList * defProperties;
struct PropertyDef * propertyDef;
struct PropertyWatch * propertyWatch;
char * designer;
struct Identifier * defaultProperty;
struct
{
struct Identifier * id;
struct Initializer * initializer;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
int memberAccess;
void * object;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDef;

struct DBTableEntry
{
struct DBTableEntry * prev, * next;
int type;
struct Identifier * id;
union
{
struct
{
struct TypeName * dataType;
char * name;
} __attribute__ ((gcc_struct));
struct __ecereNameSpace__ecere__sys__OldList * items;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableEntry;

struct DBIndexItem
{
struct DBIndexItem * prev, * next;
struct Identifier * id;
int order;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBIndexItem;

extern YYSTYPE yylval;

typedef struct YYLTYPE
{
int first_line;
int first_column;
int last_line;
int last_column;
} __attribute__ ((gcc_struct)) YYLTYPE;

extern YYLTYPE _yylloc;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TokenType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Order;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableEntryType;

unsigned int inCompiler = 0x0;

void SetInCompiler(unsigned int b)
{
inCompiler = b;
}

struct Context * curContext;

struct Context * globalContext;

struct __ecereNameSpace__ecere__sys__OldList * excludedSymbols;

struct Context * topContext;

struct __ecereNameSpace__ecere__sys__OldList * imports;

struct __ecereNameSpace__ecere__sys__OldList * defines;

struct __ecereNameSpace__ecere__com__Instance * privateModule;

void SetPrivateModule(struct __ecereNameSpace__ecere__com__Instance * module)
{
privateModule = module;
}

struct __ecereNameSpace__ecere__com__Instance * GetPrivateModule()
{
return privateModule;
}

struct ModuleImport * mainModule;

void SetMainModule(struct ModuleImport * moduleImport)
{
mainModule = moduleImport;
}

struct ModuleImport * GetMainModule()
{
return mainModule;
}

struct __ecereNameSpace__ecere__com__Instance * fileInput;

void SetFileInput(struct __ecereNameSpace__ecere__com__Instance * file)
{
fileInput = file;
}

char * symbolsDir = (((void *)0));

extern char *  __ecereNameSpace__ecere__sys__CopyString(char *  string);

void SetSymbolsDir(char * s)
{
(__ecereNameSpace__ecere__com__eSystem_Delete(symbolsDir), symbolsDir = 0);
symbolsDir = __ecereNameSpace__ecere__sys__CopyString(s);
}

char * GetSymbolsDir()
{
return symbolsDir ? symbolsDir : "";
}

char * outputFile;

void SetOutputFile(char * s)
{
outputFile = s;
}

char * GetOutputFile()
{
return outputFile;
}

char * sourceFile;

void SetSourceFile(char * s)
{
sourceFile = s;
}

char * GetSourceFile()
{
return sourceFile;
}

char * i18nModuleName;

void SetI18nModuleName(char * s)
{
i18nModuleName = s;
}

char * GetI18nModuleName()
{
return i18nModuleName;
}

void SetGlobalContext(struct Context * context)
{
globalContext = context;
}

struct Context * GetGlobalContext()
{
return globalContext;
}

void SetTopContext(struct Context * context)
{
topContext = context;
}

struct Context * GetTopContext()
{
return topContext;
}

void SetCurrentContext(struct Context * context)
{
curContext = context;
}

struct Context * GetCurrentContext()
{
return curContext;
}

void SetExcludedSymbols(struct __ecereNameSpace__ecere__sys__OldList * list)
{
excludedSymbols = list;
}

void SetImports(struct __ecereNameSpace__ecere__sys__OldList * list)
{
imports = list;
}

void SetDefines(struct __ecereNameSpace__ecere__sys__OldList * list)
{
defines = list;
}

unsigned int outputLineNumbers = 0x1;

void SetOutputLineNumbers(unsigned int value)
{
outputLineNumbers = value;
}

extern void __ecereNameSpace__ecere__sys__ChangeCh(char *  string, char ch1, char ch2);

void FixModuleName(char * moduleName)
{
__ecereNameSpace__ecere__sys__ChangeCh(moduleName, '.', '_');
__ecereNameSpace__ecere__sys__ChangeCh(moduleName, ' ', '_');
__ecereNameSpace__ecere__sys__ChangeCh(moduleName, '-', '_');
__ecereNameSpace__ecere__sys__ChangeCh(moduleName, '&', '_');
}

extern char *  strchr(const char * , int);

char * PassArg(char * output, const char * input)
{
#ifdef __WIN32__
const char * escChars = " !%&'()+,;=[]^`{}~\"";
const char * escCharsQuoted = "\"";
#else
const char * escChars = " !\"$&'()*:;<=>?[\\`{|";
const char * escCharsQuoted = "\"()$";
#endif
unsigned int quoting = 0x0;
char * o = output, * i = input, * l = input;

#ifdef __WIN32__
while(*l && !strchr(escChars, *l))
l++;
if(*l)
quoting = 0x1;
#else
if(*i == '-')
{
l++;
while(*l && !strchr(escChars, *l))
l++;
if(*l)
quoting = 0x1;
*o++ = *i++;
}
#endif
if(quoting)
*o++ = '\"';
while(*i)
{
if(strchr(quoting ? escCharsQuoted : escChars, *i))
*o++ = '\\';
*o++ = *i++;
}
if(quoting)
*o++ = '\"';
*o = '\0';
return o;
}

struct GlobalData
{
uintptr_t key;
struct __ecereNameSpace__ecere__sys__BTNode * parent;
struct __ecereNameSpace__ecere__sys__BTNode * left;
struct __ecereNameSpace__ecere__sys__BTNode * right;
int depth;
struct __ecereNameSpace__ecere__com__Instance * module;
char * dataTypeString;
struct Type * dataType;
void * symbol;
char * fullName;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_GlobalData;

struct TemplatedType
{
uintptr_t key;
struct __ecereNameSpace__ecere__sys__BTNode * parent;
struct __ecereNameSpace__ecere__sys__BTNode * left;
struct __ecereNameSpace__ecere__sys__BTNode * right;
int depth;
struct TemplateParameter * param;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplatedType;

struct DataRedefinition
{
struct DataRedefinition * prev, * next;
char name[1024];
char type1[1024], type2[1024];
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DataRedefinition;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__EditLine;

struct __ecereNameSpace__ecere__gui__controls__EditLine;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__BufferLocation;

struct __ecereNameSpace__ecere__gui__controls__BufferLocation
{
struct __ecereNameSpace__ecere__gui__controls__EditLine * line;
int y;
int x;
} __attribute__ ((gcc_struct));

void __ecereMethod_CodePosition_AdjustDelete(struct CodePosition * this, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * start, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * end)
{
if(this->line - 1 < start->y || (this->line - 1 == start->y && this->charPos - 1 < start->x))
return ;
if((this->line - 1 >= start->y && (this->line - 1 > start->y || this->charPos - 1 >= start->x)) && (this->line - 1 >= end->y && (this->line - 1 > end->y || this->charPos - 1 >= end->x)))
{
if(this->line - 1 >= end->y)
{
if(this->line - 1 > end->y)
this->line -= end->y - start->y;
else
{
if(this->charPos - 1 >= end->x)
{
this->line = start->y + 1;
this->charPos -= end->x - start->x;
}
}
}
}
else
{
this->line = start->y + 1;
this->charPos = start->x + 1;
}
}

void __ecereMethod_CodePosition_AdjustAdd(struct CodePosition * this, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * start, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * end)
{
int numLines = end->y - start->y;

if(this->line - 1 >= start->y)
{
if(this->line - 1 > start->y)
this->line += numLines;
else
{
if(this->charPos - 1 > start->x || (this->charPos - 1 == start->x))
{
this->line += numLines;
this->charPos += end->x - start->x;
}
}
}
}

unsigned int __ecereMethod_Location_Inside(struct Location * this, int line, int charPos)
{
return (this->start.line < line || (this->start.line == line && this->start.charPos <= charPos)) && (this->end.line > line || (this->end.line == line && this->end.charPos >= charPos));
}

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DefinitionType;

struct Definition
{
struct Definition * prev, * next;
char * name;
int type;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Definition;

struct ImportedModule
{
struct ImportedModule * prev, * next;
char * name;
int type;
int importType;
unsigned int globalInstance;
unsigned int dllOnly;
int importAccess;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ImportedModule;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExpressionType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MemberType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExpUsage;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SpecifierType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExtDeclType;

void __ecereMethod_Expression_Clear(struct Expression * this)
{
struct __ecereNameSpace__ecere__com__DataValue __simpleStruct0 = 
{
(char)0
};

this->debugValue = 0x0;
this->val = __simpleStruct0;
this->address = 0;
this->hasAddress = 0x0;
this->expType = (((void *)0));
this->destType = (((void *)0));
this->usage = 0;
this->tempCount = 0;
this->byReference = 0x0;
this->isConstant = 0x0;
this->addedThis = 0x0;
this->needCast = 0x0;
this->thisPtr = 0x0;
}

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DeclaratorType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_InitializerType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassObjectType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_StmtType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DeclarationType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MembersInitType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDefType;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ExternalType;

int __ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString(struct __ecereNameSpace__ecere__sys__BinaryTree * this, char *  a, char *  b);

unsigned int __ecereConstructor_Context(struct Context * this)
{
(this->types.CompareKey = (void *)__ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString);
(this->classes.CompareKey = (void *)__ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString);
(this->symbols.CompareKey = (void *)__ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString);
(this->structSymbols.CompareKey = (void *)__ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString);
(this->templateTypes.CompareKey = (void *)__ecereMethod___ecereNameSpace__ecere__sys__BinaryTree_CompareString);
return 0x1;
}

struct FunctionImport
{
struct FunctionImport * prev, * next;
char * name;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_FunctionImport;

struct PropertyImport
{
struct PropertyImport * prev, * next;
char * name;
unsigned int isVirtual;
unsigned int hasSet, hasGet;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyImport;

struct MethodImport
{
struct MethodImport * prev, * next;
char * name;
unsigned int isVirtual;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MethodImport;

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_TypeKind;

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

char * __ecereMethod_Type_OnGetString(struct __ecereNameSpace__ecere__com__Class * class, struct Type * this, char * tempString, void * fieldData, unsigned int * needClass)
{
struct Type * type = (struct Type *)this;

tempString[0] = '\0';
if(type)
PrintType(type, tempString, 0x0, 0x1);
return tempString;
}

void __ecereMethod_Type_OnFree(struct __ecereNameSpace__ecere__com__Class * class, struct Type * this)
{
}

struct OpTable
{
unsigned int (* Add)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Sub)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Mul)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Div)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Mod)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Neg)(struct Expression *, struct Operand *);
unsigned int (* Inc)(struct Expression *, struct Operand *);
unsigned int (* Dec)(struct Expression *, struct Operand *);
unsigned int (* Asign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* AddAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* SubAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* MulAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* DivAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* ModAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitAnd)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitOr)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitXor)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* LShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* RShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitNot)(struct Expression *, struct Operand *);
unsigned int (* AndAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* OrAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* XorAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* LShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* RShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Not)(struct Expression *, struct Operand *);
unsigned int (* Equ)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Nqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* And)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Or)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Grt)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Sma)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* GrtEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* SmaEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Cond)(struct Expression *, struct Operand *, struct Operand *, struct Operand *);
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_OpTable;

struct Operand
{
int kind;
struct Type * type;
unsigned int ptrSize;
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
float f;
double d;
long long i64;
uint64 ui64;
} __attribute__ ((gcc_struct));
struct OpTable ops;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Operand;


extern unsigned int parsingType;

extern struct Location yylloc;

extern char *  __ecereNameSpace__ecere__sys__GetWorkingDir(char *  buf, int size);

extern char *  __ecereNameSpace__ecere__sys__PathCat(char *  string, char *  addedPath);

extern char *  GetIncludeFileFromID(int id);

extern int printf(char * , ...);

extern char *  __ecereNameSpace__ecere__GetTranslatedString(char * name, char *  string, char *  stringAndContext);

extern int fputs(char * , void *  stream);

extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

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

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Application;

struct __ecereNameSpace__ecere__com__Application
{
int argc;
char * *  argv;
int exitCode;
unsigned int isGUIApp;
struct __ecereNameSpace__ecere__sys__OldList allModules;
char *  parsedCommand;
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;
} __attribute__ ((gcc_struct));

extern unsigned int parseTypeError;

void Compiler_Error(char * format, ...)
{
if(inCompiler)
{
if(!parsingType)
{
va_list args;
char string[10000];

if(yylloc.start.included)
{
__ecereNameSpace__ecere__sys__GetWorkingDir(string, sizeof (string));
__ecereNameSpace__ecere__sys__PathCat(string, GetIncludeFileFromID(yylloc.start.included));
}
else
{
__ecereNameSpace__ecere__sys__GetWorkingDir(string, sizeof (string));
__ecereNameSpace__ecere__sys__PathCat(string, sourceFile);
}
printf(string);
printf(__ecereNameSpace__ecere__GetTranslatedString("ec", ":%d:%d: error: ", (((void *)0))), yylloc.start.line, yylloc.start.charPos);
__builtin_va_start(args, format);
vsnprintf(string, sizeof (string), format, args);
string[sizeof (string) - 1] = (char)0;
__builtin_va_end(args);
fputs(string, (bsl_stdout()));
((struct __ecereNameSpace__ecere__com__Application *)(((char *)((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application + structSize_Module)))->exitCode = 1;
}
else
{
parseTypeError = 0x1;
}
}
}

int numWarnings;

int GetNumWarnings()
{
return numWarnings;
}

extern char *  __ecereNameSpace__ecere__sys__GetLastDirectory(char *  string, char *  output);

extern int strcmp(const char * , const char * );

void Compiler_Warning(char * format, ...)
{
if(inCompiler)
{
va_list args;
char string[10000];
char fileName[274];

if(yylloc.start.included)
{
char * include = GetIncludeFileFromID(yylloc.start.included);

__ecereNameSpace__ecere__sys__GetWorkingDir(string, sizeof (string));
__ecereNameSpace__ecere__sys__PathCat(string, include);
}
else
{
__ecereNameSpace__ecere__sys__GetWorkingDir(string, sizeof (string));
__ecereNameSpace__ecere__sys__PathCat(string, sourceFile);
}
__ecereNameSpace__ecere__sys__GetLastDirectory(string, fileName);
if(!strcmp(fileName, "intrin-impl.h"))
return ;
printf(string);
printf(__ecereNameSpace__ecere__GetTranslatedString("ec", ":%d:%d: warning: ", (((void *)0))), yylloc.start.line, yylloc.start.charPos);
__builtin_va_start(args, format);
vsnprintf(string, sizeof (string), format, args);
string[sizeof (string) - 1] = (char)0;
__builtin_va_end(args);
fputs(string, (bsl_stdout()));
numWarnings++;
}
}

unsigned int parseError;

unsigned int skipErrors;

int yyerror()
{
if(!skipErrors)
{
parseError = 0x1;
Compiler_Error(__ecereNameSpace__ecere__GetTranslatedString("ec", "syntax error\n", (((void *)0))));
}
return 0;
}

int targetPlatform;

extern char *  getenv(const char *  name);

extern struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__sys__DualPipeOpen(unsigned int mode, char *  commandLine);

unsigned int __ecereMethod___ecereNameSpace__ecere__sys__File_GetLine(struct __ecereNameSpace__ecere__com__Instance * this, char *  s, int max);

extern void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

int GetHostBits()
{
int hostBits = (sizeof(uintptr_t) == 8) ? 64 : 32;
char * hostType = getenv("HOSTTYPE");
char host[256];

if(!hostType)
{
struct __ecereNameSpace__ecere__com__Instance * f = __ecereNameSpace__ecere__sys__DualPipeOpen((((unsigned int)(0x1))), "uname -m");

if(f)
{
if(__ecereMethod___ecereNameSpace__ecere__sys__File_GetLine(f, host, sizeof (host)))
hostType = host;
(__ecereNameSpace__ecere__com__eInstance_DecRef(f), f = 0);
}
}
if(hostType)
{
if(!strcmp(hostType, "x86_64"))
hostBits = 64;
else if(!strcmp(hostType, "i386") || !strcmp(hostType, "i686"))
hostBits = 32;
}
return hostBits;
}

void SetTargetPlatform(int platform)
{
targetPlatform = platform;
}

int targetBits;

void SetTargetBits(int bits)
{
targetBits = bits;
}

int GetTargetBits()
{
return targetBits;
}

extern struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, char *  name, char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

extern void __ecereNameSpace__ecere__com__eEnum_AddFixedValue(struct __ecereNameSpace__ecere__com__Class * _class, char *  string, int value);

extern struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__GlobalFunction;

struct __ecereNameSpace__ecere__com__GlobalFunction;

extern struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(char *  name, char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

extern struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, void *  function, int declMode);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__BitMember;

struct __ecereNameSpace__ecere__com__BitMember;

extern struct __ecereNameSpace__ecere__com__BitMember * __ecereNameSpace__ecere__com__eClass_AddBitMember(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, int bitSize, int bitPos, int declMode);

extern struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eMember_New(int type, int declMode);

extern struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eMember_AddDataMember(struct __ecereNameSpace__ecere__com__DataMember * member, char *  name, char *  type, unsigned int size, unsigned int alignment, int declMode);

extern unsigned int __ecereNameSpace__ecere__com__eClass_AddMember(struct __ecereNameSpace__ecere__com__Class * _class, struct __ecereNameSpace__ecere__com__DataMember * dataMember);

extern unsigned int __ecereNameSpace__ecere__com__eMember_AddMember(struct __ecereNameSpace__ecere__com__DataMember * addTo, struct __ecereNameSpace__ecere__com__DataMember * dataMember);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DefinedExpression;

struct __ecereNameSpace__ecere__com__DefinedExpression;

extern struct __ecereNameSpace__ecere__com__DefinedExpression * __ecereNameSpace__ecere__com__eSystem_RegisterDefine(char *  name, char *  value, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

void __ecereRegisterModule_ecdefs(struct __ecereNameSpace__ecere__com__Instance * module)
{
struct __ecereNameSpace__ecere__com__Class * class;

class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "TokenType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TokenType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "identifier", 258);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "constant", 259);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "stringLiteral", 260);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "sizeOf", 261);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ptrOp", 262);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "incOp", 263);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "decOp", 264);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "leftOp", 265);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "rightOp", 266);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "leOp", 267);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "geOp", 268);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "eqOp", 269);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "neOp", 270);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "andOp", 271);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "orOp", 272);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "mulAssign", 273);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "divAssign", 274);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "modAssign", 275);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "addAssign", 276);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "subAssign", 277);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "leftAssign", 278);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "rightAssign", 279);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "andAssign", 280);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "xorAssign", 281);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "orAssign", 282);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typeName", 283);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_typedef", 284);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_extern", 285);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_static", 286);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_auto", 287);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_register", 288);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_char", 289);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_short", 290);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_int", 291);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_uint", 292);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_int64", 293);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_long", 294);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_signed", 295);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_unsigned", 296);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_float", 297);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_double", 298);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_const", 299);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_volatile", 300);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_void", 301);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_valist", 302);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_struct", 303);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_union", 304);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_enum", 305);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ellipsis", 306);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_case", 307);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_default", 308);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_if", 309);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_switch", 310);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_whilte", 311);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_do", 312);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_for", 313);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_goto", 314);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_continue", 315);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_break", 316);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_return", 317);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ifx", 318);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_else", 319);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_class", 320);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "thisClass", 321);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "className", 322);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_property", 323);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "setProp", 324);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "getProp", 325);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "newOp", 326);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_renew", 327);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_delete", 328);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_extDecl", 329);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_extStorage", 330);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_import", 331);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_define", 332);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_virtual", 333);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "attrib", 334);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_public", 335);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_priate", 336);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typedObject", 337);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "anyObject", 338);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_incref", 339);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extension", 340);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "___asm", 341);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_typeof", 342);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_watch", 343);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "stopWatching", 344);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "fireWatchers", 345);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_watchable", 346);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDesigner", 347);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classNoExpansion", 348);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classFixed", 349);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "isPropSet", 350);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDefaultProperty", 351);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "propertyCategory", 352);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classData", 353);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classProperty", 354);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "subClass", 355);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "nameSpace", 356);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "new0Op", 357);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "renew0Op", 358);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "vaArg", 359);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbTable", 360);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbField", 361);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbIndex", 362);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "databaseOpen", 363);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "alignOf", 364);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "attribDep", 365);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_attrib", 366);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "BOOL", 367);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_BOOL", 368);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "complex", 369);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "imaginary", 370);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_restrict", 371);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_thread", 372);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "Order", 0, 0, 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Order = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ascending", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "descending", 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "DBTableDef", 0, sizeof(struct DBTableDef), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DBTableDef = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "definitions", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declMode", "ecere::com::AccessMode", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "DBTableEntryType", 0, 0, 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DBTableEntryType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "fieldEntry", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "indexEntry", 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "DBTableEntry", 0, sizeof(struct DBTableEntry), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DBTableEntry = class;
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "DBIndexItem", 0, sizeof(struct DBIndexItem), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DBIndexItem = class;
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetInCompiler", "void SetInCompiler(bool b)", SetInCompiler, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetPrivateModule", "void SetPrivateModule(ecere::com::Module module)", SetPrivateModule, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetPrivateModule", "ecere::com::Module GetPrivateModule(void)", GetPrivateModule, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetMainModule", "void SetMainModule(ModuleImport moduleImport)", SetMainModule, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetMainModule", "ModuleImport GetMainModule(void)", GetMainModule, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetFileInput", "void SetFileInput(ecere::sys::File file)", SetFileInput, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetSymbolsDir", "void SetSymbolsDir(char * s)", SetSymbolsDir, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetSymbolsDir", "char * GetSymbolsDir(void)", GetSymbolsDir, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetOutputFile", "void SetOutputFile(char * s)", SetOutputFile, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetOutputFile", "char * GetOutputFile(void)", GetOutputFile, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetSourceFile", "void SetSourceFile(char * s)", SetSourceFile, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetSourceFile", "char * GetSourceFile(void)", GetSourceFile, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetI18nModuleName", "void SetI18nModuleName(char * s)", SetI18nModuleName, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetI18nModuleName", "char * GetI18nModuleName(void)", GetI18nModuleName, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetGlobalContext", "void SetGlobalContext(Context context)", SetGlobalContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetGlobalContext", "Context GetGlobalContext(void)", GetGlobalContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetTopContext", "void SetTopContext(Context context)", SetTopContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetTopContext", "Context GetTopContext(void)", GetTopContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetCurrentContext", "void SetCurrentContext(Context context)", SetCurrentContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetCurrentContext", "Context GetCurrentContext(void)", GetCurrentContext, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetExcludedSymbols", "void SetExcludedSymbols(ecere::sys::OldList * list)", SetExcludedSymbols, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetImports", "void SetImports(ecere::sys::OldList * list)", SetImports, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetDefines", "void SetDefines(ecere::sys::OldList * list)", SetDefines, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetOutputLineNumbers", "void SetOutputLineNumbers(bool value)", SetOutputLineNumbers, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("FixModuleName", "void FixModuleName(char * moduleName)", FixModuleName, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("PassArg", "char * PassArg(char * output, const char * input)", PassArg, module, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "GlobalData", "ecere::sys::BTNode", sizeof(struct GlobalData), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_GlobalData = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "module", "ecere::com::Module", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dataTypeString", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dataType", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "void *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "fullName", "char *", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "TemplatedType", "ecere::sys::BTNode", sizeof(struct TemplatedType), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TemplatedType = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "param", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "DataRedefinition", 0, sizeof(struct DataRedefinition), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DataRedefinition = class;
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "CodePosition", 0, sizeof(struct CodePosition), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_CodePosition = class;
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "AdjustAdd", "void AdjustAdd(ecere::gui::controls::BufferLocation start, ecere::gui::controls::BufferLocation end)", __ecereMethod_CodePosition_AdjustAdd, 1);
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "AdjustDelete", "void AdjustDelete(ecere::gui::controls::BufferLocation start, ecere::gui::controls::BufferLocation end)", __ecereMethod_CodePosition_AdjustDelete, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "line", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "charPos", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "pos", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "included", "int", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "Location", 0, sizeof(struct Location), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Location = class;
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Inside", "bool Inside(int line, int charPos)", __ecereMethod_Location_Inside, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "start", "CodePosition", 16, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "end", "CodePosition", 16, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "DefinitionType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DefinitionType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "moduleDefinition", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDefinition", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "defineDefinition", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionDefinition", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dataDefinition", 4);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Definition", 0, sizeof(struct Definition), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Definition = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Definition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Definition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "DefinitionType", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ImportedModule", 0, sizeof(struct ImportedModule), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ImportedModule = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ImportedModule", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ImportedModule", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "DefinitionType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "importType", "ecere::com::ImportType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "globalInstance", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dllOnly", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "importAccess", "ecere::com::AccessMode", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Identifier", 0, sizeof(struct Identifier), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Identifier = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classSym", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "string", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "badID", "Identifier", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "ExpressionType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ExpressionType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "identifierExp", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "instanceExp", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "constantExp", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "stringExp", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "opExp", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "bracketsExp", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "indexExp", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "callExp", 7);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "memberExp", 8);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "pointerExp", 9);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typeSizeExp", 10);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "castExp", 11);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "conditionExp", 12);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "newExp", 13);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "renewExp", 14);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classSizeExp", 15);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dummyExp", 16);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dereferenceErrorExp", 17);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "symbolErrorExp", 18);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "memberSymbolErrorExp", 19);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "memoryErrorExp", 20);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "unknownErrorExp", 21);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "noDebuggerErrorExp", 22);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extensionCompoundExp", 23);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classExp", 24);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDataExp", 25);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "new0Exp", 26);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "renew0Exp", 27);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbopenExp", 28);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbfieldExp", 29);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbtableExp", 30);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbindexExp", 31);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extensionExpressionExp", 32);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extensionInitializerExp", 33);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "vaArgExp", 34);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "arrayExp", 35);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typeAlignExp", 36);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "memberPropertyErrorExp", 37);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionCallErrorExp", 38);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "divideBy0ErrorExp", 39);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "MemberType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_MemberType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "unresolvedMember", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "propertyMember", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "methodMember", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dataMember", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "reverseConversionMember", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classPropertyMember", 5);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(2, "ExpUsage", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ExpUsage = class;
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageGet", "bool", 1, 0, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageSet", "bool", 1, 1, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageArg", "bool", 1, 2, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageCall", "bool", 1, 3, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageMember", "bool", 1, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageDeepGet", "bool", 1, 5, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageRef", "bool", 1, 6, 1);
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "usageDelete", "bool", 1, 7, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "TemplateParameter", 0, sizeof(struct TemplateParameter), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TemplateParameter = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ecere::com::TemplateParameterType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "identifier", "Identifier", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "dataType", "TemplateDatatype", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "memberType", "ecere::com::TemplateMemberType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "defaultArgument", "TemplateArgument", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dataTypeString", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "baseType", "Type", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "TemplateDatatype", 0, sizeof(struct TemplateDatatype), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TemplateDatatype = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "specifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "decl", "Declarator", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "TemplateArgument", 0, sizeof(struct TemplateArgument), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TemplateArgument = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "TemplateArgument", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "TemplateArgument", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ecere::com::TemplateParameterType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "expression", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "identifier", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "templateDatatype", "TemplateDatatype", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "SpecifierType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_SpecifierType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "baseSpecifier", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "nameSpecifier", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "enumSpecifier", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "structSpecifier", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "unionSpecifier", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extendedSpecifier", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typeOfSpecifier", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "subClassSpecifier", 7);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "templateTypeSpecifier", 8);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Specifier", 0, sizeof(struct Specifier), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Specifier = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "SpecifierType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "specifier", "int", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "extDecl", "ExtDecl", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "templateArgs", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "list", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "baseSpecs", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "definitions", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "addNameSpace", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "ctx", "Context", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "extDeclStruct", "ExtDecl", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "expression", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_class", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "templateParameter", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Attribute", 0, sizeof(struct Attribute), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Attribute = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Attribute", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Attribute", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "attr", "String", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "exp", "Expression", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Attrib", 0, sizeof(struct Attrib), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Attrib = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "attribs", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ExtDecl", 0, sizeof(struct ExtDecl), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ExtDecl = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ExtDeclType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "s", "String", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "attr", "Attrib", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "ExtDeclType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ExtDeclType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extDeclString", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extDeclAttrib", 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Expression", 0, sizeof(struct Expression), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Expression = class;
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Clear", "void Clear()", __ecereMethod_Expression_Clear, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ExpressionType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "constant", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "identifier", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "compound", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "instance", "Instantiation", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "string", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "intlString", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "list", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_classExp", "struct { ecere::sys::OldList * specifiers; Declarator decl; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "classData", "struct { Identifier id; }", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "call", "struct { Expression exp; ecere::sys::OldList * arguments; Location argLoc; }", structSize_ExpCall, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "index", "struct { Expression exp; ecere::sys::OldList * index; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "member", "struct { Expression exp; Identifier member; MemberType memberType; bool thisPtr; }", structSize_ExpMember, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "op", "struct { int op; Expression exp1; Expression exp2; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "typeName", "TypeName", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_class", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "cast", "struct { TypeName typeName; Expression exp; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "cond", "struct { Expression cond; ecere::sys::OldList * exp; Expression elseExp; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_new", "struct { TypeName typeName; Expression size; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_renew", "struct { TypeName typeName; Expression size; Expression exp; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "db", "struct { char * table; Identifier id; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "dbopen", "struct { Expression ds; Expression name; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "initializer", "struct { TypeName typeName; Initializer initializer; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "vaArg", "struct { Expression exp; TypeName typeName; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "debugValue", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "val", "ecere::com::DataValue", 8, 8, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "address", "uint64", 8, 8, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "hasAddress", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "expType", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "destType", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "usage", "ExpUsage", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "tempCount", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "byReference", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "addedThis", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "needCast", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "thisPtr", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Enumerator", 0, sizeof(struct Enumerator), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Enumerator = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Enumerator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Enumerator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "exp", "Expression", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Pointer", 0, sizeof(struct Pointer), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Pointer = class;
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "DeclaratorType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DeclaratorType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "structDeclarator", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "identifierDeclarator", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "bracketsDeclarator", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "arrayDeclarator", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionDeclarator", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "pointerDeclarator", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extendedDeclarator", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "extendedDeclaratorEnd", 7);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Declarator", 0, sizeof(struct Declarator), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Declarator = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "DeclaratorType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "identifier", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "structDecl", "struct { Expression exp; Expression posExp; Attrib attrib; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "array", "struct { Expression exp; Specifier enumClass; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "function", "struct { ecere::sys::OldList * parameters; }", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "pointer", "struct { Pointer pointer; }", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "extended", "struct { ExtDecl extended; }", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "InitializerType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_InitializerType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "expInitializer", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "listInitializer", 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Initializer", 0, sizeof(struct Initializer), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Initializer = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Initializer", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Initializer", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "InitializerType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "exp", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "list", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "InitDeclarator", 0, sizeof(struct InitDeclarator), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_InitDeclarator = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "InitDeclarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "InitDeclarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "initializer", "Initializer", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "ClassObjectType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassObjectType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "none", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classPointer", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "typedObject", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "anyObject", 3);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "TypeName", 0, sizeof(struct TypeName), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TypeName = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "TypeName", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "TypeName", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "qualifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classObjectType", "ClassObjectType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "bitCount", "Expression", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "AsmField", 0, sizeof(struct AsmField), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_AsmField = class;
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "StmtType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_StmtType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "labeledStmt", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "caseStmt", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "compoundStmt", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "expressionStmt", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ifStmt", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "switchStmt", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "whileStmt", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "doWhileStmt", 7);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "forStmt", 8);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "gotoStmt", 9);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "continueStmt", 10);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "breakStmt", 11);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "returnStmt", 12);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "asmStmt", 13);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "badDeclarationStmt", 14);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "fireWatchersStmt", 15);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "stopWatchingStmt", 16);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "watchStmt", 17);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "forEachStmt", 18);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Statement", 0, sizeof(struct Statement), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Statement = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "StmtType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "expressions", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "labeled", "struct { Identifier id; Statement stmt; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "caseStmt", "struct { Expression exp; Statement stmt; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "compound", "struct { ecere::sys::OldList * declarations; ecere::sys::OldList * statements; Context context; bool isSwitch; }", 4*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "ifStmt", "struct { ecere::sys::OldList * exp; Statement stmt; Statement elseStmt; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "switchStmt", "struct { ecere::sys::OldList * exp; Statement stmt; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "whileStmt", "struct { ecere::sys::OldList * exp; Statement stmt; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "doWhile", "struct { ecere::sys::OldList * exp; Statement stmt; }", 2*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "forStmt", "struct { Statement init; Statement check; ecere::sys::OldList * increment; Statement stmt; }", 4*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "gotoStmt", "struct { Identifier id; }", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "asmStmt", "struct { Specifier spec; char * statements; ecere::sys::OldList * inputFields; ecere::sys::OldList * outputFields; ecere::sys::OldList * clobberedFields; }", 5*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_watch", "struct { Expression watcher; Expression object; ecere::sys::OldList * watches; }", 3*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "forEachStmt", "struct { Identifier id; ecere::sys::OldList * exp; ecere::sys::OldList * filter; Statement stmt; }", 4*arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "decl", "Declaration", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "DeclarationType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_DeclarationType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "structDeclaration", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "initDeclaration", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "instDeclaration", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "defineDeclaration", 3);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Declaration", 0, sizeof(struct Declaration), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Declaration = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Declaration", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Declaration", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "DeclarationType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "specifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "declarators", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "inst", "Instantiation", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "exp", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "extStorage", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declMode", "ecere::com::AccessMode", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Instantiation", 0, sizeof(struct Instantiation), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Instantiation = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Instantiation", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Instantiation", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "exp", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "members", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "fullSet", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "data", "byte *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "nameLoc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "insideLoc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "built", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "MembersInitType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_MembersInitType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dataMembersInit", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "methodMembersInit", 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "FunctionDefinition", 0, sizeof(struct FunctionDefinition), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_FunctionDefinition = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "FunctionDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "FunctionDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "specifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarations", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "body", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "attached", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declMode", "ecere::com::AccessMode", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "propSet", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "tempCount", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "propertyNoThis", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ClassFunction", 0, sizeof(struct ClassFunction), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassFunction = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ClassFunction", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ClassFunction", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "specifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarations", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "body", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "attached", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declMode", "ecere::com::AccessMode", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "propSet", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isConstructor", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isDestructor", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dontMangle", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "idCode", "int", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "MembersInit", 0, sizeof(struct MembersInit), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_MembersInit = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "MembersInit", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "MembersInit", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "MembersInitType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "dataMembers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "function", "ClassFunction", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "MemberInit", 0, sizeof(struct MemberInit), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_MemberInit = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "MemberInit", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "MemberInit", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "realLoc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "identifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "initializer", "Initializer", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "used", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "variable", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "takeOutExp", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ClassDefinition", 0, sizeof(struct ClassDefinition), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassDefinition = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ClassDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ClassDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "Specifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "baseSpecs", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "definitions", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "blockStart", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "nameLoc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "endid", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declMode", "ecere::com::AccessMode", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "deleteWatchable", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "PropertyWatch", 0, sizeof(struct PropertyWatch), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_PropertyWatch = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "PropertyWatch", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "PropertyWatch", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "compound", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "properties", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "deleteWatch", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "ClassDefType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassDefType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionClassDef", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "defaultPropertiesClassDef", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "declarationClassDef", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "propertyClassDef", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "propertyWatchClassDef", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDesignerClassDef", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classNoExpansionClassDef", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classFixedClassDef", 7);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "designerDefaultPropertyClassDef", 8);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classDataClassDef", 9);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classPropertyClassDef", 10);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classPropertyValueClassDef", 11);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "memberAccessClassDef", 12);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "accessOverrideClassDef", 13);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "PropertyDef", 0, sizeof(struct PropertyDef), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_PropertyDef = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "PropertyDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "PropertyDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "specifiers", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declarator", "Declarator", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "getStmt", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "setStmt", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "issetStmt", "Statement", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "category", "Expression", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "conversion", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "isWatchable", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "isDBProp", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ClassDef", 0, sizeof(struct ClassDef), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassDef = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ClassDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ClassDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ClassDefType", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "decl", "Declaration", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "function", "ClassFunction", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "defProperties", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "propertyDef", "PropertyDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "propertyWatch", "PropertyWatch", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "designer", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "defaultProperty", "Identifier", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "initializer", "Initializer", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "memberAccess", "ecere::com::AccessMode", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "object", "void *", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "ExternalType", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ExternalType = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionExternal", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "declarationExternal", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classExternal", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "importExternal", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "nameSpaceExternal", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dbtableExternal", 5);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "External", 0, sizeof(struct External), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_External = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "loc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "ExternalType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbol", "Symbol", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "function", "FunctionDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_class", "ClassDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "declaration", "Declaration", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "importString", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "id", "Identifier", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "table", "DBTableDef", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "importType", "ecere::com::ImportType", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Context", 0, sizeof(struct Context), 0, __ecereConstructor_Context, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Context = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "parent", "Context", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "types", "ecere::sys::BinaryTree", structSize_BinaryTree, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classes", "ecere::sys::BinaryTree", structSize_BinaryTree, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "symbols", "ecere::sys::BinaryTree", structSize_BinaryTree, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "structSymbols", "ecere::sys::BinaryTree", structSize_BinaryTree, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "nextID", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "simpleID", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "templateTypes", "ecere::sys::BinaryTree", structSize_BinaryTree, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classDef", "ClassDefinition", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "templateTypesOnly", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "hasNameSpace", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Symbol", 0, sizeof(struct Symbol), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Symbol = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "string", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "parent", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "left", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "right", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "Type", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "method", "ecere::com::Method", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_property", "ecere::com::Property", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "registered", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "idCode", "int", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "pointerExternal", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "structExternal", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "externalGet", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "externalSet", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "externalPtr", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "externalIsSet", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "methodExternal", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "methodCodeExternal", "External", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "imported", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declaredStructSym", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_class", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declaredStruct", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "needConstructor", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "needDestructor", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "constructorName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "structName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "className", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "destructorName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "module", "ModuleImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "_import", "ClassImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "nameLoc", "Location", 32, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isParam", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isRemote", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isStruct", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "fireWatchersDone", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declaring", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classData", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isStatic", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "shortName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "templateParams", "ecere::sys::OldList *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "templatedClasses", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "ctx", "Context", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isIterator", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "propCategory", "Expression", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ClassImport", 0, sizeof(struct ClassImport), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ClassImport = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ClassImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ClassImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "methods", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "properties", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "itself", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isRemote", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "FunctionImport", 0, sizeof(struct FunctionImport), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_FunctionImport = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "FunctionImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "FunctionImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ModuleImport", 0, sizeof(struct ModuleImport), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_ModuleImport = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "ModuleImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "ModuleImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classes", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "functions", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "importType", "ecere::com::ImportType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "importAccess", "ecere::com::AccessMode", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "PropertyImport", 0, sizeof(struct PropertyImport), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_PropertyImport = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "PropertyImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "PropertyImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "hasSet", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "hasGet", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "MethodImport", 0, sizeof(struct MethodImport), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_MethodImport = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "MethodImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "MethodImport", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "TypeKind", 0, 0, 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_TypeKind = class;
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "voidType", 0);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "charType", 1);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "shortType", 2);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "intType", 3);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "int64Type", 4);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "longType", 5);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "floatType", 6);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "doubleType", 7);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "classType", 8);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "structType", 9);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "unionType", 10);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "functionType", 11);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "arrayType", 12);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "pointerType", 13);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "ellipsisType", 14);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "enumType", 15);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "methodType", 16);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "vaListType", 17);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "dummyType", 18);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "subClassType", 19);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "templateType", 20);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "thisClassType", 21);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "intPtrType", 22);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "intSizeType", 23);
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "_BoolType", 24);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "Type", 0, sizeof(struct Type), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Type = class;
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnFree", 0, __ecereMethod_Type_OnFree, 1);
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnGetString", 0, __ecereMethod_Type_OnGetString, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "prev", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "next", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "refCount", "int", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "_class", "Symbol", arch_PointerSize, arch_PointerSize, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "members", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "enumName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "returnType", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "params", "ecere::sys::OldList", structSize_OldList, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "thisClass", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "staticMethod", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "thisClassTemplate", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "method", "ecere::com::Method", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "methodClass", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "usedClass", "ecere::com::Class", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember1 = __ecereNameSpace__ecere__com__eMember_New(2, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "arrayType", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "arraySize", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "arraySizeExp", "Expression", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "freeExp", "bool", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember1, "enumClass", "Symbol", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddMember(dataMember0, dataMember1);
}
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "type", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "templateParameter", "TemplateParameter", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "kind", "TypeKind", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "size", "uint", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "name", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "typeName", "char *", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "classObjectType", "ClassObjectType", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "alignment", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "offset", "uint", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "bitFieldCount", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "isSigned", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "constant", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "truth", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "byReference", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "extraParam", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "directClassAccess", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "computing", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "keepCast", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "passAsTemplate", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "dllExport", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "attrStdcall", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "declaredWithStruct", "bool:1", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "typedByReference", "bool:1", 4, 4, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "Operand", 0, sizeof(struct Operand), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_Operand = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "kind", "TypeKind", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "type", "Type", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "ptrSize", "uint", 4, 4, 1);
{
struct __ecereNameSpace__ecere__com__DataMember * dataMember0 = __ecereNameSpace__ecere__com__eMember_New(1, 1);

__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "c", "char", 1, 1, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "uc", "byte", 1, 1, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "s", "short", 2, 2, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "us", "uint16", 2, 2, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "i", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "ui", "uint", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "f", "float", 4, 4, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "d", "double", 8, 8, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "i64", "int64", 8, 8, 1);
__ecereNameSpace__ecere__com__eMember_AddDataMember(dataMember0, "ui64", "uint64", 8, 8, 1);
__ecereNameSpace__ecere__com__eClass_AddMember(class, dataMember0);
}
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "ops", "OpTable", structSize_OpTable, arch_PointerSize, 1);
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "OpTable", 0, sizeof(struct OpTable), 0, 0, 0, module, 1, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + structSize_Instance)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + structSize_Instance)))->application && class)
__ecereClass_OpTable = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Add", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Sub", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Mul", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Div", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Mod", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Neg", "bool (*)(Expression, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Inc", "bool (*)(Expression, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Dec", "bool (*)(Expression, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Asign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "AddAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "SubAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "MulAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "DivAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "ModAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "BitAnd", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "BitOr", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "BitXor", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "LShift", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "RShift", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "BitNot", "bool (*)(Expression, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "AndAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "OrAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "XorAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "LShiftAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "RShiftAsign", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Not", "bool (*)(Expression, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Equ", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Nqu", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "And", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Or", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Grt", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Sma", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "GrtEqu", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "SmaEqu", "bool (*)(Expression, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "Cond", "bool (*)(Expression, Operand, Operand, Operand)", arch_PointerSize, arch_PointerSize, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterDefine("MAX_INCLUDE_DEPTH", "30", module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("Compiler_Error", "void Compiler_Error(char * format, ...)", Compiler_Error, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetNumWarnings", "int GetNumWarnings(void)", GetNumWarnings, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("Compiler_Warning", "void Compiler_Warning(char * format, ...)", Compiler_Warning, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("yyerror", "int yyerror(void)", yyerror, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetHostBits", "int GetHostBits(void)", GetHostBits, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetTargetPlatform", "void SetTargetPlatform(ecere::com::Platform platform)", SetTargetPlatform, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetTargetBits", "void SetTargetBits(int bits)", SetTargetBits, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("GetTargetBits", "int GetTargetBits(void)", GetTargetBits, module, 1);
}

void __ecereUnregisterModule_ecdefs(struct __ecereNameSpace__ecere__com__Instance * module)
{

}

