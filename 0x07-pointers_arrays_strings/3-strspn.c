#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to check.
 * @accept: The string containing characters to be checked for in s.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_match;
char *accept_ptr;

while (*s)
{
is_match = 0;
accept_ptr = accept;

while (*accept_ptr)
{
if (*s == *accept_ptr)
{
is_match = 1;
break;
}

accept_ptr++;
}

if (!is_match)
break;

count++;
s++;
}

return (count);
}
