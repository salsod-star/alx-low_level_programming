#include "main.h"

/*
 * main - print out all alhaphets in lowercase
 *
 * Return: return 0
 */

void print_alphabet(void)
{
	int a = 97;

	for (; a <= 122; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
