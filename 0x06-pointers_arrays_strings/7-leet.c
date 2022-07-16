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
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[i] == s1[b] || s[i] == S2[b])
			{
				s[i] = s3[b];
				break;
			}
		}
	}
	return (s);
}
