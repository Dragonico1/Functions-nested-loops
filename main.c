#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    _print_last_digit(98);
    _print_last_digit(0);
    r = _print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}