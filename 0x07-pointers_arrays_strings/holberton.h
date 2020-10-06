#ifndef _MENSET_H
#define _MENSET_H
char *_memset(char *s, char b, unsigned int n);
#endif

#ifndef _MEMCPY_H
#define _MENCPY_H
char *_memcpy(char *dest, char *src, unsigned int n);
#endif

#ifndef _STRCHR_H
#define _STRCHR_H
char *_strchr(char *s, char c);
#endif

#ifndef _STRSPN_H
#define _STRSPN_H
unsigned int _strspn(char *s, char *accept);
#endif

#ifndef _STRPBRK_H
#define _STRPBRK_H
char *_strpbrk(char *s, char *accept);
#endif

#ifndef _STRSTR_H
#define _STRSTR_H
char *_strstr(char *haystack, char *needle);
#endif

#ifndef _PRINT_CHESSBOARD_H
#define _PRINT_CHESSBOARD_H
void print_chessboard(char (*a)[8]);
#endif

#ifndef _putchar_H
#define _putchar_H
int _putchar(char c);
#endif
