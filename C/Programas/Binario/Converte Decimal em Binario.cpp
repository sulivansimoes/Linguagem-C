#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Variaveis
	int num=0,i,scape,t=1;	
	
	//Vetores
	int	bin[t]={0};
	
	//carrega variavel que define tamanho de bit
	printf("Informe o tamanho de bit: ");
	scanf("%d",&t);
	
	//Entrda, processamento e saida.
	do{		 
		printf("informe um numero, para sair informe  0: ");
		scanf("%d",&num);
		scape = num;
		
		if(num > 0){  // se n� digitado for positivo
			i=0;
			while(num > 0 && i < t) 
			{
				bin[i] = num % 2;
				num = num / 2;
				i++;
			}
		}
		if(num < 0 ){ // se n� digitado for negativo. Tratamento com complemento de 1
		    i=0;
			while(num != 0 && i < t)  //converte para bin�rio.
			{
			  bin[i] = num % 2;
			  num = num /2;
			  i++;		
			}
			for(i=0;i<t;i++) // faz invers�o.
			{
				if(bin[i]==0)
					bin[i] = 1;
					else
					  bin[i] = 0;
			}			
		}
		if(scape != 0){			
			printf("\nCONVERTIDO P/ BINARIO EM %d BIT complemento de 1\n",t);
			for(i=t-1;i>=0;i--)
			{
				printf("%d",bin[i]);
			}
			printf("\n\n");
			
			for(i=0;i<t;i++) //zera tudo antes de voltar pro la�o principal
			{
				if(bin[i] != 0)
					bin[i] =0;
			}
		system("pause");
		system("cls");
		}
	}while(scape!=0);
}
