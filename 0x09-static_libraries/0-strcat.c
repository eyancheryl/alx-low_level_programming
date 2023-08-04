#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: entered value
 * @src: enrtered value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src);
{
int d;
int j;

d = 0;
while (dest[d] != '\0')
{
d++;
}
j = 0
while (src[j] != '\0')
{

dest[d] = src[j];
d++;
j++;
}
dest[d] = '\0';
return (dest);
}
