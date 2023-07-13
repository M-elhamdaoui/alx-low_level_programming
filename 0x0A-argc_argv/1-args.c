#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
