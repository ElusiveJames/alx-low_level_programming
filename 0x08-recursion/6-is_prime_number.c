#include "main.h"

int _prime(int n, int i);
/**
* is_prime_number - Checks if a number is prime
* @n: number to evaluate
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
* _prime - Checks if a number is prime
* @n: number to evaluate
* @i: iterate number
* Return: 1 if prime, 0 if not
*/
int _prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n % i != 0)
		return (_prime(n, i + 1));
	else if (n % i == 0 && i < n)
		return (0);
	return (1);
}
