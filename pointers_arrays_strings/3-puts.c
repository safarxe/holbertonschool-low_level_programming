#include "main.h"
/**
 * _puts - Prints a string
 * @str: Pointer
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
