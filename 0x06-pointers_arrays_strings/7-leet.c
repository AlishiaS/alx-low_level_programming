#include "main.h"
#include <stdio.h>
/**
 * leet  - Function Prototype
 * Description - encodes a string into 1337
 * @s : String to be encoded
 * Return: Pointer to the string
 */
char *leet(char *s)
{
	int i, b;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[i] == s1[b] || s[i] == S1[b])
			{
				s[i] = s2[b];
				break;
			}
		}
	}
	return (s);
}
