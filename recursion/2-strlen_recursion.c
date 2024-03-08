#include "main.h"
/**
 * _strlen_recursion - putlength
 * @s : string
 * return : length of string
 */

int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    
    /* Recursively call _strlen_recursion with the next character in the string */
    return 1 + _strlen_recursion(s + 1);
}
