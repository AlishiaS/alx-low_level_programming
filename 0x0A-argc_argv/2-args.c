#include <stdio.h>
/**
 * main - prints arguments the program receives
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		 printf("%s ", argv[i]);
	}
	printf("\n");

	return (0);
}
