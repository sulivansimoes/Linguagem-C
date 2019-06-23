/*
Mariazinha sabe que um N�mero Primo � aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, 
o n�mero 7 � primo, pois pode ser dividido apenas pelo n�mero 1 e pelo n�mero 7 sem que haja resto. Ent�o ela pediu 
para voc� fazer um programa que aceite diversos valores e diga se cada um destes valores � primo ou n�o. Acontece 
que a paci�ncia n�o � uma das virtudes de Mariazinha, portanto ela quer que a execu��o de todos os casos de teste 
que ela selecionar (inst�ncias) aconte�am no tempo m�ximo de um segundo, pois ela odeia esperar.

Entrada
A primeira linha da entrada cont�m um inteiro N (1 = N = 200), correspondente ao n�mero de casos de teste. 
Seguem N linhas, cada uma contendo um valor inteiro X (1 < X < 231) que pode ser ou n�o, um n�mero primo.

Sa�da
Para cada caso de teste imprima a mensagem �Prime� (Primo) ou �Not Prime� (N�o Primo), de acordo com o exemplo abaixo.

Exemplo de Entrada				Exemplo de Sa�da
3
123321							Not Prime
123								Not Prime
103								Prime
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int qtdTeste,teste, y, i,root;
	int primo;
	
	primo = 1; //flag default � primo
	
	scanf("%d",&qtdTeste);
	for(i = 0; i < qtdTeste; i++){
		
		scanf("%d",&teste);
		root = sqrt(teste);
		
		for(y = 2; y <= root; y++){ //percorre at� a raiz quadrada do n�mero a ser testado

			if((teste%y) == 0){
				primo = 0;
				break;
			}
		}
		if(primo == 1 && teste != 1 && teste != 0){
			printf("Prime\n");
		}else{
			printf("Not Prime\n");
			primo = 1;
		}
	}
	
	return 0;
}
