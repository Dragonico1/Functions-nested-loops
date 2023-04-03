#include <unistd.h>
#include <stdio.h>
/**
 * _islower - esta funcion retorna un 1 si el caracter recivido es minuscula y un 0 si es mayuscula
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
