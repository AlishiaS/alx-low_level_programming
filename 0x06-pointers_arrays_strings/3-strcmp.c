#include "main.h"
/**
 * _strcmp - Function Prototype
 * Description - compares two strings
 * @s1 : String 1
 * @s2 : String 2
 * Return : flag
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 1;
		}
		s1++;
		s2++;
	}

	if (flag == 0)
		return (0);
	else
		return (1);
}

