/*
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os 
seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo 
o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um 
determinado número é perfeito ou não.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 = N = 20), 
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro 
X (1 = X = 108), que pode ser ou não, um número perfeito.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, 
de acordo com a especificação fornecida.
*/

#include<stdio.h>

int main(void)
{
	int tst,n,i,tot=0,j;
	
	scanf("%d",&tst);
	
	for(i=1;i<=tst;i++) // controla casos de teste
	{
		scanf("%d",&n);
		for(j=1;j<n;j++) // ve quais são os divisores do nº
		{
			if(n%j == 0)
				tot += j;
			else
				continue;
		}
	if(tot==n){
		printf("%d eh perfeito\n",n);
		tot = 0;} 	//zera total para voltar ao laço
	else{
		printf("%d nao eh perfeito\n",n);
		tot = 0;}	//zera total para voltar ao laço
	}			
	return 0;			
}

/*
Exemplo de Entrada				Exemplo de Saída
3
6
5
28								6 eh perfeito
								5 nao eh perfeito
								28 eh perfeito
*/
