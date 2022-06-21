#include "main.h"
#include <stdio.h>
/**
 * *rot13 - Function Prototype
 * Description - encodes a string using rot13
 * @s : String to be encoded
 * Return: Pointer to s
 */
char *rot13(char *)
{
	int i = 0, a;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
				'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
				'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
				'k', 'l', 'm', 'n', 'o', 'p','q', 'r', 's', 't', 'u', 'v',
				'w', 'x', 'y', 'z'};

	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S, 'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w',
				'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
				'j', 'k', 'l', 'm'};

	while (s[i])
	{
		for (a = 0; a < 52; a++)
		{
			if (str[i] == alphabet[i])
			{
				str[i] = rot13key[a];
				break;
			}
		}
		i++;
	}
	return (s);
}
