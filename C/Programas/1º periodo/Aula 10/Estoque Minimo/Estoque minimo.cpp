/*construa um algoritmo que considerando que se tenha o codigo e a quantidade em etoque de quatro produtos, mostre quais produtos
estao abaixo do estoque minimo (30 unidades)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float proA,proB,proC,proD;

	proA = 20;
	proB = 31;
	proC = 10;
	proD = 21;
	
	if(proA < 30){
		printf("\nProduto A esta abaixo do estoque minimo, estoque de: %2.f ",proA);
	}
	if(proB < 30){
		 printf("\nProduto B esta abaixo do estoque minimo, estoque de: %2.f ",proB);
	}	
	if(proC < 30){
		 printf("\nProduto C esta abaixo do estoque minimo, estoque de: %2.f ",proC);
	}
	if(proD < 30){
		 printf("\nProduto D esta abaixo do estoque minimo, estoque de: %2.f ",proD);
	}
	
	system("pause > nul");

}
