#include <stdlib.h>
#include <stdio.h>

/**
*main - main block
*description:print alphabet in lower case
*and then in uppercase, followed by a new line
*Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);

}
