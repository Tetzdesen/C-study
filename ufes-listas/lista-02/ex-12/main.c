/*
1.12. Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar dois números inteiros. O programa deve imprimir todos os números inteiros do
menor até o maior dos dois. O programa deve terminar após imprimir todos os números.
*/

#include <stdio.h>

int main(void){
    int num1, num2, menor, maior;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um outro número: ");
    scanf("%d", &num2);

    if(num1 < num2){
       menor = num1;
       maior = num2;
    } else{
        menor = num2;
        maior = num1;
    }
    for(int i = menor; i <= maior; i++){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}