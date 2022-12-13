#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int c = 0;

    char letter = 'a';

    while (c <= 9)
    {
	    while (letter <= 'z')
	    {
		    _putchar(letter);
		    letter++;
	    }
	    _putchar('\n');
	    c++;
    }
		    
    return (0);
}
