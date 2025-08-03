
#include "main.h"
#include <string.h>
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
