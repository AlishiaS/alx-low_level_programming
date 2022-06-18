#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Function Prototype
 * Description - apitalizes all words of a string
 * @s : String to be changed
 * Return: Pointer to the string
 */
char *cap_string(char *s)
{
	int a;
	int length = strlen(s);

	for (a = 0; a < length; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (s[a - 1] == ' ' || s[a - 1] == '\t' ||
				s[a - 1] == '\n' || s[a - 1] == ',' ||
				s[a - 1] == ';' || s[a - 1] == '.' ||
				s[a - 1] == '!' || s[a - 1] == '?' ||
				s[a - 1] == '"' || s[a - 1] == '(' ||
				s[a - 1] == ')' || s[a - 1] == '{' ||
				s[a - 1] == '}')
					s[a] = s[a] - 32;
		}
	}
	return (s);
}
