#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * This function prints all numbers from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar ('\n');

	return (0);
}
