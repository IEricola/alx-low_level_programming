#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting point of action
 * Description: Prints all possible
 * different combo of two digits
 * Numbers must be separated by, followed by a space
 * The two digits must be different
 * 01 an 10 are considered the same combination of digits 0 an 1
 * Print only the smallest combinationof two digits
 * Numbers should be printed in ascending order, of two digits
 * Can only use the putchar function
 * (Every other function (printf, puts, etc.) is forbidden)
 * You can only use any putchar five times maximum in your code
 * You are nit allowed to use any variable of type char
 * All your code should be in yje main function
 *
 * Return: Is always 0, if successful
 */

int main(void)
{
	int c;

	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}

		d++;
	}
	putchar('\n');
	return (0);
}
