#include <stdio.h>
/**
 * main - Entry point
 * Descrbing the size of types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char %lu\n bytes", sizeof(char));
	printf("Size of an int %lu\n bytes", sizeof(int));
	printf("Size of a long int %lu\n bytes", sizeof(long int));
	printf("Size of a long long int %lu\n bytes", sizeof(long long int));
	printf("Size of a float %lu\n bytes", sizeof(float));
	return (0);
}
