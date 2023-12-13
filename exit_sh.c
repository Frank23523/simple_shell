#include "main.h"

/**
 * exit_shell - handles shell exit
 * @command: input and it's arguments
 * @argv: argument array
 * @status: pointer to shell exit status
 * @index: index of shell
*/

void exit_shell(char **command, char **argv, int *status, int index)
{
	char *index_str;
	char illegal_num_msg[] = ": exit: Illegal number: ";

	if (command[1])
	{
		if (is_positive_number(command[1]))
		{
			*status = _atoi(command[1]);
		}
		else
		{
			index_str = int_to_str(index);

			write(2, argv[0], _strlen(argv[0]));
			write(2, ": ", 2);

			write(2, index_str, _strlen(index_str));
			write(2, illegal_num_msg, _strlen(illegal_num_msg));

			write(2, command[1], _strlen(command[1]));
			write(2, "\n", 1);

			free(index_str);
			free_array(command);

			(*status) = 2;
			return;
		}
	}

	free_array(command);
	exit(*status);
}
