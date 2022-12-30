#include <stdio.h>

typedef struct tVetorR3
{
    float x, y, z;
}vetorR3;


int main(void){
    vetorR3 vetor;
    vetor.x = 1.5;
    vetor.y = 2.5;
    vetor.z = 3.5;
    printf("As três coodernadas do seu vetor são:\nx: %f\ny: %f\nz: %f\n", vetor.x, vetor.y, vetor.z);
}