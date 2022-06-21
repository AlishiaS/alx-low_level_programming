#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	srand((unsigned int)(time(NULL)));
	int i;

	char pass[12];

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;

		char capLetter = 'A' + (rand() % 26);

		pass[i + 2] = capLetter;

		char letter = 'a' + (rand() % 26);

		pass[i + 3] = letter;

		printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
	}
	printf("\n\n");
}
