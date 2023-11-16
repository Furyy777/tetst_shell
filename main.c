#include "shell.h"

/**
* main - Simple Shell main fuction
* @ac: Count of arguments
* @av: Arguments
* Return: 0 on success, 1 on erro
*/
int main(int ac, char **av)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;

	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL) /* reache EOF ctr + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		free(line);
		command = tokenizer(line);
		if (!command)
			continue;

		status = _executecmd(command, av);
	}
}
