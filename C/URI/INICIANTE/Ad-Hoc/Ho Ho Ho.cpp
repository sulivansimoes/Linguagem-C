/*
Papai Noel est� brincando com seus duendes para entret�-los durante a v�spera do Natal. 
A brincadeira consiste nos elfos escreverem n�meros em peda�os de papel e colocarem no gorro do Papai Noel. 
Ap�s todos terminarem de colocar os n�meros Noel sorteia um papel e aquele n�mero representa quantos "Ho" o Noel deve falar.
Seu trabalho � ajudar o Papai Noel montando um problema que mostre todos os "Ho" que ele deve falar dado o n�mero sorteado.

Entrada
A entrada � composta por um �nico inteiro N (0 < N = 106) representando quantos "Ho" ser�o falados por Noel.

Sa�da
A sa�da � composta por todos "Ho" que Papai Noel deve falar separados por um espa�o. Ap�s o �ltimo "Ho" deve 
ser apresentado um "!" encerrando o programa.

Exemplo de Entrada		Exemplo de Sa�da
5						Ho Ho Ho Ho Ho!

*/

#include<stdio.h>

int main(void)
{
	int n,cont=1;
	
	scanf("%d",&n);
	while(cont < n)
	{
		printf("Ho ");
		cont++;
	}
	printf("Ho!\n");
	
	return 0;
}
