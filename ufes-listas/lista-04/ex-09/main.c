/*
1.9. Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Após receber os dois conjuntos de valores, o programa deve armazená-los em duas variáveis do tipo
tRelogio. Após armazenado, o programa deverá calcular quanto tempo existe entre os dois valores
registrados nas duas variáveis tRelogio. Ao final, o programa deve imprimir qual foi a o valor calculado.

*/
#include <stdio.h>

typedef struct tRelogio
{
    int hora;
    int minuto;
    int segundos;
}tRelogio;

int main(void){
    tRelogio relogio1, relogio2;
    int tempo = 0;
    do
    {
        printf("Digite um inteiro para sua hora: ");
        scanf("%d", &relogio1.hora);
        
        printf("Digite um inteiro para o minuto: ");
        scanf("%d", &relogio1.minuto);

        printf("Digite um inteiro para segundos: ");
        scanf("%d", &relogio1.segundos);
    } while ((relogio1.hora < 0 || relogio1.hora > 23) || (relogio1.minuto < 0 || relogio1.minuto > 59) || (relogio1.segundos < 0 || relogio1.segundos > 59));

    do
    {
        printf("Digite um inteiro para sua hora: ");
        scanf("%d", &relogio2.hora);
        
        printf("Digite um inteiro para o minuto: ");
        scanf("%d", &relogio2.minuto);

        printf("Digite um inteiro para segundos: ");
        scanf("%d", &relogio2.segundos);
    } while ((relogio2.hora < 0 || relogio2.hora > 23) || (relogio2.minuto < 0 || relogio2.minuto > 59) || (relogio2.segundos < 0 || relogio2.segundos > 59));
    
    if((relogio1.hora >= relogio2.hora) || (relogio1.minuto >= relogio2.minuto) || (relogio1.segundos >= relogio2.segundos)){
        tempo += (((relogio1.hora - relogio2.hora) * 3600) + ((relogio1.minuto - relogio2.minuto) * 60) + (relogio1.segundos - relogio2.segundos));

    } else{
         tempo += (((relogio2.hora - relogio1.hora) * 3600) + ((relogio2.minuto - relogio1.minuto) * 60) + (relogio2.segundos - relogio1.segundos));
 
    }
    printf("O tempo de diferença é: %d segundos\n", tempo);
    return 0;
}
