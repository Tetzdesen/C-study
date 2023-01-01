#include <stdio.h>
/*
1.4. Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e imprima na tela todos os números da sequência contida neste arquivo.
*/
int main(void){
    int vetor[20];
    FILE *arquivo = fopen("seqinteiros.dat", "r");

    for(int i = 0; i < 20; i++){
        fscanf(arquivo, "%d", &vetor[i]);
    }

    for(int i = 0; i < 20; i++){
        printf("%d ", vetor[i]);
    }


    printf("\n");
    fclose(arquivo);
    return 0;
}