#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	i = 1;
	j = 2;
	k = 3;
	if (argc != k)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
