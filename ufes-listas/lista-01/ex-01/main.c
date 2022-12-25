/*
1.1. Crie um programa em linguagem C que imprima o nome na tela o nome de quem escreveu o programa.
*/

#include <stdio.h>

int main(void) {
  char nome[60];
  printf("Digite o nome de quem escreveu o programa: ");
  scanf("%s", &nome);
  printf("O nome de quem escreveu o programa é: %s \n", nome);
  return 0;
}