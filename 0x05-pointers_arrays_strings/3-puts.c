#include "main.h"

#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 */

void _puts(char *str)
{
/* Loop through the string and print each character */
while (*str != '\0')
{
/* Use the write system call to print a character to stdout */
write(1, str, 1);
str++;
}

/* Print a new line character after the string */
write(1, "\n", 1);
}
