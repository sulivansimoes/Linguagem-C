/*
Na matem�tica, um N�mero Primo � aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o n�mero 7 � primo, pois pode ser dividido apenas pelo n�mero 1 e pelo n�mero 7.

Entrada
A entrada cont�m v�rios casos de teste. A primeira linha da entrada cont�m um inteiro N (1 = N = 100), 
indicando o n�mero de casos de teste da entrada. Cada uma das N linhas seguintes cont�m um valor 
inteiro X (1 < X = 107), que pode ser ou n�o, um n�mero primo.

Sa�da
Para cada caso de teste de entrada, imprima a mensagem �X eh primo� ou �X nao eh primo�, 
de acordo com a especifica��o fornecida.
*/

#include<stdio.h>

int main(void)
{
	int tst,n,i,j,primo=0;
	
	scanf("%d",&tst);
	
	for(i=1;i<=tst;i++) //controla quantos casos de testes
	{
		scanf("%d",&n); 
		for(j=1;j<=n;j++)  //lo�o que verefica se o numero � primo
		{
			if(n%j == 0)
				primo += 1;
			else
				continue;
		}
		if(primo == 2){
			printf("%d eh primo\n",n);
			primo = 0; 				  //zera para entrar no la�o novamente.
			}else{
				printf("%d nao eh primo\n",n);
				primo = 0;}			 //zera para entrar no la�o novamente.	
	}
	return 0;
}

/*
Exemplo de Entrada					Exemplo de Sa�da
3
8
51
7									8 nao eh primo
									51 nao eh primo
									7 eh primo
*/
