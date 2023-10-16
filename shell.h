#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
void prompt(void);
char *_getline();
=======
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
void prompt(void);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
int _argc(char *str);
extern char **environ;
char **_argv(char *line);
char *_duplicate(char *str);

>>>>>>> ca1a8cb34e056b85b25f03c65dbb41025199d639
#endif
