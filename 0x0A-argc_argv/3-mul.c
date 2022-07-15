#include <stdio.h>
/**
 * main - multilpies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if two arguments are passed, else 0.
 */
int main(const int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

<<<<<<< HEAD
<<<<<<< HEAD
	printf("%d\n", result)
=======
	printf("%d\n", result);

>>>>>>> parent of 50787ce (Neither irony nor sarcasm is argument)
=======
>>>>>>> parent of 15bf4de (Neither irony nor sarcasm is argument)
	return (o);
}
