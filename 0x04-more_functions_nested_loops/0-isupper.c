#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @x: The character to be checked
 * Return: 1 for uppercase or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
