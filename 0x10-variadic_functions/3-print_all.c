#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: strings
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int flag = 0;
	char *str;
	va_list pa;

	va_start(pa, format);

	while (format[i] && format)
	{
		flag = 1;
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
			if (str)
			{
				str = va_arg(pa, char*);
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			flag = 0;
			i++;
			continue;
		}
		if (flag && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(pa);
	printf("\n");
}
