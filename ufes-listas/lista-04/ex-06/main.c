#include <stdio.h>

typedef struct tVetorR3
{
    float x, y, z;
}vetorR3;


int main(void){
    vetorR3 vetor;
    printf("Digite as três coordenadas do seu vetor: ");
    scanf("%f %f %f", &vetor.x, &vetor.y, &vetor.z);

    printf("As três coodernadas do seu vetor são:\nx: %.2f\ny: %.2f\nz: %.2f\n", vetor.x, vetor.y, vetor.z);
}