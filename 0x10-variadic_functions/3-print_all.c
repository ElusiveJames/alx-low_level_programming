#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{

	int i = 0;
	va_list list;
	char *str;
	int intg;
	float flt;
	char chr;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				chr = va_arg(list, int);
				printf("%c, ", chr);
				break;
			case 'i':
				intg = va_arg(list, int);
				printf("%i, ", intg);
				break;
			case 'f':
				flt = va_arg(list, double);
				printf("%f, ", flt);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil),");
					break;
				}
				printf("%s, ", str);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
