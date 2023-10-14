#include "shell.h"

/**
 * _strlen - function to return len of str
 * @str: string to be checked
 * Return: an integer
*/

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (str[len])
		len++;
	return (len);
}
