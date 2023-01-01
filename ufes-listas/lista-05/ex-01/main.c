#include <stdio.h>
/*
1.1. Crie um programa em linguagem C que leia o arquivo palavra.dat, contendo uma única string, e imprima
na tela a palavra contida neste arquivo.
*/
int main(void){
    int n;
    char vetor[12];
    FILE *arquivo = fopen("palavra.dat", "r");
    fscanf(arquivo, "%s", vetor);
    for(int i = 0; i < 12; i++){
        printf("%c", vetor[i]);
    }
    printf("\n");
    fclose(arquivo);
    return 0;
}