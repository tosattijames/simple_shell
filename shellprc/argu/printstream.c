#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(size_t ac, char **av)
{
	int numchars;
	size_t bufsize = 1050;
	char *buf;
	int i = 0, n = 0;


	buf = (char *)malloc(bufsize);
	if (buf == NULL)
	{
		dprintf(2, "malloc fail");
		return(-1);
	}
	printf("$ ");

	numchars = getline(&buf, &bufsize, stdin);

	printf("%s", buf);
	free(buf);
	return(0);
}
