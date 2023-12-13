#include "main.h"

/**
 * builtin_check - checks if a command is a builtin command
 * @input: input to be checked
 *
 * Return: 1 if command is a builtin, else 0
*/

int builtin_check(char *input)
{
	int i;
	char *builtin_cmd[] = {"exit", "env", "sentenv", "cd", NULL};

	for (i = 0; builtin_cmd[i]; i++)
	{
		if (_strcmp(input, builtin_cmd[i]) == 0)
		{
			return (1);
		}
	}

	return (0);
}
