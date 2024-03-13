#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
 * str_concat - concatenates two strings
 * @s1 - string
 * @s2 - string
 *
 * Return : char
 */
char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1);
	
	if(result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
