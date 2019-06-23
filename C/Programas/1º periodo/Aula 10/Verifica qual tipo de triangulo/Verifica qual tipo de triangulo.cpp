/*faça um algoritmo que leia tres valores e verifique se estes podem representar os lados de um triangulo.
Em caso afirmativo, especificar o tipo do triangulo. Para que os vales representem os lados de um triangulo
é necessario que qualquer um dos lados seja menor que a soma dos outros dois lados.
Um triangulo pode ser classificado como equilatero,isóceles ou escaleno.*/
//isoceles dois lados iguais
//equilatero todos os lados iguais
//escaleno todos os lados diferentes

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
//variaveis
float lad1,lad2,lad3;

//entrada
printf("Digite numero 1: ");
scanf("%f",&lad1);
printf("Digite numero 2: ");
scanf("%f",&lad2);
printf("Digite numero 3: ");
scanf("%f",&lad3);

//Processamento, verificações,saidas etc..
if(lad1 < (lad2 + lad3)  || lad2 < (lad1 + lad3) || lad3 < (lad1 + lad2)){ 
	if(lad1 == lad2 && lad1 == lad3 && lad3 == lad2){
		printf("\nTriangulo equilatero");
	}else{
		if(lad1 != lad2 && lad1 != lad3 && lad2 != lad3){
			printf("\ntriangulo escaleno");
		}else{
			if(lad1 == lad2 || lad1 == lad2 || lad2 == lad3){
				printf("\ntriangulo isoceles");
			}
		}
	}
}else{
		printf("\nNumeros nao compoe triangulo!");
	}
  
	
	system("pause > nul");
	
}
