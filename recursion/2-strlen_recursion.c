#include "main.h"
/**
 * _strlen_recursion - putlength
 * @s : string
 * return : int
 */
int _strlen_recursion(char *s)
{
	int counter = 1;

	if (*s != '\0')
	{
		counter += _strlen_recursion(s + 1);
		return (counter);
	}
	else
	{
		return (0);
	}
}
