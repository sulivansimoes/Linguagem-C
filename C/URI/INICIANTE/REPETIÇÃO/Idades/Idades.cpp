/*
Fa�a um algoritmo para ler um n�mero indeterminado de dados, contendo cada um, 
a idade de um indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, 
cont�m o valor de idade negativa. Calcular e imprimir a idade m�dia deste grupo de indiv�duos.

Entrada
A entrada cont�m um n�mero indeterminado de inteiros. A entrada ser� encerrada quando um valor negativo for lido.

Sa�da
A sa�da cont�m um valor correspondente � m�dia de idade dos indiv�duos.
A m�dia deve ser impressa com dois d�gitos ap�s o ponto decimal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cont=0,n;
	double media=0;
	
	do
	  {
		scanf("%d",&n);
		if(n>0){
			media +=n;
			cont++;
		}
		continue;
	  }while(n>0);
	   	
	media /= cont;
	printf("%.2lf\n",media);
	
	return 0;
}

/*
exemplo de entrada		exemplo de saida
34						39.25
56
44
23
-2
*/
