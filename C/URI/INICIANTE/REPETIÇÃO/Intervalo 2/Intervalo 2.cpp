/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando 
essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 
Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
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
