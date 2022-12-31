#include <stdio.h>

typedef struct tRelogio
{
    int hora;
    int minuto;
    int segundos;
}tRelogio;


int main(void){
    tRelogio relogio;
    printf("Digite um inteiro para sua hora: ");
    scanf("%d", &relogio.hora);
    
    printf("Digite um inteiro para o minuto: ");
    scanf("%d", &relogio.minuto);

    printf("Digite um inteiro para segundos: ");
    scanf("%d", &relogio.segundos);
 
    printf("Hora: %d:%d:%d\n", relogio.hora, relogio.minuto, relogio.segundos);
    return 0;
}