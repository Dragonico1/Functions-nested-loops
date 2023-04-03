#include <unistd.h>
/**
 * _abs - esta funcion retorna el valor absoluto de un numero entero
 * @int
 * return int
*/

int _abs(int r)
{
    if (r < 0){
        return (-r);
    }else{
        return (r);
    }
}
