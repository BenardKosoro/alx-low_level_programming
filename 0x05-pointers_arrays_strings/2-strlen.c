#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @str: The string to get the length of
 * Return: The length of @str
 */

int _strlen(const char *str);
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
