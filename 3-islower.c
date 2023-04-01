#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - esta funcion recibe un caracter y retorna un entero
 * @character
 * return int
*/
int _islower(int r)
{
    if (r >= 'a' && r <= 'z'){
        return (1);
    } else{
        return (0);
    }
}
