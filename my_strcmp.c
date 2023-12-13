#include "main.h"
/**
* _strcmp - compares two strings
* @s1: is the first string pointer to be compared
* @s2: is the second string pointer to be compared
*
* Return: Always 0 (success)
*/
int _strcmp(char *s1, char *s2)
{
int x;
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
x = *s1 - *s2;
return (x);
}
