/*
Criar uma fun��o que imprima os n�meros de primos 1 a n (m�ximo 1000). 
Criar um main para ler o n�mero e executar a fun��o.
*/

#include<stdio.h>
#include<stdlib.h>

int primo(int);

int main(void)
{
	int n;
	
	printf("Informe numero: ");
	scanf("%d",&n);
	if(n>1000 || n < 1){
		printf("Informe numero menor que 1001 e maior que 0.");
	}else{
		primo(n);}
}

int primo(int n)
{
	int i,j,checa;
	
	printf("\nPRIMOS ENTRE 1 E %d\n",n);
	for(i=1;i<=n;i++) 		  // pega n� entre  faixa 1 a n
	{
		checa = 0; 			 
		for(j=2;j<=(i/2);j++) // testa se n� � primo
		{
			if(i%j==0){
				checa++;
			}
		}
		if(checa == 0){
			printf("primo:  %02d \n",i);
		}
	}
}
