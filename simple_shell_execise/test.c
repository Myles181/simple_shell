#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("my pid is %d\n", pid);
	printf("my ppid is %d\n", ppid);
	return (0);
}
