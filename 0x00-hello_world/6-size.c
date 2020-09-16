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
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

return (0);
}
