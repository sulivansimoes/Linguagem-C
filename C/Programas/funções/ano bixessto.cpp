#include<stdio.h>
#include<stdlib.h>

/*protótipo*/
int bi(int);

int main(void)
{
	int ano; 
	
	printf("Informe ano: ");
	scanf("%d",&ano);
	switch(bi(ano))
	{
		case 1:
			printf("Eh bissexto\n");
		break;
		case 2:
			printf("Nao eh bissexto\n");
		break;
		system("pause");
	}
}

int bi(int ano)
{
	if(ano%100!=0 && ano%4==0 || ano%400 == 0){
		return 1;
		}else{
			return 2;
		}
}
