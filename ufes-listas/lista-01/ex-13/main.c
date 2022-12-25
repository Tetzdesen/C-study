/*
1.13. Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em
ordem crescente.
*/

#include <stdio.h>

int main(void){
    int numeros[3];

    for(int i = 0; i < 3; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &numeros[i]); 
    }

    for(int i = 0; i < 3; i++){
        if(numeros[i] > numeros[i+1]){
            
        }
    }


    return 0;
}