#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
1.7. Crie um programa em linguagem C que receba uma string de até 20 letras. O programa deve contar
quantas vogais existem na string recebida. Ao final, o programa deve imprimir quantas vogais foram
encontradas. Considere para a contagem tanto vogais minúsculas quanto maiúsculas.
*/
int main(void){
    char texto[21];
    int contador=0;
    printf("Digite seu texto (máximo 20 caracteres): ");
    scanf("%s", texto);

    for(int i = 0; i < 20; i++){

        if((tolower(texto[i])) == 'a' || tolower(texto[i]) == 'e' || tolower(texto[i]) == 'i' || tolower(texto[i]) == 'o' || tolower(texto[i]) == 'u'){
            contador += 1;
        }


    }
   
    printf("Vogais: %d\n", contador);

    return 0;
}