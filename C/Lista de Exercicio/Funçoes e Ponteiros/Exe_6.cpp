/*
Alterar a função do exercício anterior para retornar: n - 1. 
Não se esqueça de manter o tratamento do zero. Executar o main novamente e verificar o resultado.
*/


#include <stdio.h>
#include <stdlib.h>

int fun(int);

int main(void)
{
	int n,soma=0;
	
	printf("Informe numero: ");
	scanf("%d",&n);
	
	for(int i=0; i<=n; i++){
		soma += fun(n);}
		
	printf("O resultado eh: %d", soma);
	
	system("pause>nul");
}

int fun(int n)
{	
	if(n == 0){
		return 0;
	}else{
		return (n-1);
	}  
}
