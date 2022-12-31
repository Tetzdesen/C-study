/*
1.8. Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Se o usuário digitar os valores fora da faiza de valores aceita, o programa deve solicitar que o usuário
digite os valores novamente, porém no intervalo correto. Após receber os dois conjuntos de valores,
o programa deve armazená-los em duas variáveis do tipo tRelogio. Após armazenado, o programa
deverá calcular se o primeiro valor digitado de tRelogio representa um horário anterior ao segundo
valor digitado de tRelogio. Ao final, o programa deve imprimir qual dod dois valores de tRelogio
representa um horário anterior.

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
    
    if((relogio1.hora >= relogio2.hora) && (relogio1.minuto >= relogio2.minuto) && (relogio1.segundos >= relogio2.segundos)){
        printf("Horário anterior: %d:%d:%d\n", relogio2.hora, relogio2.minuto, relogio2.segundos);
    } else{
         printf("Horário anterior: %d:%d:%d\n", relogio1.hora, relogio1.minuto, relogio1.segundos);
    }
    return 0;
}
