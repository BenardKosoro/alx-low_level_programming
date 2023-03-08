#include "main.h"
#include <stdio.h>

/**
 * check_prime - Check if a number is prime
 * @n: the number to be checked
 * @i: the interation times
 *
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (i);
	return (check_prime(n, i + 1));
}
