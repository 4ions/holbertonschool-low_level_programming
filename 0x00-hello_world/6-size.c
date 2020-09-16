#include<stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongType;
float floatType;
printf("Size of a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longintType));
printf("Size of a long long int: %ld bytes\n", sizeof(longlongType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));

return (0);
}
