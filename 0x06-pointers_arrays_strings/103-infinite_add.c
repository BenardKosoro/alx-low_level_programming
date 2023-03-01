#include "main.h"


/**
 * infinite_add - a function that adds two numbers.
 * @n1: number to add
 * @n2: number to add
 * @r: The buffer to store the result
 * @size_r: the buffer size
 *
 * Return: if r can store the sum - a pointer to the result
 * if r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
	for (index = 0; *(n2 + index); index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
