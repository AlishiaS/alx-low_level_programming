#include "main.h"
/**
 * string_toupper - Function Prototype
 * Description - changes all lowercase letters of a string to uppercase
 * @s : String to be changed
 * Return : :Pointer to the s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] -= 32;
		}
		i++;
	}
	return s;
}
