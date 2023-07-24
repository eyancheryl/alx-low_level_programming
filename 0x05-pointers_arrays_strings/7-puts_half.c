#include "main.h"

#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string.
*/

int _strlen(char *s)
{
int length = 0;

/* Loop through the string until the null terminator is reached */
while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string whose second half is to be printed.
*/

void puts_half(char *str)
{
int length = _strlen(str);
int start;

/* Calculate the starting index for the second half of the string */
start = (length + 1) / 2;

/* Print the second half of the string */
while (str[start] != '\0')
{
putchar(str[start]);
start++;
}

/* Print a new line character after printing the second half */
putchar('\n');
}
