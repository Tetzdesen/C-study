#include <stdio.h>
/*

*/
int main(void){

    float vetor1[3], vetor2[3], soma;

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 1: ");
        scanf("%f", &vetor1[i]);

    }

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 2: ");
        scanf("%f", &vetor2[i]);
    }
   
    for(int i = 0; i < 3; i++){
        soma += vetor1[i] + vetor2[i];
    }

    printf("A soma entre os vetores é: %f\n", soma);
    return 0;
}