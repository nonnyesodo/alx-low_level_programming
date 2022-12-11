#include <stdio.h>
/**
 * main - Entry point
 *description:prints all the numbers of base 16 in lowercase
 *followed by a new line
 * Return: 0
 */
int main(void)
{
	int numb;
	char alphab;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		putchar(numb);
	}

	for (alphab = 97 ; alphab <= 102 ; alphab++)
	{
		putchar(alphab);
	}

	putchar('\n');
	return (0);
}
