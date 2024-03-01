#include "main.h"
/**
 * _strlen - length of string
 * @a : value
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
        	counter++;
    	}
	return counter;
}
