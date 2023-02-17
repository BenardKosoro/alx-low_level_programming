#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digits */
	{
		for (ones = '0'; tens <= '9'; ones++)/*prints ones digits */
		{
			if (!((ones == tens) || (tens == hundreds) ||
						(tens > ones) || (hundres > tens)))/* eliminates repitation */
			{
				putchar(hundres);
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && hundreds == '8' &&
						tens == '8'))/*adds commas and spaces */
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
