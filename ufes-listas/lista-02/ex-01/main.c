/*
1.1. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve
terminar.
*/
#include <stdio.h>

int main(void){
    float numero;
    do{
        printf("Digite um número entre 0.0 e 1.0: ");
        scanf("%f", &numero);
    }while(numero < 0.0 || numero > 1.0);
    printf("Programa encerrado. \n");
    return 0;
}