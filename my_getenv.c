#include "main.h"

/**
 * my_getenv - gets value of an env variable
 * @var: name of env variable
 *
 * Return: variable, else NULL
*/

char *my_getenv(char *var)
{
	char *env_var, *key, *value, *result;
	int i;

	for (i = 0; environ[i]; i++)
	{
		env_var = _strdup(environ[i]);
		key = my_strtok(env_var, "=");

		if (_strcmp(key, var) == 0)
		{
			value = my_strtok(NULL, "\n");
			result = _strdup(value);
			free(env_var);
			return (result);
		}

		free(env_var);
	}
	return (NULL);
}
