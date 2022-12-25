#include <stdio.h>

int main(void){
    float temperatura, tempConvertido;
    printf("Digite a temperatura em Fa: ");
    scanf("%f", &temperatura);

    tempConvertido = 5 * ((temperatura - 32) / 9);

    printf("Sua temperatura em Graus Celsius é: %f \n", tempConvertido); 
    return 0;
}