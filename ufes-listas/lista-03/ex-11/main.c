#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
1.11. Crie um programa em linguagem C que receba duas matrizes de 3x3 posições de inteiros. O programa
deve calcular a soma das duas matrizes. Ao final, o programa deve imprimir a matriz que é o resultado
da soma das duas matrizes recebidas.
*/
int main(void){
    int soma=0, matrizA[3][3], matrizB[3][3], matrizC[3][3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um número inteiro da matriz 1: ");
            scanf("%d", &matrizA[i][j]);
            printf("Digite um número inteiro da matriz 2: ");
            scanf("%d", &matrizB[i][j]);
            matrizC[i][j] = (matrizA[i][j] + matrizB[i][j]);
        }

    }

  
   printf("Sua matriz soma é: \n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrizC[i][j]);
    
        }

        printf("\n");

    }

    return 0;
}