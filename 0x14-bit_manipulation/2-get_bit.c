#include "main.h"

/**
 * get_bit - returns the volue of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, indices starts from 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
