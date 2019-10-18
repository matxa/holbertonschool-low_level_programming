#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat str
 * @s1: 1st string
 * @s2: 2nd string
 * @n: n
 * Return: n
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	size_t len1, len2;
	size_t a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	if (n >= len2)
		n = len2;

	temp = malloc(sizeof(char) * (len1 + n + 1));
	if (!temp)
		return (NULL);

	for (a = 0; s1[a] < len1; a++)
		temp[a] = s1[a];
	for (b = 0; s2[b] < len2; b++)
                temp[a + b] = s1[a];
	temp[a + n + '\0'];

	return (temp + '\0');
}
