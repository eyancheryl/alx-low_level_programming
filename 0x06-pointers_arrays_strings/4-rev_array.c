#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

/** Swap elements from start to end until they meet at the center */
while (start < end)
{
/** Swap elements */
temp = a[start];
a[start] = a[end];
a[end] = temp;

/** Move indices towards the center */
start++;
end--;
}
}
