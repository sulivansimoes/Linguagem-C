/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores 
digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
*/

#include<stdio.h>

int main(void)
{
	int i,par=0,imp=0,neg=0,pos=0,n;
	
	for(i=1;i<6;i++)
	{
		scanf("%d",&n);
		if(n%2==0){
			par++;
		}else{
			imp++;
		}
		if(n>0){
			pos++;
		}else{
			if(n<0){
				neg++;
			}
		}
	}
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",imp);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);
	return 0;
}

/*
exemplo de entrda		exemplo de saida
-5						3 valor(es) par(es)
0						2 valor(es) impar(es)
-3						1 valor(es) positivo(s)
-4						3 valor(es) negativo(s)
12
*/
