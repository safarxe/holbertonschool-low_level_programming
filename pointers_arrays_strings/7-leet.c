/**
 * leet - Encodes a string into 1337 (leet)
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (s[i])
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = replace[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
