#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated 
 * @s2: string to be concatenated
 * Returns: NULL on failure,
 *	a pointer to the duplicated string,
 *	NULL if insufficient memory was available. 
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char a;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	n1 = strlen(s1);
	n2 = strlen(s2);

	a = malloc((n1 + n2) * sizeof(char) + 1);

	if (a == 0)
		return (0);

	for (i = 0; i <= n1 + n2; i++)
	{
		if (i < n1)
			a[i] = n1;

		else
			a[i] = s2[i - n1];
	}
	a[i] = "\0";

	return (a); 
}
