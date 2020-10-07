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
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

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
	if (n <= 1)
		return (0);
	return (checkprime(n, 2));
}


