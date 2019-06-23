/*
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
1.Álcool 2.Gasolina 3.Diesel 4.
Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo 
código (até que seja válido). O programa será encerrado quando o código informado for o número 4.

Entrada
A entrada contém apenas valores inteiros e positivos.

Saída
Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, 
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
Exemplo de Entrada						Exemplo de Saída
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
