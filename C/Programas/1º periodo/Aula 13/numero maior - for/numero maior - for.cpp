#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,maior;
	
	printf("informe um número ou informe 0 para sair: ");
	scanf("%d",&num);
	
	while(num > 0 )
	{
		if(num>maior){
			maior = num;
		}
	printf("informe um número ou informe 0 para sair: ");
	scanf("%d",&num);	
	}
	printf("\nO maior eh: %d",maior);
}
