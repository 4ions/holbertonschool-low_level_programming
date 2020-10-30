#include "lists.h"
/**
*print_list - print list a elements of a list_t
*@h: data from list
*
*Return: size_t of the list
*/
size_t print_list(const list_t *h)
{
    unsigned int size = 0;

    while (h != NULL)
    {
    if (h->str != 0)
    {
    printf("[%i] %s\n", h->len, h->str);
    }
    else
    {
    printf("[0] (nill)\n");
    }
    h = h->next;
    size++;
    }
    return (size);
}