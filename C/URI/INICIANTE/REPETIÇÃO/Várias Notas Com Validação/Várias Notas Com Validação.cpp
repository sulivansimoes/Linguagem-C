/*
Escreva um programa para ler as notas da primeira e a segunda avalia��o de um aluno. 
Calcule e imprima a m�dia semestral. O programa s� dever� aceitar notas v�lidas (uma nota v�lida deve pertencer
 ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem �novo calculo (1-sim 2-nao)�, solicitando ao usu�rio que 
informe um c�digo (1 ou 2) indicando se ele deseja ou n�o executar o algoritmo novamente, (aceitar apenas os c�digo 1 ou 2). 
Se for informado o c�digo 1 deve ser repetida a execu��o de todo o programa para permitir um novo c�lculo, caso contr�rio o 
programa deve ser encerrado.

Entrada
O arquivo de entrada cont�m v�rios valores reais, positivos ou negativos. Quando forem 
lidas duas notas v�lidas, deve ser lido um valor inteiro X . O programa deve parar quando o valor 
lido para este X for igual a 2.

Sa�da
Se uma nota inv�lida for lida, deve ser impressa a mensagem �nota invalida�. 
Quando duas notas v�lidas forem lidas, deve ser impressa a mensagem �media = � seguido do valor do c�lculo.

Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem 
deve ser apresentada novamente se o valor da entrada padr�o para X for menor do que 1 ou maior do que 2, 
conforme o exemplo abaixo.

A m�dia deve ser impressa com dois d�gitos ap�s o ponto decimal.
*/

#include<stdio.h>

int main(void)
{
	float media=0,n1,n2;
	int tst;
	
	do{
		scanf("%f",&n1);
		while(n1<0 || n1>10) //valida primeira nota
		{
			printf("nota invalida\n");
			scanf("%f",&n1);
		}
		
		scanf("%f",&n2);
		while(n2<0 || n2>10) //valida segunda nota
		{
			printf("nota invalida\n");
			scanf("%f",&n2);
		}
		media = (n1+n2)/2;
		printf("media = %.2f\n",media);
		
		media = 0; 	 //zera media antes de entrar no la�o novamente
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&tst);
		
		while(tst!=1 && tst!=2) //valida a verifica��o para la�o la�o principal
		{
			printf("novo calculo (1-sim 2-nao)\n");	
			scanf("%d",&tst);
		}		
	}while(tst!=2); // Se tst igual a 1 continua no la�o principal
	
	return 0;
}

/*
Exemplo de Entrada						Exemplo de Sa�da
-3.5
3.5
11.0
10.0
4
1
8.0
9.0
2										nota invalida
										nota invalida
										media = 6.75
										novo calculo (1-sim 2-nao)
										novo calculo (1-sim 2-nao)
										media = 8.50
										novo calculo (1-sim 2-nao)
*/
