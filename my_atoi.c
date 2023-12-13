#include "main.h"

/**
 * _atoi - convert string to integer
 * @str: string to be converted
 *
 * Return: integer value from string
*/

int _atoi(char *str)
{
	int integer_value = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		integer_value *= 10;
		integer_value += (str[i] - '0');
		i++;
	}

	return (integer_value);
}
