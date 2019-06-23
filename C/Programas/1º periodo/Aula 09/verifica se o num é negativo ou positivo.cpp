/*escreva um algoritimo que, para um determinado valor informado pelo usuario, determine se o valor é negativo ou positivo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// declaração de variaveis
	float num;
	
	//entrada de dados
	printf("Informe o numero: ");
	fflush(stdin); //limpa lixo de memoria
	scanf("%f",&num);
	
	//processamento
	if (num > 0)
	  {
	  	printf("\nO numero informado eh positivo");	
	  }else{
	        if(num < 0)
			  {
			  	printf("\nO numero informado eh negativo");
		       }else{
			          printf("\nO numero informado eh invalido");
			        }
		   }
	
		       
system("pause > nul");
	
}
