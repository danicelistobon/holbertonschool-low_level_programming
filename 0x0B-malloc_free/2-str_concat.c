#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
char *cr;
int c = 0, d = 0, f = 0, g = 0, t;

if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
    
for (*(s1 + c) != '\0')
{
;
c++;
}
for (*(s2 + d) != '\0')
{
;
d++;
}
    
cr = malloc(t * sizeof(char));

if (cr == NULL)
{
return (NULL);
}
    
for (; f < (c + d + 1); f++)
{
if (f < c)
*(cr + f) = *(s1 + f);
else
*(cr + f) = *(s2 + g++);
}

return (cr);
}
