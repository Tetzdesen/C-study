#include <stdio.h>

int main(void){
    float peso, altura, imc;
    printf("Digite seu peso em KG: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    imc = ((peso / (altura * altura)));
    printf("Seu IMC é de: %f \n", imc);
    return 0;
}