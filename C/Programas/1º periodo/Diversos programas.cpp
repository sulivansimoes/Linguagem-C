/*//programa 1
#include <stdio.h>
square (int x)
{
printf ("O quadrado e %d",(x*x));
}
int main ()
{
int num;
printf ("Entre com um numero: ");
scanf ("%d",&num);
square(num);
}*/


/*//programa 2
#include <stdio.h>
int prod (int num1,int num2,int num3)//variaveis
{
	//entrada
	printf("Informe tres numeros inteiros: ");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	//retorno
	return (num1*num2*num3);
}
int main ()
{ 
	//variavel
    int saida;
	saida=prod(0,0,0);
	printf ("O produto e: %d\n",saida);
}*/


//programa3
#include <stdio.h>
int main ()
{
char texto[60];
printf ("Digite uma string: ");
gets (texto);
printf ("\n\nVoce digitou %s",texto);
}
