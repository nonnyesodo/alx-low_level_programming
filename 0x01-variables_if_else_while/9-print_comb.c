#include <stdio.h>

/**
*main - main block
*description:prints all possible combinations of single-digit numbers
*Return: 0
 */

int main(void)
{
	int numb;

	for (numb = '0' ; numb <= '9' ; numb++)
	{
		putchar(numb);

		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
