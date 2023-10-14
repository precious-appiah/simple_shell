#include "shell.h"

/**
 * _argv - function that creates an array
 * @line: parameter
 * Return: char
*/

char **_argv(char *line)
{
	char *token;
	size_t arg_count;
	int count = 0;
	char **argv;

	arg_count = _argc(line);
	arg_count++;
	argv = malloc(sizeof(char *) * arg_count);
	token = strtok(line, " ");
	while (token)
	{
		argv[count] = token;
		token = strtok(NULL, " ");
		count++;
	}
	argv[count] = NULL;
	return (argv);
}
