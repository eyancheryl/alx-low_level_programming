#include "main.h"

#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers to be printed.
 * @n: The number of elements to be printed.
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

/* Print comma and space for all elements except the last one */
if (i != n - 1)
printf(", ");
}

/* Print a new line character after printing the elements */
printf("\n");
}
