#include "main.h"
/**
 * print_alphabet - esta funcion imprime la palabra juan
 * @ void
 * return nothing
*/

void print_alphabet_x10(void){
    int i;
    for(i= 0; i <=9; i++)
    {
        char letter = 'a';
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
    }
    _putchar('\n');
    }
}