#include<stdio.h>
#include<stdlib.h>


void tela(void);    /*protótipo*/
void tabuada(int);	/*protótipo*/

int main(void)
{
	int num; //variavel local
	
	tela();
	scanf("%d",&num);
	tabuada(num);
	
	return 0;	
}

/*funções*/
void tela(void)
{
	printf("Informe valor que deseja ver a tabuada de 1 a 10: ");	
}

void tabuada(int n)
{
	int i,prod=1; //variavel local
	for(i=1;i<11;i++)
	{
		prod = n * i;
		printf("%02d * %02d = %02d\n",n,i,prod);
	}
}



