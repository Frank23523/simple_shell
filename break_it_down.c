#include "main.h"

/**
 * break_it_down - tokenize string into arrays based on delims
 * @input: string to be tokenized
 *
 * Return: array of strings, else NULL
*/

char **break_it_down(char *input)
{
	char *token = NULL, *tmp_str = NULL, **token_array = NULL;
	int token_count = 0, i = 0;

	if (input == NULL)
		return (NULL);
	/* duplicate input to avoid modifying */
	tmp_str = _strdup(input);

	token = my_strtok(tmp_str, " \t\n"); /* extract first token using strtok */
	if (token == NULL)
	{
		free(input);
		free(tmp_str);
		return (NULL);
	}
	while (token)
	{
		token = my_strtok(NULL, " \t\n");
		token_count++; /* Count number of tokens in input */
	}
	free(tmp_str);
	/* allocated memory for token array */
	token_array = malloc(sizeof(char *) * (token_count + 1));
	if (token_array == NULL)
	{
		free(input);
		return (NULL);
	}
	/* tokenize input string and store tokens in array */
	token = my_strtok(input, " \t\n");
	while (token)
	{
		token_array[i] = _strdup(token);
		token = my_strtok(NULL, " \t\n");
		i++;
	}
	free(input);
	token_array[i] = NULL;
	return (token_array);
}
