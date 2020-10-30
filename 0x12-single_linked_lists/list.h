#ifndef STRUCT_H
#define STRUCT_H
#include <studio.h>

/**
*struct list_s - list name
*@str: string int
*@size: size of string
*@next: node
*/

typedef struct list_s
{
char *str;
unsigned int size;
struct list_s *next;
} list_t;

size_t printlist(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
