/*
1.12. Crie um programa em linguagem C que receba três números inteiros e imprima na tela qual é o maior
deles.
*/

#include <stdio.h>

int main(void){
    int maior = 0;
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