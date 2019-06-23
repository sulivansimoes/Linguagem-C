/*  ==> Concatena��o das considera��es do primeiro programa.
	Considera��es
	1. A fun��o fscanf scaneia o que esta dentro do arquivo.
	2. A fun��a fscanf � limitada, pois todos os agumentos tem de ser identicos ao arquivo.
	3. Se o ponteiro n�o for especificado para um arquivo existente o mesmo guarda o valor NULL(Nulo).

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ponteiro;
	int x,y,z;
	
	ponteiro = fopen("Arquivo.txt","r"); // r -> reader = leitura.
	
	if(ponteiro == NULL){ // VALIDA��O:  se aquivo n�o existir ponteiro apresenta msgm. Para testar mudar nome de arquivo.
		printf("Arquivo n�o encontrado!\n");
		system("pause");
		exit(0);
	}
	
	fscanf(ponteiro,"%d %d %d",&x,&y,&z);  //l� os n�meros do aquivo e armazena nas variaveis.
	
	printf("%d %d %d\n",x,y,z);
}
