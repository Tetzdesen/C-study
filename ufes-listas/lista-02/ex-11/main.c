/*
1.11. Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar um número inteiro. O programa deve imprimir todos os números inteiros de 1
até o número informado pelo usuário contando de 3 em 3, quando terminar de imprimir os números o
programa deve terminar.
*/

#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if(numero > 0){
        for(int i = 1; i <= numero; i += 3){
            printf("%d ", i);
        }
    } else{
        for(int i = 1; i >= numero; i -= 3){
            printf("%d ", i);
        }
    }
  
      printf("\n");
    return 0;
}