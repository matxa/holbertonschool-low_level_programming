#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: num of arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;

	va_list ps;

	va_start(ps, n);

	for (i = 0; i < n; i++)
	{
		if (arg)
		{
			arg = va_arg(ps, char*);
			printf("%s", arg);
			if (separator && i < (n - 1))
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");

	va_end(ps);
}
