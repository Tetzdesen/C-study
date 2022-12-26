/*
1.8. Crie um programa em linguagem C que receba dois números inteiros e imprima na tela qual é o maior
deles.
*/

#include <stdio.h>

int main(void){
    int num1, num2;
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);

    if(num1 > num2){
        num2 = num1;
    } 
    printf("O número maior é: %d \n", num2);
    return 0;
}