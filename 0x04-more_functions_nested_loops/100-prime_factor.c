#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 * Return: the largest prime factor
 */

long largest_prime_factor(long n)
{
long factor = 2, largest_prime = 0;

while (n > 1)
{
if (n % factor == 0)
{
largest_prime = factor;
n = n / factor;
while (n % factor == 0)
n = n / factor;
}
factor++;
}
return (largest_prime);
}


/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
long number = 612852475143;
long result = largest_prime_factor(number);

printf("%ld\n", result);

return (0);
}
