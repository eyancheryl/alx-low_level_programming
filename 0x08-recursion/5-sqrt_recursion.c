#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number whose square root is to be calculated.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root of the number if it exists, otherwise -1.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid, 

if (start > end)
return (-1);

mid = (start + end) / 2;
int midSquared = mid * mid;

if (midSquared == n)
return (mid);
else if (midSquared < n)
return (_sqrt_helper(n, mid + 1, end));
else
return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number whose square root is to be calculated.
 *
 * Return: The square root of the number if it exists, otherwise -1.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_helper(n, 0, n));
}
