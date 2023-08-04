#include "main.h"

/**
 * _puts - program to print string to stdout
 * @str: string to be printed
 * _putchar print a new line
 */

void _puts(char *str);
{
while (*str)
_putchar (*str++);

_putchar('\n');
}
