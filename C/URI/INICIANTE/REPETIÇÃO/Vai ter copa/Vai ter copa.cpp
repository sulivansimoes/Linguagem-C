/*
O Brasil � o pa�s sede da copa esse ano. Por�m, h� muitas pessoas protestando contra o governo. 
Em redes sociais � poss�vel ver pessoas afirmando que n�o vai ter copa devido aos protestos.

Mas esses rumores de que n�o haver� copa s�o totalmente falsos, a presidente 
Dilma Roussef j� avisou: vai ter copa sim, e se reclamar vai ter duas!

Entrada
A entrada cont�m v�rios casos de teste e termina com EOF. Cada caso de teste consiste de 
uma linha contendo o n�mero N de reclama��es sobre a copa encaminhadas para a presidente (0 = N = 100).

Sa�da
Para cada teste, a sa�da consiste de uma linha dizendo "vai ter copa!" caso n�o haja reclama��es 
para a presidente. Caso haja reclama��es, a sa�da dever� dizer "vai ter duas!".
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	
	//La�o infinito.
	while(scanf("%d",&a)!=EOF)
	{
		if(a == 0){
			 printf("vai ter copa!\n");
		}else{ 
			printf("vai ter duas!\n");
		}
	}
	return 0;
}

/*
Exemplo de Entrada 		Exemplo de Sa�da 
0					     vai ter copa!
1						 vai ter duas!
0						 vai ter copa!	
2						 vai ter duas!
100						 vai ter duas!
0						 vai ter copa!
 
*/
