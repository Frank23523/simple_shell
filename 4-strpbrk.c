#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: searched string
 * @accept: contains characters to be searched
 *
 * Return: pointer matche in accept, else 0
 */

char *_strpbrk(char *s, const char *accept)
{
	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
