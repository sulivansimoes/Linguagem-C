#include<stdio.h>
#include<stdlib.h>

/*protótipos*/
void menu_01(void);
void menu_02(void);
int tabuada(int);
int potencia(int);

/*funções*/
int main()
{
	int cond=1,num; //variaveis locais
	while(cond > 0)
	{	
		menu_01();
		scanf("%d",&num);	
		menu_02();
		scanf("%d",&cond);
		
		if(cond != 0){		
			switch(cond)
			{	
				case 1:
					tabuada(num);				//chamando a função e passando paramentros
				break;
				case 2: 
			  		 potencia(num);				//chamando a função e passando paramentros
				break;
				default :
					printf("Retorno fora dos padroes\n");
				break;
			}
		}
	}
}

void menu_01(void)
{	
	system("cls");
	printf("Informe um numero positivo: ");	
}

void menu_02(void)
{	printf("\nO que deseja fazer\n");
	printf("1 - Tabuada\n");
	printf("2 - Potencia\n");
	printf("0 - Sair\n");
	printf("Escolha uma opcao:");
}

int tabuada(int n)
{
	int i; //variaveis locais
	
	for(i=1;i<11;i++)
	{
		printf("%02d * %02d = %02d\n",i,n,n*i); 	
	}
	system("pause");
}

int potencia(int n)
{
	int prod=1,i; //variaveis locais
	
	for(i=1;i<11;i++)
	{
		prod *= n;
		printf("%02d ^ %02d = %02d\n",n,i,prod); 	
	}
	system("pause");
}
