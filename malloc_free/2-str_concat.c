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
    
    	result = (char *)malloc(100 * sizeof(char));

    	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

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
