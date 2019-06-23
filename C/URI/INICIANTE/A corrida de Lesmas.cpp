/*
A corrida de lesmas � um esporte que cresceu muito nos �ltimos anos, fazendo com que v�rias 
pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milh�es 
em corridas pelo mundo. Por�m a tarefa de capturar lesmas velozes n�o � uma tarefa muito f�cil, pois 
praticamente todas as lesmas s�o muito lentas. Cada lesma � classificada em um n�vel dependendo de sua velocidade:

 N�vel 1: Se a velocidade � menor que 10 cm/h .
 N�vel 2: Se a velocidade � maior ou igual a 10 cm/h e menor que 20 cm/h .
 N�vel 3: Se a velocidade � maior ou igual a 20 cm/h .


Sua tarefa � identificar qual n�vel de velocidade da lesma mais veloz de um grupo de lesmas.

Entrada
A entrada consiste de m�ltiplos casos de teste, e cada um consiste em duas linhas: 
A primeira linha cont�m um inteiro L (1 = L = 500) representando o n�mero de lesmas do grupo, 
e a segunda linha cont�m L inteiros Vi (1 = Vi = 50) representando as velocidades de cada lesma do grupo.
A entrada termina com o fim do arquivo (EOF).

Sa�da
Para cada caso de teste, imprima uma �nica linha indicando o n�vel de velocidade da lesma mais veloz do grupo.
*/

#include<stdio.h>

int main()
{
	int l,v,aux,i;

	while(scanf("%d",&l)!=EOF) 	//La�o infinito.
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
Exemplo de Entrada 					Exemplo de Sa�da 
 10
 10 10 10 10 15 18 20 15 11 10			3
 10
 1 5 2 9 5 5 8 4 4 3					1
 10
 19 9 1 4 5 8 6 11 9 7					2
 */
