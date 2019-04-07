#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main  - prints tokenized stdin
 * Return: Return 0 on success, or 1 if buffer is NULL
 */

int main(void)
{
	char *buffer;
	size_t bufsize = 100;
	char *ptr;
	char delim[] = " ";

	buffer = (char *) malloc(bufsize);

	if (buffer == NULL)
		exit(1);

	printf("$");

	while (getline(&buffer, &bufsize, stdin) != EOF)
	{
		ptr = strtok(buffer, delim);    /** Tokenize input **/

		if (ptr != NULL)
		{
			while (ptr != NULL)
			{
				printf("%s", ptr);
				ptr = strtok(NULL, delim);
			}
		}

		printf("$");
	}

	free(buffer);
	return (0);
}
