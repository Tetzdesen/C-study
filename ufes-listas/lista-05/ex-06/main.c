#include <stdio.h>
/*
1.6. Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e escreva no arquivo diferencas.dat a diferença entre cada dois números consecutivos
da sequência contida neste arquivo.
*/
int main(void){
    int vetor[20], diferenca;
    FILE *arquivo = fopen("seqinteiros.dat", "r");
    FILE *arquivo2 = fopen("diferencas.dat", "w");
    for(int i = 0; i < 20; i++){
        fscanf(arquivo, "%d", &vetor[i]);
    }
    //  1 - 0
    // 3 - 2 

    // 
    for(int i = 1, j = 0; i < 20; i += 2, j += 2){
       diferenca = vetor[i] - vetor[j]; 
       fprintf(arquivo2, "%d ", diferenca);
 
    }

    printf("\n");
    fclose(arquivo);
    fclose(arquivo2);
    return 0;
}