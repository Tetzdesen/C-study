/*
1.6. Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve
terminar.
*/
#include <stdio.h>

int main(void){
    char letra;
    while(letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U'){
        printf("Digite uma vogal em maiúscula: ");
        scanf(" %c", &letra);
    }
  
    return 0;
}