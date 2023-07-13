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
	int i;

	if (argc >= 1)
	{
		for (i = 0 ; i <= argc - 1; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
