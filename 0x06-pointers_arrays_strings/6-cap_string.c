#include "main.h"
/**
 * cap_string - Function Prototype
 * Description - apitalizes all words of a string
 * @s : String to be changed
 * Return: Pointer to the string
 */
char *cap_string(char *str)
{
	int a;
	int length = strlen(str);

	for (a = 0; a < length; a++)
	{
		if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
		if (str[a - 1] == ' ' || str[a - 1] == '\t' ||
				str[a - 1] == '\n' || str[a - 1] == ',' ||
				str[a - 1] == ';' || str[a - 1] == '.' ||
				str[a - 1] == '!' || str[a - 1] == '?' ||
				str[a - 1] == '"' || str[a - 1] == '(' ||
				str[a - 1] == ')' || str[a - 1] == '{' ||
				str[a - 1] == '}')
					*str[a] = *str[a] - 32;
		}
	}
	return (str);
}
