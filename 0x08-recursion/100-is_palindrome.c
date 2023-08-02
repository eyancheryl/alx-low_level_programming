#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
*/

int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome recursively.
 * @s: The string to check.
 *
 * Return: 1 if the string is palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);

return (is_palindrome_helper(s, 0, len - 1));
}
