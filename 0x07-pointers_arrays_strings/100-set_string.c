#include "main.h"
#include <stdio.h>
/**
 * set_string - Function Prototype
 * Description - sets the value of a pointer to a char
 * @s: pointer
 * @to: char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
