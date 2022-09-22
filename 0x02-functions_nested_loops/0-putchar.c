#include "main.h"

/*
 *  main - a program that prints '_putchar'
 *
 *  Return: return 0
 */

int main(void)
{
	char string[8] = "_putchar";
	int i;

	for (i = 0; i < string.length; i++)
	{

		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
