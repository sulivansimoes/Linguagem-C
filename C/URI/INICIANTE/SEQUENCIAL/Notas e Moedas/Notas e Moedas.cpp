/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 = N = 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*/

#include <stdio.h>

int main()
{
	float num,numdec,aux=0;
	int numInt,cem,cinquenta,vinte,dez,cinco,dois,Mum,resto,Mcinquenta,Mvinte,Mdez,Mcinco,Mcent;
	
	scanf("%f",&num);
	
	numInt = int(num);            // Pega a parte inteira do numero e guarda no num.  ||int -> converte a variavel de float ou double para int
	numdec = num -((int)num);     //Pega a parte fracionada do nº e guarda no numdec.

	//NOTAS
	cem = numInt/100;
    resto = numInt % 100;
    cinquenta = resto/50;
    resto = resto % 50;
    vinte = resto/20;
    resto= resto % 20;
    dez = resto/10;
    resto = resto % 10;
    cinco = resto / 5;
 	resto = resto % 5;
 	dois = resto / 2;
 	resto = resto % 2;
 	
	//MOEDAS 	
 	Mum = resto;
 	aux = (numdec/50);
 	Mcinquenta = aux * 100;
 	aux = ((numdec/25)-aux);
 	Mvinte = aux * 100;
 	
 	aux = ((numdec/10)-aux);
 	Mdez = aux * 100;
 	aux = ((numdec/5)-aux);
 	Mcinco = aux * 100;
 	Mcent = ((numdec-aux)*100);	

 	//Saida
 	printf("NOTAS:\n");
 	printf("%d nota(s) de R$ 100,00\n",cem);
 	printf("%d nota(s) de R$ 50,00\n",cinquenta);
 	printf("%d nota(s) de R$ 20,00\n",vinte);
 	printf("%d nota(s) de R$ 10,00\n",dez);
 	printf("%d nota(s) de R$ 5,00\n",cinco);
 	printf("%d nota(s) de R$ 2,00\n",dois);
 	printf("MOEDAS\n");
 	printf("%d moeda(s) de R$ 1,00\n",Mum);
 	printf("%d moeda(s) de R$ 0,50\n",Mcinquenta);
 	printf("%d moeda(s) de R$ 0,25\n",Mvinte);
 	printf("%d moeda(s) de R$ 0,10\n",Mdez);
 	printf("%d moeda(s) de R$ 0,05\n",Mcinco);
 	printf("%d moeda(s) de R$ 0,05\n",Mcent);
 	return 0;
}

/*
  exemplo de entrada			   		exemplo de saida
  	  576.73							NOTAS:
										5 nota(s) de R$ 100.00
										1 nota(s) de R$ 50.00
										1 nota(s) de R$ 20.00
										0 nota(s) de R$ 10.00
										1 nota(s) de R$ 5.00
										0 nota(s) de R$ 2.00
										MOEDAS:
										1 moeda(s) de R$ 1.00
										1 moeda(s) de R$ 0.50
										0 moeda(s) de R$ 0.25
										2 moeda(s) de R$ 0.10
										0 moeda(s) de R$ 0.05
										3 moeda(s) de R$ 0.01
								
*/
