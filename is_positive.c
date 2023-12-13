#include "main.h"
/**
* is_positive_number - checks if string is positive number
* @string: string to be checked
*
* Return: 1 if string is positive, else 0
*/
int is_positive_number(char *string)
{
int i = 0;
if (string == NULL)
{
return (0);
}
while (string[i] != '\0')
{
if (string[i] < '0' || string[i] > '9')
{
return (0);
}
i++;
}
return (1);
}

