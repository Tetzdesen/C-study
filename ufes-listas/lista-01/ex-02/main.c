/*
Crie um programa em linguagem C que receba dois números inteiros, calcule o produto destes números
e imprima o resultado na tela.
*/

#include <stdio.h>

int main(void) {
  int num1, num2, produto;
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite um número: ");
  scanf("%d", &num2);
  produto = num1 * num2;
  printf("O produto entre os dois números é: %d \n", produto);
  return 0;
}