#include <unistd.h>
/**
 * _putchar - esta funcion recibe un caracter y retorna un entero
 * @character
 * return int
*/
int _isalphar(int r)
{
    if (r >= 'a' && r <= 'z' || r >= 'A' && r <= 'Z'){
        return (1);
    } else {
        return (0);
    }
}
