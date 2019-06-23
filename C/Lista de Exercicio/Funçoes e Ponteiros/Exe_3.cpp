/*
Escreva uma fun��o que receba um n�mero inteiro como par�metro (que corresponde ao ano) e retorne 1 caso ele 
seja bissexto e 0 caso contr�rio.
*/

#include<stdio.h>
#include<stdlib.h>

int checar(int);

int main(void)
{
	int ano;
	
	printf("Informe ano: ");
	scanf("%d",&ano);
	
	switch(checar(ano))
	{
		case 1 :
			printf("Ano eh bissexto\n");
		break;
		case 0 :
			printf("Ano nao eh bissexto\n");
		break;
	}
	
	system("pause>nul");
}

int checar(int ano)
{
	if(ano%100 != 0 && ano%4 == 0 || ano%400== 0){
		return 1;
	}else{
		return 0;
	}
}
