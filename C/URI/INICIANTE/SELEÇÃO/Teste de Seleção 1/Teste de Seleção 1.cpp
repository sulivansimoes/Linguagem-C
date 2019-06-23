/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de 
C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem 
"Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.
*/


#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(b>c && d>a && (c+d > a+b) && c>0 && d>0 && a%2 == 0)
	 {
	 	printf("Valores aceitos\n");
	 }else
	    printf("Valores nao aceitos\n");
	return 0;	
}

/*
Exemplo de entrada 				exemplo de said
5 6 7 8							Valores nao aceitos
2 3 2 6							Valores aceitos
*/
