/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, 
a idade de um indivíduo. O último dado, que não entrará nos cálculos, 
contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
A saída contém um valor correspondente à média de idade dos indivíduos.
A média deve ser impressa com dois dígitos após o ponto decimal.
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
