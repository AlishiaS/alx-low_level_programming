#include "main.h"
/**
 *  _islower - Function prototype
 *  Description -   checks for lowercase character
 *   @c: letter being tested
 *  Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

