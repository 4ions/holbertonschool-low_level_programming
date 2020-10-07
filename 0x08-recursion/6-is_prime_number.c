#include "holberton.h"
/**
 *checkprime - check is the number is prime
 *@a: number to check
 *@b: divisor
 *
 *Return: int
 */
int checkprime(int a, int b)
{
	if (a == 1 || a * -1 == 1)
		return (0);
	if (a % b == 0 && a != 2)
		return (0);
	else if (b > a / 2)
		return (1);
	else
		return (checkprime(a, b + 1));
}

/**
 *is_prime_number - verify is the number is prime number
 *@n: number to check
 *
 *Return: int
 */
int is_prime_number(int n)
{
	return (checkprime(n, 2));
}


