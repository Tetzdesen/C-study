#include <stdio.h>


int main(void){
    int x, y, soma, sub, multi, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    soma = x + y;
    sub = x - y;
    multi = x * y;
    divisao = x / y;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", sub);
    printf("A multiplicação dos números é: %d\n", multi);
    printf("A divisão dos números é: %d\n", divisao);

}