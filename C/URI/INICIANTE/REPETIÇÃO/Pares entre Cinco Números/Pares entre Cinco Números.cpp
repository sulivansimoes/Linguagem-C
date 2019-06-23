/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
*/

#include <stdio.h>

int main(void)
{
	int i,cont=0;
	float n;
	
	for(i=1;i<6;i++)
	{
		scanf("%f",&n);
		if(((int)n)%2==0){
			cont++;
		}			
	}
	printf("%d valores pares\n",cont);
	return 0;
}

/*
Exemplo de Entrada		exemplo de saida		
7						3 valores pares
-5
6
-4
12
*/
