#include "main.h"

/**
 * read_input - reads user's input
 *
 * Return: string containing user input, else NULL
*/

char *read_input(void)
{
	char *user_input = NULL;
	size_t input_length = 0;
	ssize_t bytesRead;

	if (isatty(1))
	{
		write(1, "$ ", 2);
	}

	bytesRead = my_getline(&user_input, &input_length, stdin);
	if (bytesRead == -1)
	{
		free(user_input);
		return (NULL);
	}

	return (user_input);
}
