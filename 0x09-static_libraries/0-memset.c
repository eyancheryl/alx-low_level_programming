#include "main.h"

/**
 * _memset - programms fill memory with specific value
 * @s: start adress memory
 * @b: desired value
 * @n: changed number of bytes
 *
 * Return:Cange arrays with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n);
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
