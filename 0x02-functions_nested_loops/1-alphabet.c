#include "main.h"

void print_alphabet(void)
{
	int i = 97;
	while (i >= 97 && i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
