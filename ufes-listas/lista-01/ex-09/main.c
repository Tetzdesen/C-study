/*
1.9. Considerando que uma lasanha de presunto e queijo possui 7,3%, 11,7% e 6,0% da sua massa, respectivamente, em gordura, carboidratos e proteínas. 
Considerando também que gordura, carboidrato e proteína possuem respectivamente 9, 4 e 4 calorias por grama. Crie um programa em linguagem C que
receba o peso de lasanha e calcule a quatidade total de calorias da porção informada.
*/

#include <stdio.h>

int main(void){
    float peso, calorias;
    printf("Digite o peso da lasanha em KG: ");
    scanf("%f", &peso);

    peso = (peso * 1000);

    calorias = (((peso * 0.073) * 9) + ((peso * 0.117) * 9) + ((peso * 0.06) * 9));
    printf("A quantidade total de calorias é: %.2f calorias. \n", calorias);
    return 0;
}

