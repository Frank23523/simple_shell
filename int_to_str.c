#include "main.h"

/**
 * int_to_str - converts an integer to string
 * @n: int to be converted
 *
 * Return: a string
*/

char *int_to_str(int n)
{
	char buf[20];
	int i = 0;

	if (n == 0)
	{
		buf[i++] = (n % 10) + '0';
	}
	else
	{
		while (n > 0)
		{
			buf[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	buf[i] = '\0';
	reverse_string(buf, i);

	return (_strdup(buf));
}
