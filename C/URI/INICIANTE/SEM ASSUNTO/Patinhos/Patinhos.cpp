/*
Cinco patinhos foram passear. Al�m das montanhas. Para brincar. A mam�e gritou: qu�, qu�, qu�, qu�. 
Mas s� quatro patinhos voltaram de l�. Quatro patinhos foram passear. Al�m das montanhas. Para brincar. 
A mam�e gritou: qu�, qu�, qu�, qu�. Mas s� tr�s patinhos voltaram de l�. Tr�s patinhos foram passear. 
Al�m das montanhas. Para brincar. A mam�e gritou: qu�, qu�, qu�, qu�. Mas s� dois patinhos voltaram de l�. 
Dois patinhos foram passear. Al�m das montanhas. Para brincar. A mam�e gritou: qu�, qu�, qu�, qu�. Mas s� 
um patinho voltou de l�. Um patinho foi passear. Al�m das montanhas. Para brincar. A mam�e gritou: qu�, qu�, 
qu�, qu�. Mas nenhum patinho voltou de l�.
A mam�e patinha ficou t�o triste naquele dia que resolveu pedir sua ajuda para procurar 
al�m das montanhas, na beira do mar, quantos patinhos n�o voltaram de l�.

Entrada
Haver� v�rios casos de testes, a primeira linha de cada caso de teste 
cont�m um inteiro (0 = P = 1019) representando a quantidade total de patos, a entrada termina com P = -1.

Sa�da
O arquivo de sa�da deve conter a quantidade de patinhos que retornaram.
*/
#include<stdio.h>

int main()
{
    unsigned long long int p;
	
	scanf("%llu",&p);
	while(p != -1)
	{	
		if(p>0){
			printf("%llu\n",(p -= 1)); 
		}else{
			printf("%d\n",0);
		}		
		scanf("%llu",&p);
	}
	return 0;
}

/*
Exemplo de Entrada 					Exemplo de Sa�da 
0											0
1											0
10000000000000000000				9999999999999999999
-1
*/
