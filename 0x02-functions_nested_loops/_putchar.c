#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Tyhe character to print
 * Return: On successmis 1.
 * On error, -1 is returned, and error is set appropriatel.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
