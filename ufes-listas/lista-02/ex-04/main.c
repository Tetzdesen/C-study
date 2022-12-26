/*Crie um programa em linguagem C, utilizando o comando do .. while, que imprima um menu
com 5 opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando
uma opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa
deve repetir a solicitação enquanto não for escolhida a opção 5 para sair. */

#include <stdio.h>

int main(void){
    int numero, soma;

    do{
        printf("\n Digite um das opções abaixo: \n 1 - Ação \n 2 - Aventura \n 3 - Terror \n 4 - Comédia \n 5 - Sair \n Qual opção você escolhe? ");
        scanf("%d", &numero);
        switch (numero)
        {
        case 1:
            printf("\nSua opção escolhida foi: Ação. \n");
            break;
        case 2:
            printf("\nSua opção escolhida foi: Aventura. \n");
            break;
        case 3:
            printf("\nSua opção escolhida foi: Terror. \n");
            break;
        case 4:
            printf("\nSua opção escolhida foi: Comédia. \n");
            break;
        case 5:
            printf("\nSua opção escolhida foi: Sair. \n");
            break;
        default:
            printf("\nPor favor, digite uma das opções válidas abaixo. \n");
            break;
        }

    } while(numero != 5);
    return 0;
}