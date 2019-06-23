/***************************************************************************************
** Função: Calcular dados de uma viagem                                             ****
****************************************************************************************
** Autor: Súlivan Somões                                                            ****
** Data Registro:                                                                   ****
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() //programa principal
{
	//variaveis
	float comb,vel,dist,velmed,temp;
	
	//Entrada de dados
	printf("Informe o tempo: ");
	scanf("%f",&temp);
	
	printf("Informe a velocidade: ");
	scanf("%f",&vel);
	
	//processamento
	dist= temp*vel;
	velmed=dist/12;   //levando em consideração que o carro faz 12 km por litro de combustivel
	comb=dist/temp;
	
	//saida de dados
	printf("\nA distancia percorrida foi: %2.f",dist);
	printf("\nO combustivel gasto foi: %2.f",comb);
	printf("\nA velocidade media foi: %2.f",velmed);
	printf("\nO tempo da viagem foi: %2.f",temp);
	
	system("pause>nul");	

}
