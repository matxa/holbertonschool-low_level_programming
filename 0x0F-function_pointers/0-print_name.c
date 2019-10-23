#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/**
 * print_name - function that prints a name
 * @name: name array
 * @f: function pointer
 * Return: nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		if (name)
			f(name);
	}

}
