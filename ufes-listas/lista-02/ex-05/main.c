/*

*/
#include <stdio.h>

int main(void){
    float numero = 0.5;
     
    while(numero >= 0.0 && numero <= 1.0){
        printf("Digite um número entre 0.0 e 1.0: ");
        scanf("%f", &numero);
    }
    printf("Programa encerrado. \n");
 

    return 0;
}