/*
1. Implemente uma função para contar a quantidade de caracteres de uma string. 
A assinatura da função deve ser: int tamanho(char * pMsg)

2. Implemente uma função para imprimir caractere por caractere de de uma string. 
A assinatura da função deve ser: void imprimir(char * pMsg)

3. Implemente uma função para concatenar duas strings de caracteres. 
A assinatura da função deve ser: void concatenar(char * destino, char * origem)

Implementar um main para criar as strings e chamar as funções acima, imprimindo o conteúdo das 
strings antes e após as chamadas das funções e o valor retornado pela função tamanho
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 100

int  tamanho(char *);
void imprimir(char *);
void concatenar(char *, char *);

int main(void)
{
	/*declaração de variaveis e ponteiros*/
	char Msg[TAM],*pMsg;
	char fdestino[TAM], *destino;
	char forigem[TAM], *origem;
	
	/*1º atribuição de endereços nos ponteiros*/
	pMsg = &Msg[0];
	destino = &fdestino[0];
	origem = &forigem[0];
	
	/*Entrada da Msg, impressão por caracter da Mensagem e seu tamanho*/
	printf("Entre com a string: ");
	gets(Msg);
	imprimir(pMsg);	
	printf("\n");
	printf("Tamanho String: %d \n",tamanho(pMsg));
	
	/*Entrada das strings*/
	printf("\nEntre com a string 1: ");
	gets(forigem);
	printf("Entre com a string 2: ");
	gets(fdestino);
	
	printf("\nTamanho e conteudo original da string 1\n");
	imprimir(origem);
	printf("\nTamanho string 1: %d\n\n",tamanho(origem));
		
	printf("Tamanho e conteudo original da string 2\n");
	imprimir(destino);
	printf("\nTamanho string 2: %d\n\n",tamanho(destino));

	printf("Tamanho e conteudo depois das strings concatenadas\n");
	concatenar(origem,destino);	
	imprimir(origem);
	printf("\nTamanho string concatenada: %d\n\n",tamanho(origem));
	
	system("pause>nul");
}

int tamanho(char *pMsg)
{
	char *tam;
	int tot;
	
	tam = pMsg;	
	while(*pMsg != '\0')
	{
		pMsg++;	
	}	
	tot = int((pMsg - tam)); //tot recebe tamanho da string. Há um cast para converter caracter para inteiro antes de retonar no cast.
	return tot;
}

void imprimir(char *pMsg)
{
	while(*pMsg != '\0')
	{
		printf("%c",*pMsg);
		pMsg++;
	}
}

void concatenar(char *origem, char *destino)
{
	strcat(origem,destino); 
	
	/*strcat() é uma função nativa do C que aloca o segundo argumento(vetor) no primeiro 
	arugumento(vetor)  SINTAXE: strcat(argumento1,argumento2)*/
}
