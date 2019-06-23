/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a 
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem 
lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota inválida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "média = " seguido do valor do cálculo. 
O valor deve ser apresentado com duas casas após o ponto decimal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n1,n2,media=0,x1=-1,x2=-1;
	
	while(x1<0 || x1>10 && x2<0 || x2>10)
	{	
		if(x1<0 || x1>10){	
			scanf("%f",&n1);
				if(n1<0 || n1>10)
					printf("nota invalida\n");
				else
					x1=n1;
		}
		if(x2<0 || x2>10){
			scanf("%f",&n2);
				if(n2<0 || n2>10)
					printf("nota invalida\n");
				else
					x2=n2;
		}
	}
	
	media = (x1+x2)/2;
	printf("media = %.2f\n",media);
	return 0;
}

/*
exemplo de entrada				exemplo de saida
-3.5							nota invalida
3.5								nota invalida
11.0							media = 6.75
10.0
*/
