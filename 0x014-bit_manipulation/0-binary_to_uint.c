/**
  *binary_to_uint -  convert from binary to integers
  *@b: binary string
  *Return:  a decimal number
  */
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, idx;

	if (b == NULL)
		return (0);
	for (idx = 0; *(b + idx) != '\0'; idx++)
	{
		if (*(b + idx) != '0' && *(b + idx) != '1')
		{
		return (0);
		}
		sum = (sum * 2) + (*(b + idx) - '0');
	}
	return (sum);
}
