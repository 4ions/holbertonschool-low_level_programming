#include<stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
int intType;
float floaotType;
long int longType;
long long int longlongType;
char charType;
printf("Size of a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longType));
printf("Size of a long long int: %ld bytes\n", sizeof(longlongType));
printf("Size of a float: %ld bytes\n", sizeof(charType));

return (0);
}
