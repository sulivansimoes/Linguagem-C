#include<stdio.h>
#include<stdlib.h>

/*protótipo*/
void valida(bool *,int *);

int main(void)
{	
	int nota,*ptrnota;
	bool valid, *ptrvalid;
	
	ptrvalid = &valid;
	ptrnota = &nota;
	valid = false;
	
	while(valid == false)
	{
		printf("Informa nota: ");
		scanf("%d",&nota);
		valida(ptrvalid,ptrnota);
	}
	printf("\nNota valida.");
	system("pause");
}

void valida(bool *ptrvalid,int *ptrnota)
{
	if(*ptrnota < 0 || *ptrnota > 10){
		*ptrvalid = false;
	}else{
		*ptrvalid = true;
	}
}
