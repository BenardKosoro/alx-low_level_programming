#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The characetr to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set approapriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
