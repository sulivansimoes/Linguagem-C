/******************************************************************************
** Função: Imprime números na ordem invertida     							***
*******************************************************************************
** Autor: Súlivan Simões      												***
** Data Registro: 27/02/2016                                                ***
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

//Variaveis
int numA,numB,aux;

//Entrada de dados
printf("Informe o numero A: ");
scanf("%d",&numA);

printf("Informe o numero B: ");
scanf("%d",&numB);

//processamento de dados
aux=numA;
numA=numB;
numB=aux;

//saida de dados
printf("\nnumA=%d  -  numB=%d",numA,numB);

system("pause>nul");

}
