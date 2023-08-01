#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be changed.
 * @to: The string to be pointed to by s.
*/

void set_string(char **s, char *to)
{
*s = to;
}
