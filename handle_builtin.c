#include "main.h"

/**
 * handle_builtin - handles built-in commands
 * @command: user input and it's arguments
 * @argv: argument array
 * @status: pointer to shell status
 * @index: index of current command
*/

void handle_builtin(char **command, char **argv, int *status, int index)
{
	/* check for exit command */
	if (_strcmp(command[0], "exit") == 0)
	{
		exit_shell(command, argv, status, index);
	}

	/* check for env command */
	else if (_strcmp(command[0], "env") == 0)
	{
		print_env(command, status);
	}
}
