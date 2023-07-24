#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)

{
int temp;

/* Store the value pointed to by a in a temporary variable */
temp = *a;

/* Assign the value pointed to by b to a */
*a = *b;

/* Assign the value in the temporary variable to b */
*b = temp;
}
