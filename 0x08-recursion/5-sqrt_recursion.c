#include "main.h"

/**
 * calculate_sqrt - A recursive helper function to calculate the square root.
 *
 * @n: The number for which the square root is calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root or -1 if not found.
*/

int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);

if (guess * guess > n)
return (-1);

return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number for which the square root is calculated.
 *
 * Return: The natural square root or -1 if not found.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (calculate_sqrt(n, 0));
}
