#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    printf("%d", print_last_digit(98));
    printf("%d", print_last_digit(0));
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
