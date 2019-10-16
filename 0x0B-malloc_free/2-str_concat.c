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
	char *concat = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL || s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}

	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
