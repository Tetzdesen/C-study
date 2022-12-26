/*1.13. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um
número inteiro positivo. O programa deve imprimir a soma de todos os números inteiros de 1 até o
número informado pelo usuário, quando terminar de imprimir os números o programa deve terminar. */

#include <stdio.h>
//register
int main(void){
    int num, soma=0;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num > 0){
        for(int i = 1; i <= num; i++){
            soma += i;
        }
    } else{
        for(int i = 1; i >= num; i--){
            soma += i;
        }
    }
    printf("A soma é: %d\n", soma);
    printf("\n");

    return 0;
}