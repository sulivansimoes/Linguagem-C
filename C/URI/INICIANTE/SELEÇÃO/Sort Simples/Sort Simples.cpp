/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, 
uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/

#include <stdio.h>

int main()
{
 int n1,n2,n3,nBkp,i,y;
 int aux[3];
 
 
 scanf("%d %d %d",&n1,&n2,&n3);
 aux[0]=n1;
 aux[1]=n2;
 aux[2]=n3;
 
 for(i=0;i<3;i++){
 	
 	for(y=0; y<3; y++){
 		
 		if(aux[i]<aux[y]){
 			
 			nBkp   = aux[i];
			aux[i] = aux[y];
			aux[y] = nBkp; 
		 }
	 }
 }
 
 
 //imprime ordem crescente
 for(i=0;i<=2;i++){
 	printf("%d\n",aux[i]);
 }
 
 //imprime ordem de leitura
 printf("\n");
 printf("%d\n",n1);
 printf("%d\n",n2);
 printf("%d\n",n3);

 return 0;
}

/*
exemplo de entrada					exemplo de saida
7 21 -14								   -14
											 7
									   		21

											 7
											21
										   -14
*/
