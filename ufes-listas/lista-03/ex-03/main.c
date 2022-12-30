#include <stdio.h>
#include <math.h>
/*
Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3)
e ~v = (v1; v2; v3). O programa deve calcular o módulo de cada um dos dois vetores da seguinte forma
|~u| =
√
u1
2 + u2
2 + u3
2 e |~v| =
√
v1
2 + v2
2 + v3
2. Ao final, o programa deve imprimir quais são os
valores do módulo de cada um dos dois vetores recebidos |~u| e |~v|. Inclua a biblioteca math.h
e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz
quadrada.
*/
int main(void){

    float vetor1[3], vetor2[3], moduloVetor1, moduloVetor2;

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 1: ");
        scanf("%f", &vetor1[i]);

    }

    for(int i = 0; i < 3; i++){
        printf("Digite um número do vetor 2: ");
        scanf("%f", &vetor2[i]);
    }
   
    for(int i = 0; i < 3; i++){
        moduloVetor1 += sqrt(pow(vetor1[i], 2));
        moduloVetor2 += sqrt(pow(vetor2[i], 2));
    }
    printf("Módulo do primeiro vetor é: %f\n", moduloVetor1);
    printf("Módulo do segundo vetor é: %f\n", moduloVetor2);
    return 0;
}