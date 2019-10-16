#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *str_concat - concatinate
 * @s1: 1st string
 * @s2: 2ns string
 * Return: concatination
 */

char *str_concat(char *s1, char *s2)
{
	char *concat = malloc(strlen(s1) + strlen(s2));

	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
