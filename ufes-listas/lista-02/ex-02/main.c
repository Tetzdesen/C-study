#include <stdio.h>
/*
1.2. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve
terminar.
*/
int main(void){
    char letra;

    do{
        printf("Digite uma vogal em maiúscula: ");
        scanf(" %c", &letra);

    } while(letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U');
    return 0;
}