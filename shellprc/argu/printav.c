#include <stdio.h>

int main(int ac, char **av)
{
	av++;
	while (*av != NULL)
	{
		printf("%s ", *av);
		av++;
	}
	printf("\n");
	return (0);

}
