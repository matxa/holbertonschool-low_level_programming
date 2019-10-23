#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_name - function that prints a name
 * @name: name array
 * @(*f)(char *): function pointer
 * Return: nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f = &print_name_as_is;
}
