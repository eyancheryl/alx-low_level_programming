#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed.
 * @dest: Pointer to the buffer where the string is to be copied.
 * @src: Pointer to the string to be copied.
 *
 * Return: The pointer to the destination buffer (dest).
*/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

/* Copy each character from src to dest, including the null terminator */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

/* Add the null terminator to the end of the copied string */
*dest = '\0';

/* Return the pointer to the destination buffer */
return (dest_start);
}
