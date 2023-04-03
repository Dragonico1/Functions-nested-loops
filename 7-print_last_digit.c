#include <unistd.h>


int _print_last_digit(int n)
{
    int Udigito;

    if (n < 0) 
    {
        n = -n;
    }
    Udigito = n % 10;
    _putchar('0' + Udigito);
    return Udigito;
}