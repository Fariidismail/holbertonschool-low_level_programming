#include "main.h"
/**
 * factorial - puts factorial
 * @n: number
 * Return: int
 */
int factorial(int n)
{
	int sum = n;

	if (n != 0)
	{
		sum *= factorial(n - 1);
		return (sum);

	}
	else
	{
		return (-1);
	}
}
