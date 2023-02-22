#include "main.h"
/**
 * print_last_digit - prints the last digit to stdout
 * @n: the integer that will take the last digit from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
		num = -num;
	_putchar('0' + num);
	return (num);
}
