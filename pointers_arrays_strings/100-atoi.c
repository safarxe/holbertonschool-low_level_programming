#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	if (!found_digit)
		return (0);

	if (sign == -1)
	{
		if (result > (unsigned int)INT_MAX + 1)
			return (INT_MIN);
		return ((int)(-result));
	}
	else
	{
		if (result > (unsigned int)INT_MAX)
			return (INT_MAX);
		return ((int)result);
	}
}
