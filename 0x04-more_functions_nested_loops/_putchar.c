#include "main.h"
#include <unlstd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and error is set approapriately,
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
