#include "main.h"
/**
 * _strcmp - Function Prototype
 * Description - compares two strings
 * @s1 : String 1
 * @s2 : String 2
 * Return : first and second string
 */
int _strcmp(char *s1, char *s2)
{
	while (*first==*second)
	{
		if ( *s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	if ( *s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (-1);
}
