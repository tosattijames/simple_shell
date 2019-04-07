#include <stdio.h>
#include <stdlib.h>

/**
 * main - print stdout of stdin
 *
 * Return: Always 0.
 */

int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 256;


	buffer = (char *)malloc(bufsize * sizeof(char));

	if( buffer == NULL)
	{
		exit(1);
	}

	printf("$");
	getline(&buffer,&bufsize,stdin);
	printf("%s",buffer);

	free(buffer);
	return(0);
}
