#include "shell.h"
/**
* read_line - Reads a line of input from the user.
*
* Return: Pointer to the line read from the user.
*          NULL on failure or if no input is provided.
*/
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO))
	{

		write(STDOUT_FILENO, "$ ", 2);
		}
	n = getline(&line, &len, stdin);
	if (n == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
