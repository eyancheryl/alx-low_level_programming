#include "main.h"

/**
 * _memcpy - function that copies mem area
 * @dest : mem where is stored
 * @src: mem where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
int d = 0;
int j = n;
for (; d < j; d++)
{
dest[d] = src[j];
n--;
}
return (dest);
}
