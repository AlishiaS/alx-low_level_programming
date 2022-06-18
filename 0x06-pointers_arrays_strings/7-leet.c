#include "main.h"
#include <stdio.h>
/**
 * leet  - Function Prototype
 * Description - encodes a string into 1337
 * @s : String to be encoded
 * Return: Pointer to the string to be encoded
 */
char *leet(char *s)
{
	int i, b;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char L[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[i] == l[b] || s[i] == L[b])
			{
				s[i] = num[b];
				break;
			}
		}
	}
	return (s);
}
