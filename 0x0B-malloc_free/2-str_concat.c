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
	char *concat = malloc(sizeof(s1) + sizeof(s2));

	if (s1 == NULL || s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
