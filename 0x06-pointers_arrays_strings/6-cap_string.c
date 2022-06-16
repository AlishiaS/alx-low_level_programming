#include "main.h"
#include <stdio.h>
/**
 * cap_string - Function Prototype
 * Description - apitalizes all words of a string
 * @s : String to be changed
 * Return: Pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int spaceCount = 0;

	while (s[i] != '\0')
	{
		if ((spaceCount % 2 == 1) && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		else if (s[i] == ',')
		{
			spaceCount++;
		}
		i++;
	}
}
