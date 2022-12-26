/*
Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar um número inteiro entre 1 e 10. O programa deve repetir a solicitação
enquanto não for atendido. Todo valor entre 1 e 10 deve ser somado coms os demais números digitados,
quando o somatório de todos os números aceitos for igual ou maior a 21, o programa deve terminar
imprimindo qual foi a soma total dos números aceitos.
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

#include <stdio.h>
/*
1.3. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar um número inteiro entre 1 e 10. O programa deve repetir a solicitação
enquanto não for atendido. Todo valor entre 1 e 10 deve ser somado coms os demais números digitados,
quando o somatório de todos os números aceitos for igual ou maior a 21, o programa deve terminar
imprimindo qual foi a soma total dos números aceitos.
*/
int main(void){
    int numero, soma;

    do{
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &numero);
        soma += numero + ()

    } while(numero < 1 || numero > 10);
    return 0;
}