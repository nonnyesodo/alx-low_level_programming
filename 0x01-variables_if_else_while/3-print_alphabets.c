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
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
