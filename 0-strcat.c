#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: first string pointer parameter
* @src: second string pointer parameter
*
* Return: the pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *x = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (x);
}

