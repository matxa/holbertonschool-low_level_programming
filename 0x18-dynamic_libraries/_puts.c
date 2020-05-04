#include "holberton.h"

/**
 *_puts - shows the pointer of the var
 *@s: string pointer
 *
 */

void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}
