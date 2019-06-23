#include<stdio.h>
#include<stdlib.h>

/*protótipo*/
void tela(void);
int tabuada(void);

/*funções*/
int main(void)
{
	tabuada();		
}

void tela(void)
{
	system("cls");
	printf("Informe numero positivo: ");
}

int tabuada(void)
{
	int num=0,i; //variaveis locais
	
	while(num>=0)
	{
		tela();
		scanf("%d",&num);		
		for(i=1;i<11;i++)
		{
			printf("%02d * %02d = %02d\n",i,num,i*num);
		}
		system("pause");
	}	
}
