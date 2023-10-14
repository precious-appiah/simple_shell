#include "shell.h"
/**
 * _getline - Read a line from the input stream.
 * Return: The number of characters read, or -1 if an error occurs.
 * @main:  Entry point of the program.
 * @ac: Number of command-line arguments.
 * @argv: Array of command-line arguments.
*/
int main(int ac, char **argv)
{
	char *prompt = " $ ";
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t read;

/* declaring void variables */
(void)ac;
(void)argv;

printf("%s", prompt);

read = getline(&lineptr, &n, stdin);
if (read != -1)
{
printf("%s\n", lineptr);
}
else
{
printf("Error reading input.\n");
}

free(lineptr);
return (0);
}
