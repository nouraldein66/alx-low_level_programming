#include "main.h"
/**
 * _isupper - checks if char is uppercase or not
 * @c: the char to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
