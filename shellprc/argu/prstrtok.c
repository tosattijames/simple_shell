#include <string.h>
#include <stdio.h>

int main (int ac, char **av)
{
	const char *delim = "'";
	char *token;
	int i = 1;

	//token = strtok(*av, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		printf(" %s\n", token);
	}
}
