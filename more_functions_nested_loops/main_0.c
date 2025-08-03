#include "main.h"
#include <stdio.h>

/**
 * main - check the code for digit checker.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 32; c <= 126; c++)
	{
		printf("%c: %d\n", c, _isdigit(c));
	}
	return (0);
}
