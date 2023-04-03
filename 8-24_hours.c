#include <unistd.h>
/**
 * jack_bauer - esta funcion imprime cada hora y minuto del dia de Jack Bauer desde las 00:00 hasta las 23:59
 * @character
 * return int
*/
void jack_bauer(void){

    int hora, minuto;

    for(hora = 0; hora < 24; hora++){
        for(minuto = 0; minuto < 60; minuto++){
            _putchar((hora / 10) + '0');
            _putchar((hora % 10) + '0');
            _putchar(':');
            _putchar((minuto / 10) + '0');
            _putchar((minuto % 10) + '0');
            _putchar('\n');
        }
    }
}