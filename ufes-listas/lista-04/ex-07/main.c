/*
1.7. Crie um programa em linguagem C que receba 3 valores inteiros, sendo
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Se o usuário digitar os valores fora da faixa de valores aceita, o programa deve solicitar que o usuário
digite os valores novamente, porém no intervalo correto. Após receber os valores, o programa deve
armazená-los na estrutura tRelogio e imprimir na tela o valor de tRelogio após armazenado.

*/
#include <stdio.h>

typedef struct tRelogio
{
    int hora;
    int minuto;
    int segundos;
}tRelogio;

int main(void){
    tRelogio relogio;
    do
    {
        printf("Digite um inteiro para sua hora: ");
        scanf("%d", &relogio.hora);
        
        printf("Digite um inteiro para o minuto: ");
        scanf("%d", &relogio.minuto);

        printf("Digite um inteiro para segundos: ");
        scanf("%d", &relogio.segundos);
    } while ((relogio.hora < 0 || relogio.hora > 23) || (relogio.minuto < 0 || relogio.minuto > 59) || (relogio.segundos < 0 || relogio.segundos > 59));

    return 0;
}
