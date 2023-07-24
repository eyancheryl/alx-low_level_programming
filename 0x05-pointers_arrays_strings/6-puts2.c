#include "main.h"

#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 *        character, followed by a new line.
 * @str: Pointer to the string to be printed.
 */

void puts2(char *str)
{
int i = 0;

/* Loop through the string */
while (str[i] != '\0')
{
/* Print the character at the current index */
putchar(str[i]);

/* Skip the next character (every other character) */
i += 2;
}

/* Print a new line character after printing every other character */
putchar('\n');
}
