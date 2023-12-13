#include "main.h"

/**
 * execute_command - execute command using fork
 * @command: user input and it's arguments
 * @argv: argument array
 * @index: command index
 *
 * Return: exit status
*/

int execute_command(char **command, char **argv, int index)
{
	char *full_path;
	pid_t child_pid;
	int child_status;

	full_path = _getpath(command[0]);
	if (full_path == NULL)
	{
		printerror(argv[0], command[0], index);
		free_array(command);
		return (127);
	}

	child_pid = fork();
	if (child_pid == 0)
	{
		if (execve(full_path, command, environ) == -1)
		{
			free(full_path);
			free_array(command);
		}
	}
	else
	{
		waitpid(child_pid, &child_status, 0);
		free_array(command);
		free(full_path);
	}
	return (WEXITSTATUS(child_status));
}
