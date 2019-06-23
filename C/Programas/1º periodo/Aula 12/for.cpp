/*
	for(i=1"é atribuido um valor aos acumuladores e ao contador";i<=qpessoa"é a quantidade de vezes que o contador vai fazer o comando;i++"é o incremento que vai ser feito no contador"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade1,idade2,i,qpessoa;
	
	printf("Quantas pessoas vao informar a idade: ");
	scanf("%d",&qpessoa);
	
	for(i=1;i <= qpessoa;i++)
	{
	printf("\nInforme a primeira dezena do ano de nascimento: ");
	scanf("%d",&idade1);
	printf("Informe a segunda dezena do ano de nascimento: ");
	scanf("%d",&idade2);	
	
	if(qpessoa <= 0)
	exit(0);
		
	idade1= (idade1+idade2)%5;
	
	switch(idade1){
	case 1 :
		printf("timido\n");
	break;
	case 2 :
		printf("Foda\n");
	break;
	default : 
		printf("invalido\n");
	break;
				}
		
	}
	system("pause");
	
}
