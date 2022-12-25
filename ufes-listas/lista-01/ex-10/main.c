
/*
1.10. Crie um programa em linguagem C que receba dez números reais e retorne qual é a soma de todos os
números informados.

*/
#include <stdio.h>

int main(void){
    float numeros[10], soma;
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
        soma += numeros[i]; 
    }
    
    // soma
    printf("A soma dos números é: %f", soma);

    return 0;
}