#include "main.h"

#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
int length = 0;

/* Calculate the length of the string */
while (*s != '\0')
{
length++;
s++;
}

/* Move back to the last character (excluding null terminator) */
s--;

/* Print the characters in reverse order */
while (length > 0)
{
putchar(*s);
s--;
length--;
}

/* Print a new line character after the reversed string */
putchar('\n');
}
