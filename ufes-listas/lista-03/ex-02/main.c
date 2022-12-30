#include <stdio.h>
/*
1.2. Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3)
e ~v = (v1; v2; v3). O programa deve calcular o produto vetorial dos dois vetores da seguinte forma
~r = ~u ×~v = (u2v3 − u3v2; u3v1 − u1v3; u1v2 − u2v1). Ao final, o programa deve imprimir qual é o vetor
resultante (~r) do produto vetorial dos dois vetores recebidos.
*/
int main(void){

    float vetor1[3], vetor2[3], produto;

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 1: ");
        scanf("%f", &vetor1[i]);

    }

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 2: ");
        scanf("%f", &vetor2[i]);
    }
   
    for(int i = 2; i >= 0; i--){
        produto *= (vetor1[i-1] * vetor2[i]) - (vetor1[i] * vetor2[i-1]);
    }

    printf("A soma entre os vetores é: %f\n", produto);
    return 0;
}