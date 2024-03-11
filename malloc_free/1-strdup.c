#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: stsing
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *str2;
	int size;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;

	str2 = malloc(size * sizeof(char));

	for(i = 0; i<size; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
