/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) 
e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = raiz(x2-x1)**2 +(y1-y2)**2

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto
flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

#include <stdio.h>
#include <math.h>
int main()
{
	float x1,y1,x2,y2,dist=0;
	
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	
	dist = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
	
	printf("%.4f\n",dist);
	return 0;
}

//sqrt tira raiz quadrada
/*
exemplo de entrada			exemplo de saida
1.0 7.0							4.4721
5.0 9.0
*/
