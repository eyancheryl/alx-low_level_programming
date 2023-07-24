#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
char temp;
int length = 0;
int start = 0;
int end;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Set the end index to the last valid character in the string */
end = length - 1;

/* Reverse the string using two-pointer approach */
while (start < end)
{
/* Swap characters at start and end indices */
temp = s[start];
s[start] = s[end];
s[end] = temp;

/* Move the start and end pointers towards each other */
start++;
end--;
}
}
