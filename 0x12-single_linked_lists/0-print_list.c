#include "list.h"
/**
*print_list - print list a elements of a list_t
*@h: data from list
*
*Return: size_t of the list
*/
size_t print_list(const list_t *h)
{
    unsigned int len = 0;

    while (h != NULL)
    {
    if (h->str != 0)
    printf("[%i] %s\n", h->size, h->str);
    else
    printf("[0] (nill)\n");
    h = h->next;
    len++;
    }
    return (len);
}