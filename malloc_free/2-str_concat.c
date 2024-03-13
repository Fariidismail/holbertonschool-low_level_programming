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
	int size = 1;
	int i = 0;
	char * result;

	while (*s1 != '\0')
	{
		s1++;
		size++;
	}

	while (*s2 != '\0')
	{
		s2++;
		size++;
	}
    
    	result = (char *)malloc(size * sizeof(char));
    
    	while (*s1 != '\0')
	{
		result[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0')
	{
		result[i] = *s2;
		i++;
		s2++;
	}

	result[i] = '\0';

	return (result);
}
