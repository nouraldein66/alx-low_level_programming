#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 97;

	while (a >= 97 && a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
