#include "shell.h"

/**
 * prompt - function to print prompt in interactive mode
 * Return: Nothing
*/

void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
}

/**
 * main - main function
 * Return: an integer
*/
int main(void)
{
	char *buffer = NULL, **argv, *dup_str;
	size_t n = 0;
	ssize_t read;
	pid_t pid;

	while (1)
	{
		prompt();

		read = getline(&buffer, &n, stdin);
		if (read == -1)
		{
			free(buffer);
			free(argv);
			free(dup_str);
			exit(0);
		}
		if (buffer[read - 1] == '\n')
			buffer[read - 1] = '\0';
		pid = fork();
		if (pid == -1)
		{
			perror("An error occured");
			free(buffer);
		}
		if (pid == 0)
		{
			dup_str = _duplicate(buffer);
			argv = _argv(dup_str);

			if (!argv[0])
				break;
			if ((execve(argv[0], argv, environ)) == -1)
				perror(argv[0]);
		}
		else
		{
			wait(NULL);
			free(buffer);
			buffer = NULL;
		}

	}

	free(buffer);
	free(argv);
	free(dup_str);
	return (0);
}
