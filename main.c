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
	prompt();
	return (0);
}
