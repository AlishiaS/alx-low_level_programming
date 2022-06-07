#include "main.h"
/**
 * _isalpha - Function prototype
 *Description: checks for alphabetic character 
 * @c: letter being tested
 * Return: 1 if lowercase or uppercase otherwise 0 
 */
int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else 
		return (0);
}
