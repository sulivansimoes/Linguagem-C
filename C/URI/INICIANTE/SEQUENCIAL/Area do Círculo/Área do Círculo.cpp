/*
A f�rmula para calcular a �rea de uma circunfer�ncia �: area = PI . raio2. Considerando para este problema que PI = 3.14159:
- Efetue o c�lculo da �rea, elevando o valor de Raio ao quadrado e multiplicando por PI.

Entrada
A entrada cont�m um valor de ponto flutuante (dupla precis�o), no caso, a vari�vel raio.

Sa�da
Apresentar a mensagem "A=" seguido pelo valor da vari�vel area, conforme exemplo abaixo, com 4 casas ap�s o ponto decimal.
 Utilize vari�veis de dupla precis�o (double). Como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o 
 resultado, caso contr�rio, voc� receber� "Presentation Error".
*/

//importante para ler uma variavel tipo double � preciso ler com %lf
#include <stdio.h> 
int main()
{
  double p,area,raio;
  
  scanf("%lf",&raio);
  p=3.14159;
  area =p*(raio*raio);	
  printf("A=%.4lf\n",area);
  return 0;	
}
