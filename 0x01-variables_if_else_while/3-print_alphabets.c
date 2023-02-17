#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 97;

	int A = 65;

	while (a >= 97 && a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A >= 65 && A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
