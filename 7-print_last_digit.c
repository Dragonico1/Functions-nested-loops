#include <unistd.h>/**
 * _print_last_digit - esta funcion el ultimo digito de un entero
 * @iny
 * return int
*/


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