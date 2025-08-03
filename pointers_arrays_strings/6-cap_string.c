/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalize = 1;
    char sep[] = " \t\n,;.!?\"(){}";
    int j;

    while (str[i])
    {
        if (capitalize && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');

        capitalize = 0;
        for (j = 0; sep[j]; j++)
        {
            if (str[i] == sep[j])
            {
                capitalize = 1;
                break;
            }
        }
        i++;
    }

    return (str);
}
