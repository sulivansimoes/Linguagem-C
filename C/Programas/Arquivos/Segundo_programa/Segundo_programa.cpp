/*  ==> Concatenação das considerações do primeiro programa.
	Considerações
	1. A função fscanf scaneia o que esta dentro do arquivo.
	2. A funçõa fscanf é limitada, pois todos os agumentos tem de ser identicos ao arquivo.
	3. Se o ponteiro não for especificado para um arquivo existente o mesmo guarda o valor NULL(Nulo).

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ponteiro;
	int x,y,z;
	
	ponteiro = fopen("Arquivo.txt","r"); // r -> reader = leitura.
	
	if(ponteiro == NULL){ // VALIDAÇÃO:  se aquivo não existir ponteiro apresenta msgm. Para testar mudar nome de arquivo.
		printf("Arquivo não encontrado!\n");
		system("pause");
		exit(0);
	}
	
	fscanf(ponteiro,"%d %d %d",&x,&y,&z);  //lê os números do aquivo e armazena nas variaveis.
	
	printf("%d %d %d\n",x,y,z);
}
