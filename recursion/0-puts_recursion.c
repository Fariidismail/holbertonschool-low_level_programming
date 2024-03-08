#include "main.h"
/*
 * _puts_recursion - print string in recursion
 * @s - string
 * return : string
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(*s);
}
