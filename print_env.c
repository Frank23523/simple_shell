#include "main.h"
/**
* print_env - prints env vars to stdout
* @command: array of command tokens
* @status: pointer to shell status
*/
void print_env(char **command, int *status)
{
int i = 0;
while (environ[i])
{
write(1, environ[i], _strlen(environ[i]));
write(1, "\n", 1);
i++;
}
free_array(command);
*status = 0;
}
