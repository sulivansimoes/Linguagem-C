/*
O Brasil é o país sede da copa esse ano. Porém, há muitas pessoas protestando contra o governo. 
Em redes sociais é possível ver pessoas afirmando que não vai ter copa devido aos protestos.

Mas esses rumores de que não haverá copa são totalmente falsos, a presidente 
Dilma Roussef já avisou: vai ter copa sim, e se reclamar vai ter duas!

Entrada
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste consiste de 
uma linha contendo o número N de reclamações sobre a copa encaminhadas para a presidente (0 = N = 100).

Saída
Para cada teste, a saída consiste de uma linha dizendo "vai ter copa!" caso não haja reclamações 
para a presidente. Caso haja reclamações, a saída deverá dizer "vai ter duas!".
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	
	//Laço infinito.
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
Exemplo de Entrada 		Exemplo de Saída 
0					     vai ter copa!
1						 vai ter duas!
0						 vai ter copa!	
2						 vai ter duas!
100						 vai ter duas!
0						 vai ter copa!
 
*/
