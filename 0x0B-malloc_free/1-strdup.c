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
	size_t size;
	char *dup;

	size = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

<<<<<<< HEAD
<<<<<<< HEAD
	if ((dup = malloc (size)) == NULL)
		return (NULL);
=======
	for (i = 0; i < n; i++)
	{
		sum += *(str + i);
	}

	printf("%d", sum);
>>>>>>> parent of f5bd683 (The woman who has no imagination has no wings)
=======
	if ((dup = malloc (size)) == NULL)
		return (NULL);
>>>>>>> parent of 9f0bec9 (The woman who has no imagination has no wings)

	(void)memcpy(dup, str, size);

	return (dup);
}
