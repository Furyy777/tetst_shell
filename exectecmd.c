#include "shell.h"
/**
 * _executecmd - Executes a command with arguments.
 *
 * @command: Array of command and arguments.
 * @argv: Array of program name and arguments.
 *
 * Return: Exit status of the child process.
 */
int _executecmd(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			freearray2D(command);
			exit(127);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearray2D(command);
	}
	return (WEXITSTATUS(status));
}
