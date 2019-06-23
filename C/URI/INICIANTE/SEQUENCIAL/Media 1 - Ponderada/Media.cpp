/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída
Calcule e imprima a variável MEDIA conforme exemplo abaixo, com 5 dígitos após o ponto decimal e 
com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double) e como todos os problemas, 
não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

/*
   Media ponderada é quando as notas tem pesos, esse tipo de media é calculado da seguinte maneira: são as notas multiplicadas
   pelo seu peso e o resultado dividido pela soma dos pesos.
*/

#include <stdio.h>

#define PA 3.5
#define PB 7.5
#define PESO 11
int main()
{
	double a,b,media=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	media = ((PA*a)+(PB*b))/PESO;
	printf("MEDIA = %.5lf\n",media);
	
	return 0;
	
}

/*
exemplo de entrada      exemplo de saida
a= 5.0                   MEDIA = 6.43182
b= 7.1
*/
