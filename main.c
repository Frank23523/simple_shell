#include "main.h"

/**
 * main - main function for custom shell
 * @argc: argument count
 * @argv: argument array
 *
 * Return: exit status of shell
 */

int main(int argc, char **argv)
{
	char *user_input = NULL;
	char **cmd_tokens = NULL;
	int shell_status = 0, cmd_index = 0;

	while (1)
	{
		user_input = read_input();
		if (user_input == NULL)
		{
			if (isatty(1))
			{
				write(1, "\n", 1);
			}
			return (shell_status);
		}
		cmd_index++;

		cmd_tokens = break_it_down(user_input);
		if (!cmd_tokens)
			continue;

		if (builtin_check(cmd_tokens[0]))
			handle_builtin(cmd_tokens, argv, &shell_status, cmd_index);
		else
			shell_status = execute_command(cmd_tokens, argv, cmd_index);
	}
	(void) argc;
	(void) argv;
}
