/*
Mariazinha sabe que um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, 
o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7 sem que haja resto. Então ela pediu 
para você fazer um programa que aceite diversos valores e diga se cada um destes valores é primo ou não. Acontece 
que a paciência não é uma das virtudes de Mariazinha, portanto ela quer que a execução de todos os casos de teste 
que ela selecionar (instâncias) aconteçam no tempo máximo de um segundo, pois ela odeia esperar.

Entrada
A primeira linha da entrada contém um inteiro N (1 = N = 200), correspondente ao número de casos de teste. 
Seguem N linhas, cada uma contendo um valor inteiro X (1 < X < 231) que pode ser ou não, um número primo.

Saída
Para cada caso de teste imprima a mensagem “Prime” (Primo) ou “Not Prime” (Não Primo), de acordo com o exemplo abaixo.

Exemplo de Entrada				Exemplo de Saída
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
	
	primo = 1; //flag default é primo
	
	scanf("%d",&qtdTeste);
	for(i = 0; i < qtdTeste; i++){
		
		scanf("%d",&teste);
		root = sqrt(teste);
		
		for(y = 2; y <= root; y++){ //percorre até a raiz quadrada do número a ser testado

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
