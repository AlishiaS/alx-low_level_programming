#include <stdio.h>
/**
 * main - prints number of arguments passed t0 program
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
