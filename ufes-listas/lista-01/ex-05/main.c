#include <stdio.h>

int main(void){
    int anos, diasTotal;
    printf("Digite a quantidade de anos que você deseja converter para dias: ");
    scanf("%d", &anos);
    diasTotal = anos * 365;
    printf("A quantidade de dias que tem em (%d anos) é: %d \n", anos, diasTotal);
    return 0;
}