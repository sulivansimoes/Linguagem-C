#include <stdio.h>
#include <stdlib.h>
#include <math.h>      //Biclioteca de fun��es matematicas

/*
Uma pessoa deseja pregar um quadro em uma parede.Fa�a um programa para calcular e mostrar a distancia que a escada deve estar da parede.
A pessoa deve fornecer o tamanho da escada e a altura que deseja pregar o quadro.Lembre se que o tamanho da escada deve ser maior que
a altura que se deseja alca�ar.
*/

int main()
{
	//declara��o de variaveis
	float tam,alt,dist;
	
	//entrada de dados
	printf("Digite o tamanho: ");  //tamanho deve ser maior que a altura
	scanf("&f",&tam);
	fflush(stdin);  // fun��o que descarrega conteudo da variavel no Buffer  //Buffer = Armazenamento temporario de memoria
	
	printf("Digite a altura que deseja pregar o quadro: ");
	scanf("%f",&alt);
	fflush(stdin);  // fun��o que descarrega conteudo da variavel no Buffer  //Buffer = Armazenamento temporario de memoria
	
	//processamento de dados
	dist = tam * tam - alt * alt;		
//	dist = pow(x.2) - pow(x.2);      //Fun��o pow faz calculo de potencia
	dist = sqrt(dist);						//Fun��o sqrt faz calculo de raiz quadrada de um numero
	
	//saida de dados
	printf("\nDistancia: %1.f",dist);
	
	system("pause > nul");
	
	
	
	
	
	
}
