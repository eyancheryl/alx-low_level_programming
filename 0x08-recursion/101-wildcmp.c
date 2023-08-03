#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard support.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared, can contain '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
*/

int wildcmp(char *s1, char *s2)
{
/** If both strings are empty, they are identical */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/** If the current character of s2 is '*', then try  possible combinations */
if (*s2 == '*')
{
/** Move to the next characte */
s2++;

/** If s2 becomes empty, then the remaining of s1 should also be empty */
if (*s2 == '\0')
return (1);

/** Find the next character in s1 after the first occurrence of '*' in s2 */
char (*next_s1 = s1);
while (*next_s1 != '\0' && *next_s1 != *s2)
next_s1++;

/** Recursively check all possible combinations */
return (wildcmp(next_s1, s2) || wildcmp(next_s1 + 1, s2));
}

/** If the characters in both strings match or s2 has a '?' */
if (*s1 == *s2 || *s2 == '?')
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
