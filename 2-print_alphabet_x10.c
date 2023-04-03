#include "main.h"
/**
 * print_alphabet_x10 - esta funcion imprime el alfabeto de la a la z en minusculas 10 veses
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