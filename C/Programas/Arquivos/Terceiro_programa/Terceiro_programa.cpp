/* ===> Concatena��o com considera��es de programas anteriores
	Considera��es
	1. Fun��o gets � acompanhda com f para tratamento de arquivos.
	2. Fun��o fgets tem o mesmo objetivo da fscanf, por�m com menos limita��es. Observando que mesmo que um n�mero do arquivo for lido com essa fu��o o mesmo ser� considerado como tipo string.
	3. Fun��o fgets faz leitura at� encontrar quebra de linha, para se ler um aquivo inteiro com quebras de linha deve se usar o la�o While.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *ponteiro;
	
	ponteiro = fopen("Produtos.txt","r"); //r -> reader = leitura
	
	if(ponteiro == NULL){ //Valida se arquivo existe
		printf("Arquivo nao encontrado!\n");
		system("pause");
		exit(0);
	}
	
	char frase[1000]; //vetor de string.
	
	while(fgets(frase,1000,ponteiro) != NULL)  //argumentos passados de parametro -> fgets(variavel,tamanho, ponteiro do aquivo) // Enquanto n�o for fim de arquivo faz leitura.
	{
		printf("%s",frase);
	}
	
	fclose(ponteiro);
}
