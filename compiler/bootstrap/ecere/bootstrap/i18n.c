/* Code generated from eC source file: i18n.ec */
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
struct __ecereNameSpace__ecere__com__Instance * dataType;
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
struct __ecereNameSpace__ecere__com__Instance * dataType;
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
struct __ecereNameSpace__ecere__com__Instance * dataType;
int type;
int offset;
int memberID;
struct __ecereNameSpace__ecere__sys__OldList members;
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;
int memberOffset;
int structAlignment;
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
struct __ecereNameSpace__ecere__com__Instance * dataType;
int memberAccess;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__SerialBuffer;

struct __ecereNameSpace__ecere__com__SerialBuffer
{
unsigned char *  _buffer;
unsigned int count;
unsigned int _size;
unsigned int pos;
} __attribute__ ((gcc_struct));

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

static struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__moduleMaps;

extern char *  __ecereNameSpace__ecere__sys__GetEnvironment(char *  envName, char *  envValue, int max);

extern char *  strcpy(char * , const char * );

extern char *  strstr(const char * , const char * );

extern int strcasecmp(const char * , const char * );

extern char *  strchr(const char * , int);

extern int sprintf(char * , char * , ...);

extern struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__sys__FileOpen(char *  fileName, int mode);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__IteratorPointer;

struct __ecereNameSpace__ecere__com__IteratorPointer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__MapIterator;

struct __ecereNameSpace__ecere__com__MapIterator
{
struct __ecereNameSpace__ecere__com__Instance * container;
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;
} __attribute__ ((gcc_struct));

extern int printf(char * , ...);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Map_TPL_String__String___;

extern void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__String_;

int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__File;

struct __ecereNameSpace__ecere__com__Instance * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map(struct __ecereNameSpace__ecere__com__MapIterator * this);

void __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(struct __ecereNameSpace__ecere__com__MapIterator * this, struct __ecereNameSpace__ecere__com__Instance * value);

extern struct __ecereNameSpace__ecere__com__Property ** __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;

unsigned int __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(struct __ecereNameSpace__ecere__com__Iterator * this, uint64 index, unsigned int create);

extern void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Iterator;

struct __ecereNameSpace__ecere__com__Iterator
{
struct __ecereNameSpace__ecere__com__Instance * container;
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;
} __attribute__ ((gcc_struct));

uint64 __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(struct __ecereNameSpace__ecere__com__Iterator * this);

void __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data(struct __ecereNameSpace__ecere__com__Iterator * this, uint64 value);

extern struct __ecereNameSpace__ecere__com__Property ** __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Seek;

