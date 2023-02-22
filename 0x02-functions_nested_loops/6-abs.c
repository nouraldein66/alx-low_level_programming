#include "main.h"
/**
 * _abs - return the absolute value of n
 * @n: the variable that will be converted to absolute
 *
 * Return: n; the variable after conversion to absolute
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
