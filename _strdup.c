#include "main.h"

/**
 * _strdup - duplicates a string
 * @s: string to duplicate
 *
 * Return: pointer to duplicated str, else NULL
*/

char *_strdup(const char *s)
{
	char *p;
	int i = 0, length = 0;

	if (s == NULL)
		return (NULL);

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s = s - length;

	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	while (i <= length)
	{
		p[i] = s[i];
		i++;
	}

	return (p);
}
