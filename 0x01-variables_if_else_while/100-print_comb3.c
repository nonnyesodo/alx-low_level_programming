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

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = '0' ; m <= '9' ; m++)
		{
			putchar(n);
			putchar(m);

			if ((n != '9') || (m == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
