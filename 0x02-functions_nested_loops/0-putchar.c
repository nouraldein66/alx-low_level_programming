#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	char c[8] = "_putchar";

	for (i = 0; i < 8; ++i)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
