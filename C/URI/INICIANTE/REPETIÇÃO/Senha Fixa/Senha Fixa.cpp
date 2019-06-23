/*
Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. 
Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". 
Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o 
algoritmo encerrado. Considere que a senha correta � o valor 2002. 

Entrada
A entrada � composta por v�rios casos de testes contendo valores inteiros.

Sa�da
Para cada valor lido mostre a mensagem correspondente � descri��o do problema.
*/

#include<stdio.h>

int main(void)
{
	int senha;
	
	do{
		scanf("%d",&senha);
		if(senha == 2002){
			printf("Acesso Permitido\n");
		}else{
			printf("Senha Invalida\n");
		}
	}while(senha != 2002);
	
	return 0;
}

/*
Exemplo de Entrada				Exemplo de Sa�da
2200
1020
2022
2002							Senha Invalida
								Senha Invalida
								Senha Invalida
								Acesso Permitido
*/
