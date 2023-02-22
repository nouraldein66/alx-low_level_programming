#include "main.h"
/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			if ((i * j) >= 10)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				_putchar(',');
			}
			else
			{
				_putchar((i * j) + '0');
				_putchar(',');
			}
			if ((i * (j + 1) < 10))
				_putchar(' ');
			_putchar(' ');
		}
		if ((i * 9) >= 10)
		{
			_putchar((i * 9) / 10 + '0');
			_putchar((i * 9) % 10 + '0');
		}
		else
			_putchar((i * 9) + '0');
		_putchar('\n');
	}
}
