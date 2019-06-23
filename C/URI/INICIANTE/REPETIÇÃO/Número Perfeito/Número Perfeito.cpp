/*
Na matem�tica, um n�mero perfeito � um n�mero inteiro para o qual a soma de todos os 
seus divisores positivos pr�prios (excluindo ele mesmo) � igual ao pr�prio n�mero. Por exemplo 
o n�mero 6 � perfeito, pois 1+2+3 � igual a 6. Sua tarefa � escrever um programa que imprima se um 
determinado n�mero � perfeito ou n�o.

Entrada
A entrada cont�m v�rios casos de teste. A primeira linha da entrada cont�m um inteiro N (1 = N = 20), 
indicando o n�mero de casos de teste da entrada. Cada uma das N linhas seguintes cont�m um valor inteiro 
X (1 = X = 108), que pode ser ou n�o, um n�mero perfeito.

Sa�da
Para cada caso de teste de entrada, imprima a mensagem �X eh perfeito� ou �X nao eh perfeito�, 
de acordo com a especifica��o fornecida.
*/

#include<stdio.h>

int main(void)
{
	int tst,n,i,tot=0,j;
	
	scanf("%d",&tst);
	
	for(i=1;i<=tst;i++) // controla casos de teste
	{
		scanf("%d",&n);
		for(j=1;j<n;j++) // ve quais s�o os divisores do n�
		{
			if(n%j == 0)
				tot += j;
			else
				continue;
		}
	if(tot==n){
		printf("%d eh perfeito\n",n);
		tot = 0;} 	//zera total para voltar ao la�o
	else{
		printf("%d nao eh perfeito\n",n);
		tot = 0;}	//zera total para voltar ao la�o
	}			
	return 0;			
}

/*
Exemplo de Entrada				Exemplo de Sa�da
3
6
5
28								6 eh perfeito
								5 nao eh perfeito
								28 eh perfeito
*/
