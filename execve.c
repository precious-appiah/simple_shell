#include "shell.h"
int main(void)
{
	char *args[] = {"/bin/ls", "-l", NULL};
	char *envp[] = {NULL};

pid_t pid = fork();

if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
if (execve(args[0], args, envp) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
return (0);
}
