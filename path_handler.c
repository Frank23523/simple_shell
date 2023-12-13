#include "main.h"

/**
 * _getpath - search and retrieve path
 * @input: command
 *
 * Return: full path of command, else NULL
*/

char *_getpath(char *input)
{
	char *path_env, *full_path, *dir;
	int i;
	struct stat st;
	/* if command is alread path */
	for (i = 0; input[i]; i++)
	{
		if (input[i] == '/')
		{
			if (stat(input, &st) == 0) /* if path exits */
				return (_strdup(input));

			return (NULL);
		}
	}
	/* if user unset path (can't get directories) */
	path_env = my_getenv("PATH");
	if (path_env == NULL)
		return (NULL);
	/* try handle the path */
	dir = my_strtok(path_env, ":");
	while (dir)
	{
		full_path = malloc(_strlen(dir) + _strlen(input) + 2);
		if (full_path != NULL)
		{
			_strcpy(full_path, dir);
			_strcat(full_path, "/");
			_strcat(full_path, input);
			if (stat(full_path, &st) == 0)
			{
				free(path_env);
				return (full_path);
			}
			free(full_path);

			dir = my_strtok(NULL, ":");
		}
	}
	free(path_env);
	return (NULL);
}
