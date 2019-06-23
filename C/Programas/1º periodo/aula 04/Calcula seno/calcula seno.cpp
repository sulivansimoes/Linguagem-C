#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca das funções matematicas

/*
*/

#define PI 3.25 // #define = constante, uma constante não ocupa espaço na memoria.

int main()
{
	//declaração de variaveis
	float ang,alt,escada,radiano;
	
	//Entrada de dados
	printf("Informe o angulo: ");
	scanf("%f",&ang);
	fflush(stdin);  // função que descarrega conteudo da variavel no Buffer  //Buffer = Armazenamento temporario de memoria
	
	printf("Informe altura: ");
	scanf("%f",&alt);
	fflush(stdin);  // função que descarrega conteudo da variavel no Buffer  //Buffer = Armazenamento temporario de memoria
	
	//Processamtento de dados
	radiano = ang * PI /180;        //Converte angulo de graus para radiano.
	escada = alt / sin(radiano);     // sin = seno
	
	//Saida de dados
	printf("\nEscada = %2.f",escada);
	
	system("pause>nul");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
