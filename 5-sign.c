#include <unistd.h>
#include "main.h"
/**
 * print_sign - esta funcion retorna un 1 si el entero es mayor a 0, 0 si es zero y -1 si es menor a 0
 * @int
 * return int
*/
int print_sign(int n)
{
    if (n > 0) {
        _putchar('+');
        return (1);
    } else if (n == 0) {
        _putchar('0');
        return (0);
    } else {
        _putchar('-');
        return (-1);
    }

}
