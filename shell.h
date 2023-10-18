#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
void prompt(void);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
int _argc(char *str);
extern char **environ;
char **_argv(char *line);
char *_duplicate(char *str);
void signal_handler(int signum);
void _builtin(char **line, char ***argv, char **dup_str);

#endif
