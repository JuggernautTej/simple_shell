#include "shell.h"

/**
 * _strlen - a function that returns the length of a string.
 * @strg: the string.
 * Return: the string length.
 */
int _strlen(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _strlen(strg + 1));
}

/**
 * _strncmp - a function that compares the strings based on the number of
 * characters.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * @x: The number of characters to compare.
 * Return: Characters based on the comparison.
 */
int _strncmp(char *s1, char *s2, size_t x)
{
while (x > 0)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
x--;
}
return (0);
}

/**
 * _strspn - A function that gets the length of a prefix substrings.
 * @s: pointer to string.
 * @accept: pointer to the control string.
 * Return: value of the new character string.
 */
unsigned int _strspn(char *s, char *accept)
{
int x, y;
unsigned int length = 0;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
length++;
break;
}
}
if (s[x] != accept[y])
{
return (length);
}
}
return (length);
}
