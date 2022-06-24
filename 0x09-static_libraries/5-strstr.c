#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strstr - Function Prototype
 * Description - locates a substring
 * @haystack: string to search
 * @needle: substring to be searched
 * Return:  pointer to the beginning of the located substring,
 *             or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a, k = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (a = 0; needle[a]; a++)
			{
				if (haystack[i + a] == needle[a])
					k = 1;
				else
					k = 0;
			}
		}
		if (k == 1)
			return (haystack + i);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
