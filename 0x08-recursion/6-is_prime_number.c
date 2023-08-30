#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check for primality
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int _is_prime_helper(int n, int i);
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - helper function to check for primality
 * @n: number to check for primality
 * @i: current divisor to try
 *
 * Return: 1 if n is prime, otherwise 0
 */
int _is_prime_helper(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, i + 1));
}
