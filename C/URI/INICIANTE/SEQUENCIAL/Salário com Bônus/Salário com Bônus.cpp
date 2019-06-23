/*
Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas 
por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, 
informar o total a receber no final do m�s, com duas casas decimais.

Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double)
 com duas casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por
  este vendedor, respectivamente.

Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.
*/

#include <stdio.h>

int main()
{
 char  nome[12];
 double sal,vend;
 
 scanf("%s",&nome);
 scanf("%lf",&sal);
 scanf("%lf",&vend);
 
 vend *=0.15;
 sal += vend; 
 
 printf("TOTAL = R$ %.2lf\n",sal);	
 return 0;
	
}

/*
  Exemplos de entrada 					exemplo de saida
   JOAO                                 TOTAL = R$ 684.54
   500.00
  1230.30  
*/
