#include <stdio.h>

void print_alphabet(void);

void print_alphabet(void)
{
	int i=97;
	while (i <= 122 && i >= 97)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
}
