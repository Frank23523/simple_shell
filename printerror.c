#include "main.h"

/**
 * printerror - error message for command not found
 * @name: name of executable
 * @command: command that was not found
 * @index: index of command
*/

void printerror(char *name, char *command, int index)
{
	char *index_str;
	char not_found_msg[] = ": not found\n";

	index_str = int_to_str(index);

	write(2, name, _strlen(name));
	write(2, ": ", 2);

	write(2, index_str, _strlen(index_str));
	write(2, ": ", 2);

	write(2, command, _strlen(command));
	write(2, not_found_msg, _strlen(not_found_msg));

	free(index_str);
}
