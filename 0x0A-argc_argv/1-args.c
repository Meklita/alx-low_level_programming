#include "main.h"

/**
 * main - prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 *  Description: prints number of arguments
 *  Return: 0 for code success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
