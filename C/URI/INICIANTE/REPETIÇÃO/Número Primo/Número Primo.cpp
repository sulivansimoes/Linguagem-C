/*
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 = N = 100), 
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor 
inteiro X (1 < X = 107), que pode ser ou não, um número primo.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, 
de acordo com a especificação fornecida.
*/

#include<stdio.h>

int main(void)
{
	int tst,n,i,j,primo=0;
	
	scanf("%d",&tst);
	
	for(i=1;i<=tst;i++) //controla quantos casos de testes
	{
		scanf("%d",&n); 
		for(j=1;j<=n;j++)  //loço que verefica se o numero é primo
		{
			if(n%j == 0)
				primo += 1;
			else
				continue;
		}
		if(primo == 2){
			printf("%d eh primo\n",n);
			primo = 0; 				  //zera para entrar no laço novamente.
			}else{
				printf("%d nao eh primo\n",n);
				primo = 0;}			 //zera para entrar no laço novamente.	
	}
	return 0;
}

/*
Exemplo de Entrada					Exemplo de Saída
3
8
51
7									8 nao eh primo
									51 nao eh primo
									7 eh primo
*/
