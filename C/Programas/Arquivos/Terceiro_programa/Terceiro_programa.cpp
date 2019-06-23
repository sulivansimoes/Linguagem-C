/* ===> Concatenação com considerações de programas anteriores
	Considerações
	1. Função gets é acompanhda com f para tratamento de arquivos.
	2. Função fgets tem o mesmo objetivo da fscanf, porém com menos limitações. Observando que mesmo que um número do arquivo for lido com essa fução o mesmo será considerado como tipo string.
	3. Função fgets faz leitura até encontrar quebra de linha, para se ler um aquivo inteiro com quebras de linha deve se usar o laço While.
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
	
	while(fgets(frase,1000,ponteiro) != NULL)  //argumentos passados de parametro -> fgets(variavel,tamanho, ponteiro do aquivo) // Enquanto não for fim de arquivo faz leitura.
	{
		printf("%s",frase);
	}
	
	fclose(ponteiro);
}
