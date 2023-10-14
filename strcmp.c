#include "shell.h"

/**
 * _strcmp - function to compare string length
 * @str1: string one
 * @str2: string two
 * Return: integer
*/
int _strcmp(char *str1, char *str2)
{
	int i = 0, strlen1, strlen2;

	if (str1 == NULL || str2 == NULL)
		return (-1);
	strlen1 = _strlen(str1);
	strlen2 = _strlen(str2);
	if (strlen1 == strlen2)
	{
		while (str1[i])
		{
			if (str1[i] != str2[i])
				return (-1);
			i++;
		}
		return (0);
	}
	return (-1);
}
