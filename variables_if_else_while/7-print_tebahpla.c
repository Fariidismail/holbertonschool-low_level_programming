#include <stdio.h>

/**
 * main - Entry point
 *
 * This function generates a random number and determines if it's positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'z';
	
	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);

}
