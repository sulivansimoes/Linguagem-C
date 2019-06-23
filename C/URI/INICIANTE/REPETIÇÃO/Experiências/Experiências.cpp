/*
Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e precisa de sua 
ajuda para organizar os experimentos de um laborat�rio o qual ela � respons�vel. 
Ela quer saber no final do ano, quantas cobaias foram utilizadas no laborat�rio e o percentual 
de cada tipo de cobaia utilizada.

Este laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. 
Para obter estas informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo 
de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada cont�m um valor inteiro N que indica os v�rios casos de teste que vem a seguir. 
Cada caso de teste cont�m um inteiro Quantia (1 = Quantia = 15) que representa a quantidade de cobaias utilizadas 
e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Sa�da
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual 
de cada uma em rela��o ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado 
com dois d�gitos ap�s o ponto.
*/

#include<stdio.h>

int main(void)
{
	int tst,i,rato=0,sapo=0,coelho=0,tip,soma=0;
	float percC=0,percR=0,percS=0;
	char tipo;
	
	scanf("%d",&tst);
	
	for(i=1;i<=tst;i++)
	{
		scanf("%d %c",&tip,&tipo);
		if(tipo=='C'){
			coelho += tip;
			}else{
				if(tipo=='S'){
					sapo += tip;
				}else{
					if(tipo=='R'){
						rato += tip;
					}
				}
			}	
	}
	soma = coelho + sapo + rato;
	percR = (((float)rato) * 100)/soma; 	// � Posto em cast para apresentar valores nas casas decimais
	percS = (((float)sapo) * 100)/soma;	   	// � Posto em cast para apresentar valores nas casas decimais
	percC = (((float)coelho) * 100)/soma; 	// � Posto em cast para apresentar valores nas casas decimais
	
	printf("Total: %d cobaias\n",soma);
	printf("Total de coelhos: %d\n",coelho);
	printf("Total de ratos: %d\n",rato);
	printf("Total de sapos: %d\n",sapo);
	printf("Percentual de coelhos: %.2f %%\n",percC); 
	printf("Percentual de ratos: %.2f %%\n",percR);
	printf("Percentual de sapos: %.2f %%\n",percS);
	
	return 0;	
}

/*
Exemplo de Entrada						Exemplo de Sa�da
10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R									Total: 92 cobaias
										Total de coelhos: 29
										Total de ratos: 40
										Total de sapos: 23
										Percentual de coelhos: 31.52 %
										Percentual de ratos: 43.48 %
										Percentual de sapos: 25.00 %
*/
