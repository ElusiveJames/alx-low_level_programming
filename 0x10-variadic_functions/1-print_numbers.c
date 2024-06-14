#include "variadic_functions.h"
/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: number of arguments
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	int next;

	va_start(list, n);
	while (i < n)
	{
		next = va_arg(list, int);
		printf("%d", next);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
