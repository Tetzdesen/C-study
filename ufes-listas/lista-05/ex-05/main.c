#include <stdio.h>
/*
1.5. Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e imprima na tela o 1o
 ̄, 4o
 ̄, 9o
 ̄, 13o
 ̄ e 19o
 ̄ números contidos neste arquivo.
*/
int main(void){
    int vetor[20];
    FILE *arquivo = fopen("seqinteiros.dat", "r");

    for(int i = 0; i < 20; i++){
        fscanf(arquivo, "%d", &vetor[i]);
    }

    for(int i = 0; i < 20; i++){
        if(i == 0 || i == 3 || i == 8 || i == 12  || i == 18){
            printf("%d ", vetor[i]);
        }
 
    }


    printf("\n");
    fclose(arquivo);
    return 0;
}