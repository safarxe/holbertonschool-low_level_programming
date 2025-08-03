#include "main.h"
/**
 * print_rev - Prints a string, in reverse
 * @s: Pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}

	for (rev = rev - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
