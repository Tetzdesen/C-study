#include <stdio.h>

typedef struct tRelogio
{
    int hora;
    int minuto;
    int segundos;
}tRelogio;


int main(void){
    tRelogio relogio;
    relogio.hora = 13;
    relogio.minuto = 45;
    relogio.segundos = 00;
    printf("Hora: %d:%d:%d0\n", relogio.hora, relogio.minuto, relogio.segundos);
    return 0;
}