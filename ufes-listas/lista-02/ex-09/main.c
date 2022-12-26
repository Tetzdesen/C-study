/*
1.9. Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar 9 números reais. Quando o usuário digitar os 9 números o programa deve
terminar.
*/
#include <stdio.h>

int main(void){
    float vetor[9];

    for(int i = 0; i < 9; i++){
        printf("Digite um número: ");
        scanf("%f", &vetor[i]);
    }

    printf("Parabéns, você digitou os 9 números. Fim do programa. \n");
    return 0;
}