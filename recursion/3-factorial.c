#include "main.h"
/**
 * factorial - puts factorial
 * @n: number
 * Return: int
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n > 0)
	{
		n = n * factorial(n - 1);
	}
	else
		return (-1);

	return (n);
}
