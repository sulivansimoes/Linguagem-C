/*Implemente um programa que ,dado uma letra,indique qual o estado civil de uma pessoa
pessoa(S ou s,C ou c, D ou d, V ou v)*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char letra;
	
	printf("Informe uma letra: ");
	scanf("%c",&letra);
	
	switch (letra){ 
	
	case 'S' ||  's' :
		printf("\nSolteiro");
		break;		
	case 'C' || 'c' :
		printf("\nCasado");
		break;
	case 'D' || 'D' :
		printf("\nDivorciado");
		break
	case 'v' || 'V' :
		printf("\nViuvo");
		break;
	default :
		printf("\nEstado civil invalido");
		
	}
	
	system("pause>nul");
}
