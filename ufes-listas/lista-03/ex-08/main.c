#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
1.8. Crie um programa em linguagem C que receba uma palavra de até 25 letras. O programa deve calcular
a pontuação da palavra multiplicando a soma da pontuação de cada letra pelo tamanho da palavra.
Ao final, o programa deve imprimir a pontuação obtida pela palavra digitada. A pontuação de cada
letra é a seguinte:
1 ponto ’A’, ’E’, ’I’, ’O’, ’S’, ’U’, ’M’, ’R’, ’T’
2 pontos ’D’, ’L’, ’C’, ’P’
3 pontos ’N’, ’B’, ’Ç’
4 pontos ’F’, ’G’, ’H’, ’V’
5 pontos ’J’
6 pontos ’Q’
8 pontos ’X’, ’Z’, ’K’, ’Y’, ’W’
Considere letras maiúsculas e minúsculas como iguais entre si, por exemplo ’a’ e ’A’
devem ser consideradas idênticas, assim como ’b’ e ’B’, etc.
*/
int main(void){
    char texto[26];
    int contador=0, pontuacao;
    printf("Digite seu texto (máximo 25 caracteres): ");
    scanf("%s", texto);

    for(int i = 0; i < 25; i++){

        if((tolower(texto[i])) == 'a' || tolower(texto[i]) == 'e' || tolower(texto[i]) == 'i' || tolower(texto[i]) == 'o' || tolower(texto[i]) == 'u' || tolower(texto[i]) == 's' | tolower(texto[i]) == 'm' | tolower(texto[i]) == 'r' | tolower(texto[i]) == 't'){
            contador += 1;
        }
        else if((tolower(texto[i])) == 'd' || tolower(texto[i]) == 'l' || tolower(texto[i]) == 'c' || tolower(texto[i]) == 'p'){
            contador += 2;
        }
        else if((tolower(texto[i])) == 'n' || tolower(texto[i]) == 'b' || tolower(texto[i]) == 'ç'){
            contador += 3;
        }
         else if((tolower(texto[i])) == 'f' || tolower(texto[i]) == 'g' || tolower(texto[i]) == 'h' || tolower(texto[i]) == 'v'){
            contador += 4;
        }
         else if((tolower(texto[i])) == 'j'){
            contador += 5;
        }
         else if((tolower(texto[i])) == 'q' ){
            contador += 6;
        }
         else if((tolower(texto[i])) == 'x' || tolower(texto[i]) == 'z' || tolower(texto[i]) == 'k' || tolower(texto[i]) == 'y' || tolower(texto[i]) == 'w'){
            contador += 8;
        }


    }
    pontuacao = contador * 25;
    printf("Pontuação: %d\n", pontuacao);

    return 0;
}