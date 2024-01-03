/**
  * swap_int - exchange of  pointer values
  * @a: pointer
  * @b: pointer
  */
#include "main.h"
void swap_int(int *a, int *b)
{
	int c;
	 c = *a;
	 *a = *b;
	 *b = c;
}
