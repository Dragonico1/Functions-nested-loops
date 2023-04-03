#include <unistd.h>
/**
 * _isalphar - esta funcion retorna un 1 si el caracter recivido es minuscula o mayuscula y un 0 en cso contrario
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
