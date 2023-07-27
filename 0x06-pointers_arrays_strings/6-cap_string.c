#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
*/

char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;

while (*ptr != '\0')
{
if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr = *ptr - ('a' - 'A'); /** Convert to uppercase by subtracting the ASCII */
}

if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' ||
*ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' ||
*ptr == ')' || *ptr == '{' || *ptr == '}')
{
capitalize_next = 1; /** Next character should be capitalized */
}
else
{
capitalize_next = 0; /** Next character should not be capitalized */
}

ptr++;
}

return (str);
}
