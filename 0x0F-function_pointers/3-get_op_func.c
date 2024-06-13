#include "3-calc.h"
#include <string.h>
/**
* get_op_func - fuction that return a pointer to operation
* specified operator frrom terminal
* @s: operator from terminal input
*
* Return: NULL if operator not found
* otherswise pointer to fuction based on operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);/*return pointer to opertion to e permode*/
		i++;
	}
	return (NULL);
}
