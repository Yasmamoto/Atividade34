//atividade em C, feita no dia 13/09/2023, quest�o 34.
#include <stdio.h> 
int main()
{ 
  int num1;
  int num2;
  float divisao;
  int mult;
  int soma;
  int diferenca;

  printf("Digite um numero o qual voc� quer realizar as opera��es matem�ticas: ");
  scanf("%i", &num1);
 
  printf("Digite mais um numero o qual voc� quer realizar as opera��es matem�ticas: ");
  scanf("%i", &num2);

  divisao = num1/num2;
  mult = num1 * num2;
  soma = num1 + num2;
  diferenca = num1 - num2;

  printf("\n\nA divis�o do numero %i mais o %i � igual %.2f\n", num1, num2, divisao);

  printf("A multiplica��o entre os numeros %i e %i � igual a %i\n", num1, num2, mult);

printf("A somat�ria entre os numeros %i e %i � igual a %i\n", num1, num2, soma);

printf("A diferen�a entre os numeros %i e %i � igual a %i\n", num1, num2, diferenca);

  return 0;
}
