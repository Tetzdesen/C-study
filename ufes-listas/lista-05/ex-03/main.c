/*
1.3. Crie um programa em linguagem C que leia o arquivo real.dat, contendo um único número real, e
imprima na tela o número contido neste arquivo.
*/
#include <stdio.h>

int main(void){
    float numero;
    FILE *arquivo = fopen("real.dat","r");

    fscanf(arquivo, "%f", &numero);

    printf("O número real contido no arquivo é: %f\n", numero);
    fclose(arquivo);
    return 0;
}