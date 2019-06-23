/*Exemplo de recursividade*/

/*Bibliotecas*/
#include<stdio.h>
#include<stdlib.h>

/*Prot�tipos*/
int fatorial(int );

/*Programas*/
int main(void)
{
	int numero,resultado;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	resultado = fatorial(numero);
	
	printf("Fatorial eh: %d\n",resultado);
	system("pause");
}

int fatorial(int x)
{
	int resultado=0;
	
	if(x == 0){
		resultado = 1;
	}else{
		resultado = x * fatorial(x - 1);
		/* --explica��o--
		   Quando a fun��o fatorial � chamada dentro da fun��o fatorial principal o programa abre uma outra fun��o fatorial 
		   dentro da mem�ria do computador. abaixo esta um processamento considerando numero com valor 3
		   
		   resultado = x * fatorial(x - 1);
		    ~~~//~~~ = 3 * chama outra fun��o fatorial mandando como parametro (3-1).
		    ~~~//~~~ = 2 * chama outra fun��o fatorial mandando como parametro (2-1).
		    ~~~//~~~ = 1 * chama outra fun��o fatorial mandando como parametro (1-1).
		    ~~~//~~~ = O retorno da fun��o ser� 1 pois x � igual a 0.
		    
		 Depois que � aberto a ultima fun��o e a mesma retorna 1,  as demais fun��es v�o realizar seus respectivos retornos
		 da ultima at� a primeira chamada
		 
		 	resultado = x * fatorial(x - 1);
		 	resultado = 3 * 2 -> recebeu resultado da fotrial (3-1)
		 	resultado = 2 * 1 -> recebeu resultado da fatorial(2-1)
		 	resultado = 1 * 1 -> recebeu resultado da fotorial(1-1)		 
		*/
	}
	return resultado;
}
