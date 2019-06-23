//Faça um algoritmo que, tendo como dados de entrada a altura (h) e o sexo de uma pessoa, calcule o seu peso ideal utilizando
// as seguintes formulas:
// Homens: PESO IDEAL = 72.7 * h - 58
// MULHERES:  PESO IDEAL = 62.1 * h -47.7

#include <stdio.h>
#include <stdlib.h>

//constantes
#define MULHER  62.1 * alt - 47.7;
#define HOMEM  72.7 * alt - 58;

int main()
{
  //variaveis	
  float alt,peso;
  char sexo;
  
  //entrada
  printf("Informe o sexo M para Mulher e H para Homem: ");
  fflush(stdin); //limpa buffer
  scanf("%c",&sexo);
  printf("Informe a altura: ");
  fflush(stdin); //limpa buffer
  scanf("%f",&alt);
  
  //processamento, saida etc..
  if(sexo == 'M' || sexo == 'm'){
  	peso = MULHER ;
  }else{
  	   if(sexo == 'H' || sexo == 'h'){
  	   	peso  = HOMEM ;
  	   }else{
  	   		printf("\nSexo invalido, informe um sexo valido");
  	   		system("pause > nul");
  	   		exit(0); // para execução
  	   	
  	   	}
  }
  	
  	printf("\nO peso ideal eh: %2.f",peso);
  	
   system("pause > nul");
	
}


