#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: The string to be printed in reverse.
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1); /** Move to the next character recursively */
_putchar(*s); /** Print the current character after returning from recursion */
}
