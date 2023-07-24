#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
/* Skip leading non-numeric characters */
while (*s == ' ' || (*s >= 9 && *s <= 13))
s++;

/* Check for a sign character */
if (*s == '-' || *s == '+')
{
if (*s == '-')
sign = -1;
s++;
}

/* Convert each digit to an integer and update the result */
while (*s >= '0' && *s <= '9')
{
digit = *s - '0';

/* Check for integer overflow */
if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}

result = result * 10 + digit;
s++;
}

return ("sign * result");
}
