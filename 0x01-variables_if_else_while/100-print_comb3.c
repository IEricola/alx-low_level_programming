#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting point of action
 * Description: Prints alldigit of base 10
 * starting from 0, then followed by a new line
 *
 * Return: Is always 0, if successful
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
