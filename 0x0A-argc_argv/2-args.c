#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of program
 * @argc: Count arguments
 * @argv: The argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
