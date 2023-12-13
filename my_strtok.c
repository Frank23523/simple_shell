#include "main.h"

/**
 * my_strtok - implementation of strtok.
 * @str: string to be tokenized.
 * @delim: Delimiter characters.
 *
 * Return: next token in string, else NULL
 */
char *my_strtok(char *str, const char *delim)
{
	static char *saveptr;
	char *token, *next;

	if (str == NULL && saveptr == NULL)
		return (NULL);

	if (str != NULL)
		saveptr = str;

    /* Skip leading delimiters */
	while (*saveptr != '\0' && _strchr(delim, *saveptr) != NULL)
		saveptr++;

	/*If at the end of the string, return NULL*/
	if (*saveptr == '\0')
		return (NULL);

	/*Find the end of the token*/
	token = saveptr;
	next = _strpbrk(token, delim);

	if (next != NULL)
	{
		/*Null-terminate the token and update saveptr*/
		*next = '\0';
		saveptr = next + 1;
	}
	else
	{
		/*This is the last token in the string*/
		saveptr = _strchr(token, '\0');
	}

	return (token);
}
