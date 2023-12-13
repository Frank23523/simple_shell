#include "main.h"

/**
 * my_getline - custom getline function
 * @lineptr: pointer to buffer where user input will be stored
 * @n: initial size of buffer
 * @stream: input stream
 *
 * Return: number of characters read, else -1
*/

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
	static char buffer[READ_SIZE];
	static int position, size;
	ssize_t char_read = 0, i = 0;

	if (lineptr == NULL || n == NULL)
		return (-1);

	*lineptr = realloc(*lineptr, *n + READ_SIZE);
	if (*lineptr == NULL)
		return (-1);

	while (1)
	{
		if (position >= size)
		{
			position = 0;
			size = read(fileno(stream), buffer, READ_SIZE);
			if (size <= 0)
				return (-1);
		}

		char_read = buffer[position++];
		if (char_read == '\n' || char_read == '\0')
			break;

		(*lineptr)[i++] = char_read;

		if ((size_t)i >= *n)
		{
			*n += READ_SIZE;
			*lineptr = realloc(*lineptr, *n + READ_SIZE);
			if (*lineptr == NULL)
				return (-1);
		}
	}

	(*lineptr)[i] = '\0';

	return (i);
}
