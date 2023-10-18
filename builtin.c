#include "shell.h"

/**
 * _builtin - function to check builtin
 * @line: first parameter
 * @argv: second space param
 * @dup_str: third param
 * Return: void
*/
void _builtin(char **line, char ***argv, char **dup_str)
{
	int len, i = 0;
	char buf[] = "\n";

	if ((_strcmp((*argv)[0], "exit")) == 0)
	{
		free(*line);
		free(*argv);
		free(*dup_str);
		exit(0);
	}
	if ((_strcmp((*argv)[0], "env")) == 0)
	{
		while (environ[i])
		{
			len = _strlen(environ[i]);
			write(STDOUT_FILENO, environ[i], len);
			write(STDOUT_FILENO, buf, sizeof(buf));
			i++;
		}
		free(*line);
		free(*argv);
		free(*dup_str);
		exit(0);

	}
	return;

}
