#include "main.h"

/**
 * factorial - Calculates the factorial of a number recursively.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of the number. If n is lower than 0, return -1.
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
