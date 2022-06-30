#include <stdio.h>
#include <stdlib.h>
/**
 * main - multilpies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if two arguments are passed, else 0.
 */
int main(int argc, char *argv[])
{
	int m;

	(void)argv;
	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
