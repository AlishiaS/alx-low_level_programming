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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
