/*
	Considera��es
	1. A palavra FILE � uma palavra reservada do C que indica Arquivo.
	2. Para trabalhar com Arquivos deve sempre se ter um ponteiro apontado para o arquivo (endere�o).
	3. A fun��o fopen abre o aquivo recebendo 2 argumentos de paramentro fopen("Nome arquivo","A��o que ira ser feita(escrever,alterar,ler,etc.));"
	4. A fun��o fclose fecha e salva o arquivo sem corromper o mesmo
	5. As fun��es prinf e scanf recebe mais um f antes para o tratamento com arquivos
	
	6. Se o diret�rio n�o for especificado na fun��o fopen o arquivo � criado no mesmo local onde o programa est� salvo.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	
	ptr = fopen("Teste.txt", "w"); //w = escreve; r = l� ; a = altera. 
	
	
	fprintf(ptr,"p�o com ovo!");
	
	fclose(ptr);
	
}
