#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: number of arguments
* @...: variable number of arguments
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int  i = 0;
	int next;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		next = va_arg(list, int);
		if (next == 0)
			break;
		sum += next;
		i++;
	}
	va_end(list);
	return (sum);
}
