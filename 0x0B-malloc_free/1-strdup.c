#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *_strdup - returns a pointer to a new string, a duplicate of the string str
 * @str: string to be copied
 * Returns: NULL if str = NULL,
 *	a pointer to the duplicated string,
 *	NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a;
	int n;

	if (s == NULL)
		reurn (NULL);

	for (n = 0; str[n] != '\0'; n++)
		;

	s = (char *)malloc(n + 1 * sizeof(char));

	if (s != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
			s[a] = str[a];
	}else
	{
		return (NULL);
	}
	s[a] = '\0';
	return (s);
}
