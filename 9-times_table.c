#include "main.h"

/**
 * times_table - esta funcion imprime la tabla de multiplicar 9, comenzando con 0
 * @character
 * return int
*/
void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            int resultado = i * j;

            if (j == 0)
            {
                _putchar(resultado + '0');
            }
            else if (resultado < 10)
            {
                _putchar(' ');
                _putchar(' ');
                
                _putchar(resultado + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(resultado / 10 + '0');
                _putchar(resultado % 10 + '0');
            }

            if (j < 9)
            {
                _putchar(',');

            }
            else
            {
                _putchar('\n');
            }
        }
    }
}