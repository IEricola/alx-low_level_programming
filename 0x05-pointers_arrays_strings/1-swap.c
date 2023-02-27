#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to b swapped.
 * @b: The 2nd integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* this function swaps the values of two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
