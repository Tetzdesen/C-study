#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
1.9. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 15 números inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x5 posi-
ções. Ao final, o programa deve imprimir na tela a matriz com 3 linhas e 5 colunas contendo os valores digitados pelo usuário.

*/
int main(void){
    int numero, matriz[3][5];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++)
        {
            printf("Digite um número inteiro: ");
            scanf("%d", &matriz[i][j]);
        }

    }
   printf("Sua matriz: \n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
    
        }

        printf("\n");

    }

 

    return 0;
}