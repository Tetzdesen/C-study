#include <stdio.h>
#include <math.h>
/*
1.4. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um
número inteiro positivo que represente o tamanho de um vetor (N). Após ter recebido o valor de N, o
programa deve criar um vetor de números reais com N posições ~u = (u1; u2; u3; . . . ; uN ) . Em seguida
o programa deve solicitar que o usuário digite N números reais. O programa deve calcular o módulo
do vetor da seguinte forma |~u| =
√
u1
2 + u2
2 + · · · + uN

2. Ao final, o programa deve imprimir qual é
o valor do módulo do vetor recebido |~u|. Inclua a biblioteca math.h e utilize as funções pow e
sqrt para calcular respectivamente o ao quadrado e a raiz quadrada.
*/
int main(void){

    int tamanho;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &tamanho);


    float vetor1[tamanho], moduloVetor1;


    for(int i = 0; i < tamanho; i++){
        printf("Digite um número do vetor 1: ");
        scanf("%f", &vetor1[i]);
        moduloVetor1 += sqrt(pow(vetor1[i], 2));

    }
   

    printf("Módulo do primeiro vetor é: %f\n", moduloVetor1);

    return 0;
}