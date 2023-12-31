#include "shell.h"

/**
 * _strcat - A function that concatenates strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to concatenanted string.
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}

/**
 * _strcmp - A function that compares strings.
 * @s1: Destination string.
 * @s2: Source string.
 * Return: Integer indicating the result of he comparison.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

/**
 * _strcpy - a function that copies a string from a source to a destination.
 * @dest: destination string.
 * @src: source string.
 * Return: the copied string.
 */
char *_strcpy(char *dest, char *src)
{
char *result = dest;
if (dest == NULL || src == NULL)
return (NULL);
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of a string.
 * @strg: The string.
 * Return: a pointer to the duplicated string or NULL.
 */
char *_strdup(char *strg)
{
int x, len;
char *p;
len = _strlen(strg);
if (strg == NULL)
return ((char *)NULL);
else
{
p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
return ((char *)NULL);
else
{
for (x = 0; x < len; x++)
{
p[x] = strg[x];
}
p[len] = '\0';
return (p);
}
}
}
