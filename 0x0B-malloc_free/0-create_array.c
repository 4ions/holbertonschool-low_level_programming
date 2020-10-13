#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create an array of chars
 *@size: size of array
 *@c: character
 *
 *Return: Char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;/**verificar el tamaño y moverse en size,tiene el mismo tipo*/
	char *s; /** puntero donde se guardaran los datos*/

	if (size <= 0)
		return (0);/** Return NULL si es menor que 0*/

	s = malloc(sizeof(char) * size); /**Asignar todos los char al puntero creado*/

	if (s == 0)
		return (0);/** lo mismo que el otro if*/

	for (i = 0; i < size; i++)/**asignar cada caracter introducido*/
		*(s + i) = c;

	*(s + i) = '\0';/**En la ultima posicion del for asignar el nulo*/

	return (s);
}
