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
	int n, i, sum =0;

	str = (int*) malloc(n * sizeof(int));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		sum += *(str + i);
	}

	printf("Sum =%d", sum);

	free (str);

	return (0);
}
