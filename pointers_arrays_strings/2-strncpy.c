#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Description: This function copies at most n bytes of src to dest.
 * If src is less than n bytes long, the remainder of dest is filled
 * with null bytes.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

