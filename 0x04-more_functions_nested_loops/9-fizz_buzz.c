#include <stdio.h>
/**
* main - fizz buzz test
* Return: 0 on success
*/
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i < 100)
		{
			if (i % 15 == 0)
				printf("FizzBuzz ");
			else if (i % 5 == 0)
				printf("Buzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
			else
				printf("%d ", i);
		}
		else
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
