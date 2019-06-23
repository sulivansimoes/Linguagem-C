#include<stdio.h>
#include<stdlib.h>

void soma(int * ,int *,int *);
int main(void)
{
	int a,b,s=0;
	
	printf("Iforme a,b:");
	scanf("%d,%d",&a,&b);
	
	soma(&a,&b,&s);
	
	printf("soma %d",s);
	
	
}

void soma(int *a ,int *b,int *s)
{
	*s = *a+*b;
}
