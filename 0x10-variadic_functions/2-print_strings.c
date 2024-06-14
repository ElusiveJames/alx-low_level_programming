#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: string to be printed between strings
* @n: number of arguments
* @...: variable number of arguments
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *next;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		next = va_arg(list, char *);
		if (next == NULL)
			printf("(nil)");
		else
			printf("%s", next);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
