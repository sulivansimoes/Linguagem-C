/*
Considere um n�mero N sendo quadrado perfeito. A raiz quadrada deste n�mero pode ser calculada 
da seguinte forma: calcular a soma dos n�meros �mpares consecutivos cuja soma seja igual a N. 
A quantidade de elementos utilizados nesta soma � o valor da raiz quadrada de N. Baseado nestas 
informa��es, crie uma fun��o que receba um n�mero inteiro N e retorne se o n�mero � ou n�o um quadrado 
perfeito. Criar uma fun��o main para ler um valor do teclado e imprimir todos os quadrados perfeitos de 
1 at� N. N�o � permitido usar a fun��o sqrt(...).
*/

#include<stdio.h>
#include<stdlib.h>

int quadrado(int);

int main(void)
{
  	while(1){
		int num,i,j;
		
		printf("\nInforme um numero: ");
		scanf("%d",&num);
		
		switch(quadrado(num))
		{
			case 1:
				printf("Eh perfeito\n");
			break;
			case 2:
				printf("Nao eh perfeito\n");
			break;
		}
		printf("PERFEITOS ENTRE 01 a %02d\n",num);
		for(i=2;i<num;i++)
		{
			for(j=2;j<num;j++){
				if(j*j==i){ 
				printf("%d\n",i);}
			}
		}
  	}
}

int quadrado(int num)
{
	int	i,perfeito;
	if(num==1){
		return 2;}
	for(i=1;i<=(num/2);i++)
	{
		if(i*i==num){ 		//se for quadrado perfeito retorna 1(verdadeiro) e encerra la�o
			perfeito =1;
			break;
		}else{
			perfeito =2;
		}
	}
	return perfeito;
}
