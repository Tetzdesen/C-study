#include <stdio.h>
/*
1.2. Crie um programa em linguagem C que leia o arquivo inteiro.dat, contendo um único número inteiro,
e imprima na tela o número contido neste arquivo.
*/
int main(void){
    int numero;

    FILE *arquivo = fopen("inteiro.dat", "r");

    fscanf(arquivo, "%d", &numero);

    printf("O número contido no arquivo é: %d\n", numero);

    fclose(arquivo);
}