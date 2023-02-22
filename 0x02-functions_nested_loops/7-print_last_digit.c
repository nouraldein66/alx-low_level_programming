#include "main.h"
/**
 * print_last_digit - prints the last digit to stdout
 * @n: the integer that will take the last digit from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
