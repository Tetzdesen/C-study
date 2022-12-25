/*
1.7. Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é múltiplo
de 7 ou não.
*/
#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if((numero % 7) == 0){
        printf("Seu número é múltiplo de 7. \n");
    } else {
         printf("Seu número não é múltiplo de 7. \n");
    }
}