#include <main.h>
/*
 * main -entry point
 *
 * @c: character
 *
 * Return: if digit 1 else 0
 */
int _isdigit(int c)
{
	if(c>-1 && c<10)
	{
		return 1;
	}
	return 0;
}
