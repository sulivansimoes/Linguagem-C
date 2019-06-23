/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que 
estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
*/

#include <stdio.h>

int main(void)
{
	int n1,n2,m1,m2,i,soma=0;
	
	scanf("%d",&n1);	
	scanf("%d",&n2);
	
	if(n1>n2){
		m1=n1;
		m2=n2;
	}else{
		m1=n2;
		m2=n1;
	}
	
	for(i=m2;i<m1;i++)
		{ 
			if(i != m2){
				if(i%2!=0){
					soma+=i;	
				}
			}
		}	
	printf("%d\n",soma);
	return 0;
}

/*
exemplo de entrada 				exemplo de saida
	6									5
   -5																			
------------------------------------------------	
	15									13
	12																				
------------------------------------------------
    12									0																				
    12
*/
