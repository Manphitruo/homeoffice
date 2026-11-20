#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	printf("--- Command Line Input ---\n");
	printf("argc: %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	printf("\n");

	
	return (0);
}