/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", 
indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.
*/

#include<stdio.h>

int main(void)
{
	int n1,n2,aux;
	
	scanf("%d %d",&n1,&n2);
	
	if(n2>n1){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	if(n1%n2==0){
		printf("Sao Multiplos\n");
	}else{
		if(n1%n2!=0){
			printf("Nao sao Multiplos\n");
		}
	}
	return 0;
}

/*
Exemplo de Entrada				Exemplo de Saída
6 24							Sao Multiplos
6 25							Nao sao Multiplos
*/
