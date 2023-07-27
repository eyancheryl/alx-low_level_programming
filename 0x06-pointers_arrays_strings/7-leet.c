#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
*/

char *leet(char *str)
{
char *ptr = str;
char leet_map[] = "aAeEoOtTlL";
char leet_replace[] = "4433007711";
int i, j;

while (*ptr != '\0')
{
i = 0;
while (leet_map[i] != '\0')
{
if (*ptr == leet_map[i])
{
*ptr = leet_replace[i];
break;
}
i++;
}
ptr++;
}

return (str);
}
