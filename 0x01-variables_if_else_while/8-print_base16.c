#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		putchar(i);
		i++;
	}
	int a;

	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
