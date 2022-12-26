/*
1.13. Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em
ordem crescente.
*/

#include <stdio.h>

int main(void){
    int numeros[3] = {75, 65, 92};
    int vetor[3];
    if(numeros[0] > numeros[1] && numeros[0] > numeros[2]){
        
    }
   if(numeros[1] > numeros[2] && numeros[1] > numeros[0]){
        numeros[0] = numeros[1];
    }
    else if(numeros[2] > numeros[1] && numeros[2] > numeros[0]){
        numeros[0] = numeros[2];
    }
    printf("%d\n", numeros[0]);
    /*

    for(int i = 0; i < 3; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &numeros[i]); 
    }
  
    */
   int maior;
    for(int i = 0; i < 3; i++){
        if(numeros[i] > numeros[i+1]){
            maior = numeros[i+1];
            break;
        } else{
              
        }
        
    }
    printf("%d\n", maior);

    
  

    return 0;
}