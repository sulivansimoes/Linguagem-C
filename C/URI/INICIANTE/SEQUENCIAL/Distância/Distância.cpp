/*
Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com velocidade constante de 60 Km/h e 
o carro Y sai com velocidade constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X, ou seja, consegue
se afastar um quil�metro a cada 2 minutos.
Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa dist�ncia do outro carro.

Entrada
O arquivo de entrada cont�m um n�mero inteiro.

Sa�da
Imprima o tempo necess�rio seguido da mensagem " minutos".
*/

#include<stdio.h>

int main()
{
	int dist,temp;
	
	scanf("%d",&dist);
	temp= dist * 2;
	printf("%d minutos\n",temp);
}
/*
exemplo de entrada			exemplo de saida
30								60 minutos
*/
