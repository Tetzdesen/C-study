/*
1.6. Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é par ou
ímpar.
*/

#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if((numero % 2) == 0){
        printf("O número %d é par. \n", numero);
    } else {
        printf("O número %d é ímpar. \n", numero);
    }
    return 0;
}