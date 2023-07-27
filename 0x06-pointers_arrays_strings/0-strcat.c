#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

/** Find the end of the dest string */
while (*dest_end != '\0')

dest_end++;
}

/** Append src to dest */
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}

/** Add a terminating null byte to the end of the concatenated string */
*dest_end = '\0';

return (dest);
}
