#include "main.h"
/**
 * string_toupper - Function Prototype
 * Description - changes all lowercase letters of a string to uppercase
 * @s : String to be changed
 * Return: Pointer to the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