void __ecereNameSpace__ecere__LoadTranslatedStrings(char * moduleName, char * name)
{
struct __ecereNameSpace__ecere__com__Instance * f;
char fileName[797];
char lcAll[256];
char language[256];
char lang[256];
char lcMessages[256];
char * locale = (((void *)0));
char genericLocale[256];

genericLocale[0] = (char)0;
if(__ecereNameSpace__ecere__sys__GetEnvironment("ECERE_LANGUAGE", language, sizeof (language)))
locale = language;
else if(__ecereNameSpace__ecere__sys__GetEnvironment("LANGUAGE", language, sizeof (language)))
locale = language;
else if(__ecereNameSpace__ecere__sys__GetEnvironment("LC_ALL", lcAll, sizeof (lcAll)))
locale = lcAll;
else if(__ecereNameSpace__ecere__sys__GetEnvironment("LC_MESSAGES", lcMessages, sizeof (lcMessages)))
locale = lcMessages;
else if(__ecereNameSpace__ecere__sys__GetEnvironment("LANG", lang, sizeof (lang)))
locale = lang;
if(locale)
{
char * dot;
char * colon;

if(language != locale)
strcpy(language, locale);
dot = strstr(language, ".");
if(dot)
*dot = (char)0;
colon = strstr(language, ":");
if(colon)
*colon = (char)0;
locale = language;
if(!(strcasecmp)(locale, "zh"))
strcpy(locale, "zh_CN");
}
if(locale)
{
char * under;

strcpy(genericLocale, locale);
under = strchr(genericLocale, '_');
if(under)
*under = (char)0;
if(!(strcasecmp)(genericLocale, "zh"))
strcpy(genericLocale, "zh_CN");
}
if(moduleName)
sprintf(fileName, "<:%s>locale/%s.mo", moduleName, locale);
else
sprintf(fileName, ":locale/%s.mo", locale);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
if(!f)
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s/LC_MESSAGES/%s.mo", moduleName, locale, name);
else
sprintf(fileName, ":locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "/usr/share/locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
if(!f && locale && (strcasecmp)(locale, genericLocale))
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s.mo", moduleName, genericLocale);
else
sprintf(fileName, ":locale/%s.mo", genericLocale);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
if(!f)
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s/LC_MESSAGES/%s.mo", moduleName, genericLocale, name);
else
sprintf(fileName, ":locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "/usr/share/locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __ecereNameSpace__ecere__sys__FileOpen(fileName, 1);
}
}
if(f)
{
unsigned int magic = 0;

((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &magic, sizeof(unsigned int), 1);
if(magic == 0x950412de || magic == 0xde120495)
{
struct __ecereNameSpace__ecere__com__Instance * textMap;
unsigned int swap = magic != 0x950412de;
unsigned int revision = 0;
unsigned int numStrings = 0;
unsigned int origStrings = 0, transStrings = 0;
unsigned int hashingSize = 0, hashingOffset = 0;
int c;

((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &revision, sizeof(unsigned int), 1);
if(swap)
((((revision) & 0x000000ff) << 24) | (((revision) & 0x0000ff00) << 8) | (((revision) & 0x00ff0000) >> 8) | (((revision) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &numStrings, sizeof(unsigned int), 1);
if(swap)
((((numStrings) & 0x000000ff) << 24) | (((numStrings) & 0x0000ff00) << 8) | (((numStrings) & 0x00ff0000) >> 8) | (((numStrings) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &origStrings, sizeof(unsigned int), 1);
if(swap)
((((origStrings) & 0x000000ff) << 24) | (((origStrings) & 0x0000ff00) << 8) | (((origStrings) & 0x00ff0000) >> 8) | (((origStrings) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &transStrings, sizeof(unsigned int), 1);
if(swap)
((((transStrings) & 0x000000ff) << 24) | (((transStrings) & 0x0000ff00) << 8) | (((transStrings) & 0x00ff0000) >> 8) | (((transStrings) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &hashingSize, sizeof(unsigned int), 1);
if(swap)
((((hashingSize) & 0x000000ff) << 24) | (((hashingSize) & 0x0000ff00) << 8) | (((hashingSize) & 0x00ff0000) >> 8) | (((hashingSize) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &hashingOffset, sizeof(unsigned int), 1);
if(swap)
((((hashingOffset) & 0x000000ff) << 24) | (((hashingOffset) & 0x0000ff00) << 8) | (((hashingOffset) & 0x00ff0000) >> 8) | (((hashingOffset) & 0xff000000) >> 24));
if(!__ecereNameSpace__ecere__moduleMaps)
__ecereNameSpace__ecere__moduleMaps = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Map_TPL_String__String___);
{
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, __ecereNameSpace__ecere__moduleMaps), it);

if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&it, (uint64)(name), 0x0))
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&it)), __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data(&it, 0));
}
__extension__ ({
struct __ecereNameSpace__ecere__com__Iterator __internalIterator = 
{
__ecereNameSpace__ecere__moduleMaps, 0
};

__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, (uint64)(((uint64)(name))), 0x1);
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data(&__internalIterator, textMap = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__String_));
});
for(c = 0; c < numStrings; c++)
{
unsigned int len = 0, offset = 0;
char * original = (((void *)0)), * translated = (((void *)0));

((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, int pos, int mode))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Seek])(f, origStrings + c * 2 * sizeof(unsigned int), 0);
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &len, sizeof(unsigned int), 1);
if(swap)
((((len) & 0x000000ff) << 24) | (((len) & 0x0000ff00) << 8) | (((len) & 0x00ff0000) >> 8) | (((len) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &offset, sizeof(unsigned int), 1);
if(swap)
((((offset) & 0x000000ff) << 24) | (((offset) & 0x0000ff00) << 8) | (((offset) & 0x00ff0000) >> 8) | (((offset) & 0xff000000) >> 24));
((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, int pos, int mode))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Seek])(f, offset, 0);
original = __ecereNameSpace__ecere__com__eSystem_New(sizeof(unsigned char) * (len + 1));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, original, 1, len + 1);
((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, int pos, int mode))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Seek])(f, transStrings + c * 2 * sizeof(unsigned int), 0);
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &len, sizeof(unsigned int), 1);
if(swap)
((((len) & 0x000000ff) << 24) | (((len) & 0x0000ff00) << 8) | (((len) & 0x00ff0000) >> 8) | (((len) & 0xff000000) >> 24));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, &offset, sizeof(unsigned int), 1);
if(swap)
((((offset) & 0x000000ff) << 24) | (((offset) & 0x0000ff00) << 8) | (((offset) & 0x00ff0000) >> 8) | (((offset) & 0xff000000) >> 24));
((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, int pos, int mode))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Seek])(f, offset, 0);
translated = __ecereNameSpace__ecere__com__eSystem_New(sizeof(unsigned char) * (len + 1));
((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(f, translated, 1, len + 1);
if(len)
{
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, textMap), it);

if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&it, (uint64)(original), 0x0))
(__ecereNameSpace__ecere__com__eSystem_Delete(translated), translated = 0);
else
__extension__ ({
struct __ecereNameSpace__ecere__com__Iterator __internalIterator = 
{
textMap, 0
};

__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, (uint64)(((uint64)(original))), 0x1);
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data(&__internalIterator, translated);
});
}
else
(__ecereNameSpace__ecere__com__eSystem_Delete(translated), translated = 0);
(__ecereNameSpace__ecere__com__eSystem_Delete(original), original = 0);
}
}
else
{
printf("Invalid format while loading %s\n", fileName);
}
(__ecereNameSpace__ecere__com__eInstance_DecRef(f), f = 0);
}
}

