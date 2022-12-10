#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - main block
 *Description:print all single digit number of base 10
 *starting from 0, followed by new line
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}

	putchar("/n");
	return (0);
}
