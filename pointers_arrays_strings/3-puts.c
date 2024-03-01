#include "main.h"
/*
 * _puts - print string
 * @strstring to print
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
