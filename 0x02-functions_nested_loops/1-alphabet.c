#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet letters followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int i = 97;

	while (i >= 97 && i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
