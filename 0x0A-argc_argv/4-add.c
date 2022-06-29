#include <stdio.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Error, 1 - If one number contains symbols that are not digits,
 *	0 - If no number is passed to the program.
 */
int main(int argc, char *argv[])
{
	int n, d, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}
	printf("%d\n", sum)

	return (0)
}
