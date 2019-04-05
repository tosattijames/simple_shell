#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	pid_t process;

	process = getppid();
	printf("parent process id: %d\n", process);
	return(0);
}
