#include "main.h"
/**
 * _strcmp - Function Prototype
 * Description - compares two strings
 * @s1 : String 1
 * @s2 : String 2
 * Return : String 1 and String 2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
