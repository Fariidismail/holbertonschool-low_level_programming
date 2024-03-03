#include "main.h"
#include <string.h>
/**
 * *_strncpy -  copies strings.
 *
 *@dest: string 1
 *
 *@src: string 2
 *@n: number
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return start;
}

