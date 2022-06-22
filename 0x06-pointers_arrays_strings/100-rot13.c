#include "main.h"
#include <stdio.h>
/**
 * *rot13 - Function Prototype
 * Description - encodes a string using rot13
 * @s : String to be encoded
 * Return: Pointer to s
 */
char *rot13(char *s)
{
	int a = 0, b = 0, n = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (a = 0; s[a]; a++)
	{
		n = 1;
		for (b = 0; s[a] != alpha[b] && b < 52; b++)
			n = (n * -1);
		if (s[a] == alpha[b])
			s[a] = (s[a] + (13 * n));
	}
	return (s);
}
