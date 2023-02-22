#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit to stdout
 * @n: the integer that will take the last digit from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	return _abs(n % 10);
}
