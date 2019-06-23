/*
Leia quatro n�meros (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente �s quatro 
notas de um aluno. Calcule a m�dia com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas 
e mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for maior ou igual a 7.0, 
imprima a mensagem "Aluno aprovado.". Se a m�dia calculada for inferior a 5.0, imprima a mensagem 
"Aluno reprovado.". Se a m�dia calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve 
imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente � nota do exame obtida pelo aluno. 
Imprima ent�o a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a 
m�dia (some a pontua��o do exame com a m�dia anteriormente calculada e divida por 2). e 
imprima a mensagem "Aluno aprovado." (caso a m�dia final seja 5.0 ou mais ) ou "Aluno reprovado.", 
(caso a m�dia tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado ap�s ter pego exame) 
apresente na �ltima linha uma mensagem "Media final: " seguido da m�dia final para esse aluno.

Entrada
A entrada cont�m quatro n�meros de ponto flutuante correspendentes as notas dos alunos.

Sa�da
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas 
conforme a descri��o do problema. N�o esque�a de imprimir o enter ap�s o final de cada linha, 
caso contr�rio obter� "Presentation Error".
*/

#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 4
#define PESO4 1
#define TOTAL 10

int main()
{
	float n1,n2,n3,n4,media=0;
	
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	media=((n1*PESO1)+(n2*PESO2)+(n3*PESO3)+(n4*PESO4))/TOTAL;
	
	if(media>=7){
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	}else{
		if(media<5){
			printf("Media: %.1f\n",media);
			printf("Aluno reprovado.\n");
		}else{
			if(media>=5 && media<7){
				printf("Media: %.1f\n",media);
				printf("Aluno em exame.\n");
				printf("Nota do exame:");
				scanf("%f",&n1);
				media=((media+n1)/2);
				if(media>=5){
					printf("Aluno aprovado.\n");
					printf("Media final: %.1f\n",media);
				}else{
					printf("Aluno reprovado.\n");
					printf("Media final: %.1f\n",media);}}		
				}
			}
	return 0;	
}

/*
exemplo de etrada					exemplo de saida	
2.0 4.0 7.5 8.0						Media: 5.4
6.4									Aluno em exame.
									Nota do exame: 6.4
									Aluno aprovado.
									Media final: 5.9
__________________________________________________________
2.0 6.5 4.0 9.0						Media: 4.8
									Aluno reprovado.									
__________________________________________________________									
9.0 4.0 8.5 9.0						Media: 7.3
									Aluno aprovado.														
																			
*/									
