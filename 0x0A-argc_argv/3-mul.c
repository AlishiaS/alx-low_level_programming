#include <stdio.h>
/**
 * main - multilpies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (o);
}
