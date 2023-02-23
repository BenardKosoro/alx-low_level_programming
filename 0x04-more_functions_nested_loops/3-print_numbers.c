#include "main.hj"

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: no return
 */

void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
