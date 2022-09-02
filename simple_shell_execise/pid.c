#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccesful!\n");
		return (1);
	}

	if (pid == 0)
	{
		sleep(10);
		printf("I am the child\n");
	}else
		wait(NULL);
		printf("I am the parent\n");

	return (0);
}
