#include <stdio.h>

/**
 *main - main block
 *description:print all possible different combinations of two digits
 *Return: 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (m = 48 ; m <= 57 ; m++)
		{
			putchar(n);
			putchar(m);

			if ((n != 57) || (m != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
