/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando 
essas informa��es.

Entrada
A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
 
Sa�da
Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.
*/

#include<stdio.h>

int main(void)
{
	int in=0,out=0,n,x,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x>=10 && x<=20){
			in++;
		}else{
			out++;
		}
	}
	printf("%d in\n",in);
	printf("%d out\n",out);	
	return 0;
}

/*
exemplo de entrada 				exemplo de saida
4
14									2 in
123									2 out
10
-25
*/
