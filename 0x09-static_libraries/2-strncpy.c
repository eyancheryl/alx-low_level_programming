#include "main.h"

/**
 * _strncpy - program that copie s a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);
{
int d = 0;

while (d < n && src[d] != '\0')
{
dest[d] = src[d];
d++;
}
dest[b] = '\0';
d++;
}
return (dest);
}
