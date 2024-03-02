#include "main.h"
/*
 * _strcat - appends the src string to the dest string
 * @dest - string
 * @src - string
 * Return: char 
 **/
char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);	
}
