/*
Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de 
combustível gasto (em litros).

Entrada
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), 
e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

Saída
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/

#include <stdio.h>
int main()
{
	float comb,consumo;
	int dist;
	
	scanf("%d",&dist);
	scanf("%f",&comb);
	
	consumo = dist/comb;
	
	printf("%.3f km/l\n",consumo);
	return 0;
}

/*
exemplo de entrada			exemplo de saida
500
35.0                          14.286 km/l

*/
