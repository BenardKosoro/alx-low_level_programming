#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
		printf("%i\n", argc - 1);
	return (0);
}
