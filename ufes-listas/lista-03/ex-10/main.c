#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
1.10. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 9 nú-
meros inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x3 posições.

Ao final, o programa deve imprimir na tela a soma dos elementos da diagonal principal 

A ordem de preenchimento das posições da matriz deve ser a sequinte:
*/
int main(void){
    int soma=0, matriz[3][3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um número inteiro: ");
            scanf("%d", &matriz[i][j]);
            if(i == j){
                soma += matriz[i][j];
            }
        }

    }
   printf("Sua matriz: \n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
    
        }

        printf("\n");

    }

    printf("A soma da diagonal principal é: %d \n", soma);

    return 0;
}