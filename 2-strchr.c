#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: s if found, else 0
 */

char *_strchr(const char *s, char c)
{
	do {
		if (*s == c)
			return ((char *)s);
	} while (*s++);

	return (0);
}
