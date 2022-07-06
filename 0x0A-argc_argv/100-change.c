#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minmum number of coins
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Error, 1 - If  number of arguments passedis not exactly 1,
 *	0 - If no number is passed to the program.
 */
int main(int argc, char *argv[])
{
	int cents;
	int Coins = 0;

	if (argc != 2)
	{
		prinf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		Coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}

		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}

		if ((cents - 5) >= 0)
		{
			 cents -= 5;
			 continue;
		}

		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n",Coins);

	return (0);
}
