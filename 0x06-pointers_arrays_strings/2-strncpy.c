#include "main.h"

/**
 * _strncpy - Copies the first n bytes of the source string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

/** Copy up to n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/** If the source string is shorter than n, pad the destination */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
