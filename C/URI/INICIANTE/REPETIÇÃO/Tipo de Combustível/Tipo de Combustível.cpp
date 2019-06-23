/*
Um Posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes. 
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma: 
1.�lcool 2.Gasolina 3.Diesel 4.
Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser solicitado um novo 
c�digo (at� que seja v�lido). O programa ser� encerrado quando o c�digo informado for o n�mero 4.

Entrada
A entrada cont�m apenas valores inteiros e positivos.

Sa�da
Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combust�vel, 
conforme exemplo.
*/

#include<stdio.h>

int main(void)
{
	int tip,alc=0,gas=0,dis=0;
	
	do{
		scanf("%d",&tip);
		if(tip != 4){
			switch(tip){
				case 1 :
					alc += 1;
				break;
				case 2 :
					gas += 1;
				break;
				case 3:
					dis += 1;
				break;
			}
		}
	}while(tip != 4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alc);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",dis);
	
	return 0;
}

/*
Exemplo de Entrada						Exemplo de Sa�da
8										
1
7
2
2
4										MUITO OBRIGADO
										Alcool: 1
										Gasolina: 2
										Diesel: 0								
*/
