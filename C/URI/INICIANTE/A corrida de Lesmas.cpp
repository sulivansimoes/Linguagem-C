/*
A corrida de lesmas é um esporte que cresceu muito nos últimos anos, fazendo com que várias 
pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milhões 
em corridas pelo mundo. Porém a tarefa de capturar lesmas velozes não é uma tarefa muito fácil, pois 
praticamente todas as lesmas são muito lentas. Cada lesma é classificada em um nível dependendo de sua velocidade:

 Nível 1: Se a velocidade é menor que 10 cm/h .
 Nível 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h .
 Nível 3: Se a velocidade é maior ou igual a 20 cm/h .


Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um grupo de lesmas.

Entrada
A entrada consiste de múltiplos casos de teste, e cada um consiste em duas linhas: 
A primeira linha contém um inteiro L (1 = L = 500) representando o número de lesmas do grupo, 
e a segunda linha contém L inteiros Vi (1 = Vi = 50) representando as velocidades de cada lesma do grupo.
A entrada termina com o fim do arquivo (EOF).

Saída
Para cada caso de teste, imprima uma única linha indicando o nível de velocidade da lesma mais veloz do grupo.
*/

#include<stdio.h>

int main()
{
	int l,v,aux,i;

	while(scanf("%d",&l)!=EOF) 	//Laço infinito.
	{
		aux = 0;
//		printf("valocidade\n");
		for(i=1;i<=l;i++)
		{ 
//			printf("informe v: ");
			scanf("%d",&v);			
			if(v>aux){ 			//faz troca se v for maior que o vlr lido anteriormente.
				aux = v;
			}
		}
		if(aux < 10)			 {
			printf("1\n");		 }
		if(aux >= 10 && aux < 20){
			printf("2\n");		 }
		if(aux >= 20)			 {
			printf("3\n");		 }
	}
	
	return 0;
}

/*
Exemplo de Entrada 					Exemplo de Saída 
 10
 10 10 10 10 15 18 20 15 11 10			3
 10
 1 5 2 9 5 5 8 4 4 3					1
 10
 19 9 1 4 5 8 6 11 9 7					2
 */
