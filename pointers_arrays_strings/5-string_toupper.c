/**
 * string_toupper - Converts all lowercase letters to uppercase
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *string_toupper(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        i++;
    }

    return (str);
}
