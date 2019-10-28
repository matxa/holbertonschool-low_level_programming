#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: strings
 */

void print_all(const char * const format, ...)
{
	unsigned int i, flag;
	char *str;
	va_list pa;

	flag = 0;
	i = 0;
	va_start(pa, format);
	while (format[i] != '\0')
	{
		if (flag)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(pa, int));
			break;
		case 'i':
			printf("%i", va_arg(pa, int));
			break;
		case 'f':
			printf("%f", va_arg(pa, double));
			break;
		case 's':
			str = va_arg(pa, char*);
			if (str)
				printf("%s", str);
			break;
			printf("(nil)");
			break;
		default:
			flag = 0;
			i++;
			continue;
		}
		flag = 1;
		i++;
	}
	va_end(pa);
	printf("\n");
}
