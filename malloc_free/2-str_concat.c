#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char * result;
   	char * s1adress = s1;
	char * s2adress = s2;
	int size = 1;


	while(*s1 != '\0')
    	{
        	size++;
        	s1++;
    	}	

	s1 = s1adress;

	while (*s2 != '\0')
	{
		size++;
		s2++;
	}

	s2 = s2adress;

    	result =malloc(size * sizeof(char));

    	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result[i] = '\0';

	return (result);
}