int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map;

int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Delete;

void __ecereNameSpace__ecere__UnloadTranslatedStrings(char * name)
{
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, __ecereNameSpace__ecere__moduleMaps), it);

if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&it, (uint64)(name), 0x0))
{
((void (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = ((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&it));

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Map->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Free])(((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&it)));
((void (*)(struct __ecereNameSpace__ecere__com__Instance *, struct __ecereNameSpace__ecere__com__IteratorPointer * i))__extension__ ({
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = __ecereNameSpace__ecere__moduleMaps;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Map->_vTbl;
})[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Delete])(__ecereNameSpace__ecere__moduleMaps, it.pointer);
}
}

char * __ecereNameSpace__ecere__GetTranslatedString(char * name, char * string, char * stringAndContext)
{
struct __ecereNameSpace__ecere__com__Instance * textMap = __ecereNameSpace__ecere__moduleMaps ? (__extension__ ({
struct __ecereNameSpace__ecere__com__Iterator __internalIterator = 
{
__ecereNameSpace__ecere__moduleMaps, 0
};

__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, (uint64)(((uint64)(name))), 0x0);
((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
})) : (((void *)0));
char * result = textMap ? (__extension__ ({
struct __ecereNameSpace__ecere__com__Iterator __internalIterator = 
{
textMap, 0
};

__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, (uint64)(((uint64)(stringAndContext ? stringAndContext : string))), 0x0);
((char *)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
})) : string;

return (result && result[0]) ? result : string;
}

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__GlobalFunction;

struct __ecereNameSpace__ecere__com__GlobalFunction;

extern struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(char *  name, char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

void __ecereRegisterModule_i18n(struct __ecereNameSpace__ecere__com__Instance * module)
{
struct __ecereNameSpace__ecere__com__Class * class;

__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ecere::LoadTranslatedStrings", "void ecere::LoadTranslatedStrings(String moduleName, char * name)", __ecereNameSpace__ecere__LoadTranslatedStrings, module, 4);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ecere::UnloadTranslatedStrings", "void ecere::UnloadTranslatedStrings(String name)", __ecereNameSpace__ecere__UnloadTranslatedStrings, module, 4);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ecere::GetTranslatedString", "char * ecere::GetTranslatedString(String name, char * string, char * stringAndContext)", __ecereNameSpace__ecere__GetTranslatedString, module, 4);
}

void __ecereUnregisterModule_i18n(struct __ecereNameSpace__ecere__com__Instance * module)
{

}

void __ecereCreateModuleInstances_i18n()
{
__ecereNameSpace__ecere__moduleMaps = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Map_TPL_String__String___);
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecereNameSpace__ecere__moduleMaps);
}

void __ecereDestroyModuleInstances_i18n()
{
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecereNameSpace__ecere__moduleMaps), __ecereNameSpace__ecere__moduleMaps = 0);
}

