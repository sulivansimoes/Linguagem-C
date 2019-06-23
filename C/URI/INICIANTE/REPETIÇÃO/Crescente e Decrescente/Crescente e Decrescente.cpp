/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma 
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. 
A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na
 ordem crescente, caso contrário imprima a mensagem “Decrescente”.
*/

#include <stdio.h>

int main(void)
{
	int n1,n2;
	
	do{
		scanf("%d %d",&n1,&n2);
		if(n1 != n2){
			if(n1>n2){
				printf("Decrescente\n");
			}else{
				printf("Crescente\n");
			}
		}
	}while(n1 != n2);
	
	return 0;
}

/*
Exemplo de Entrada				Exemplo de Saída
5 4								Decrescente
7 2								Decrescente
3 8								Crescente
2 2
*/
