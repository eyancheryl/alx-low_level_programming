#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;

/** Find the end of the dest string */
while (*dest_end != '\0')
{
dest_end++;
}

/** Append src to dest, up to n bytes or until src is exhausted */
while (*src != '\0' && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}

/** Add a terminating null byte to the end of the concatenated string */
*dest_end = '\0';

return (dest);
}
