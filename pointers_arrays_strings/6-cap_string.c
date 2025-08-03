#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Description: Separators of words are: space, tabulation,
 * new line, ',', ';', '.', '!', '?', '"', '(', ')', '{', and '}'.
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int j;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	i++;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == sep[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				break;
			}
		}
		i++;
	}

	return (str);
}

