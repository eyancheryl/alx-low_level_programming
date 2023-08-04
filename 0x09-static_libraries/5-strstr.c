#include "main.h"

/**
 * _strstr - Entry point
 * @haystack : input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle);
{
for (; *haystack != '\0'; haystack++)
{
char *d = haystack;
char *j = needle;

while (*d == *j && *j != '\0')
{
d++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
