/*
A fórmula para calcular a área de uma circunferência é: area = PI . raio2. Considerando para este problema que PI = 3.14159:
- Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por PI.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal.
 Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o 
 resultado, caso contrário, você receberá "Presentation Error".
*/

//importante para ler uma variavel tipo double é preciso ler com %lf
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
