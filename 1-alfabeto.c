#include "main.h"
/**
 * print_alphabet - esta funcion imprime el alfabeto de la a la z en minusculas
 * @ void
 * return nothing
*/
void print_alphabet(void){
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}