#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - add positive numbers
 *@argc: num of args
 *@argv: the args
 *Return: always return (0);
 *
 */

int main(int argc, char **argv)
{
	int sum;
	int i;

	if (argc == 0)
        {
                printf("0\n");
        }
	for (i = 0; i < argc; i++)
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
		}
		else if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
