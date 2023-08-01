#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string containing characters to be searched for in s.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *accept_ptr = accept;

while (*accept_ptr)
{
if (*s == *accept_ptr)
return (s);

accept_ptr++;
}

s++;
}

return (NULL);
}
