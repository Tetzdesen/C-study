
/*
1.11. Crie um programa em linguagem C que receba dez números reais e retorne qual é a média e o desvio
padrão entre eles.

*/
#include <math.h>
#include <stdio.h>


int main(void){
    float numeros[10], soma, media, variancia, desvio;
    numeros[10] = [(15.0, 15.0, 15.0, 15.0, 15.0, 15.0, 15.0, 15.0, 15.0, 15.0);
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
        soma += numeros[i]; 
    }
    
    // media
    media = soma / 10;
    printf("%f", media);
    // variancia calculo
  // popen
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
        variancia += pow((numeros[i] - media), 2);
    }

    variancia = variancia / 10;

    desvio = sqrt(variancia);

    printf("Seu desvio padrão é: %f", desvio);

    return 0;
}