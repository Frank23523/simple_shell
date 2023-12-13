#include "main.h"
/**
* _strlen - returns the length of a string
* @s: is the variable made pointer
* Return: length of string
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
