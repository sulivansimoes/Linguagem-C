/*Programa que ao informar um numero apresenta seu caracter na tabela ASCII 
e/ou ao informar um carcter o seu valor numerico para representa-lo na tabela ASCII é apresentado com "do while*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	
	do{
	system("cls"); //limpa tela 
	printf("Informe um numero e digite 0 para parar: ");
	fflush(stdin); // descarrega conteudo no  buffer
	scanf("%d",&num);
	
	printf(" %d vale na tabela ASCII: %c \n\n",num,(char)num);
	
	system("pause");
		
	}while(num != 0);
	
	
}

/* 
 do = faça
 while  = enquanto
 printf = escreva
 scanf = leia
 char = caracter
*/
