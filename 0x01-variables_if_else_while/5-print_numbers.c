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
	char c = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('/n');
	return (0);
}
