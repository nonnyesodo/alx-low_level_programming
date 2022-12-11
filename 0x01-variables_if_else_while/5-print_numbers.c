#include <stdio.h>

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

	printf("/n");
	return (0);
}
