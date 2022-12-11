#include <stdlib.h>
#include <stdio.h>

/**
 *main - main block
 *description:prints the lowercase alphabet in reverse
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	
	putchar('\n');
	return (0);
}
