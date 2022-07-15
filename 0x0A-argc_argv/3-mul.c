#include <stdio.h>
/**
 * main - multilpies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if two arguments are passed, else 0.
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

<<<<<<< HEAD
	printf("%d\n", result)
=======
	printf("%d\n", result);

>>>>>>> parent of 50787ce (Neither irony nor sarcasm is argument)
	return (o);
}
