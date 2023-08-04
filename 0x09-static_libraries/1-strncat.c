#include "main.h"

/**
 * _strncat - funtion concatenate two strings
 * by using byte n  from src
 * @dest: enterd value
 * @src: entered value
 * @n: value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);
{
int d;
int j

d = 0;
while (dest[d] != '\0')
{
d++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[d] = src[j];
d++;
j++;
}
dest[d] + '\0';
return (dest);
}
