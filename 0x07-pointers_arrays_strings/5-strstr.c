#include <stddef.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring in haystack,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);

while (*haystack)
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;

while (*needle_ptr && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
