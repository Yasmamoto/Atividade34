//atividade em C, feita no dia 13/09/2023, questão 34.
#include <stdio.h> 
int main()
{ 
  int num1;
  int num2;
  float divisao;
  int mult;
  int soma;
  int diferenca;

  printf("Digite um numero o qual você quer realizar as operações matemáticas: ");
  scanf("%i", &num1);
 
  printf("Digite mais um numero o qual você quer realizar as operações matemáticas: ");
  scanf("%i", &num2);

  divisao = num1/num2;
  mult = num1 * num2;
  soma = num1 + num2;
  diferenca = num1 - num2;

  printf("\n\nA divisão do numero %i mais o %i é igual %.2f\n", num1, num2, divisao);

  printf("A multiplicação entre os numeros %i e %i é igual a %i\n", num1, num2, mult);

printf("A somatória entre os numeros %i e %i é igual a %i\n", num1, num2, soma);

printf("A diferença entre os numeros %i e %i é igual a %i\n", num1, num2, diferenca);

  return 0;
}
