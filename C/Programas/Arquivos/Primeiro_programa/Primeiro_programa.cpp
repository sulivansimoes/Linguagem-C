/*
	Considerações
	1. A palavra FILE é uma palavra reservada do C que indica Arquivo.
	2. Para trabalhar com Arquivos deve sempre se ter um ponteiro apontado para o arquivo (endereço).
	3. A função fopen abre o aquivo recebendo 2 argumentos de paramentro fopen("Nome arquivo","Ação que ira ser feita(escrever,alterar,ler,etc.));"
	4. A função fclose fecha e salva o arquivo sem corromper o mesmo
	5. As funções prinf e scanf recebe mais um f antes para o tratamento com arquivos
	
	6. Se o diretório não for especificado na função fopen o arquivo é criado no mesmo local onde o programa está salvo.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("Teste.txt", "w"); //w = escreve; r = lê ; a = altera. 
	
	
	fprintf(ptr,"pão com ovo!");
	
	fclose(ptr);
	
}
