#include <stdio.h>
#include <stdlib.h>

/*prot�tipos das fun��es*/
void tela(void);
int tabuada(int,int);


/*Fun��es*/
int main(void)
{
	int num,i;  //variavel local
	
	tela();
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf(" %02d * %02d = %02d\n",i,num,tabuada(num,i));
	}
	
}

void tela (void)
{
	printf("Informe n�mero para ver a tabuada do mesmo: ");
}

int tabuada(int n, int k)
{
	return k * n;
}




