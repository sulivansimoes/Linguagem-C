#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
//imprime um numero em uma linha depois o numero mais 1 na linha de baixo e assim por diante.
	int i,j,n;
	
	printf("Informe um numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d",j);
		}
	printf("\n");	
	}
}*/


/*
//logica inversa do exercicio acima.
  int i,j,n;
  
  printf("Informe um numero: ");
  scanf("%d",&n);
  
  for(i=n;i>=1;i--)
  {
  	for(j=n;j>=i;j--)
  	{
  	  printf("%d",j);	
	}
   printf("\n"); 	
  }
} */

//logica inversa do exercicio acima.
int i,j,n,t;

  printf("Informe um numero: ");
  scanf("%d",&n);
  
  t=1;
  for(i=n;i>=1;i--)
  {
  	for(j=n;j>=t;j--)
  	{
  	  printf("%d",j);	
	}
    printf("\n"); 	
    t+=1;
}
}









