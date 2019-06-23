/***************************************************************
***	Faz conta de media do aluno, e mostra sua situação     *****
****************************************************************
*** Autor: Súlivan Simões								   *****
*** Data Registro: 21/02/2016							   *****
***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() 												//programa principal
{
	//declaração de variaveis
	float nota1,nota2,nota3,total=0;						
	int i,qaluno;
	char nome[12];	
	
	printf("De quantos alunos a nota sera caulculada: ");
	fflush(stdin);
	
	for(i=1;i<=qaluno;i++)
	{
	scanf("%d",&qaluno);
	printf("Entre com nome do aluno: ");
	fflush(stdin);
	scanf("%s", &nome);									// sempre quando ler(sacanf) uma variavel, colocar o & que significa endereço de memoria
	printf("\nEntre com a primeira nota: ");			//função printf igual a escreva
	fflush(stdin);
	scanf("%f",&nota1);						    		//função scanf igual a leia
	printf("Entre com a segunda nota:  ");
	fflush(stdin);
	scanf("%f",&nota2);	
	printf("Entre com a terceira nota: ");
	fflush(stdin);
	scanf("%f",&nota3);
	
	//processamento de dados
	total=(nota1+nota2+nota3)/3;				   		//faz a media das notas
    
	//saida de dados		
	if (total<30){
		printf("\nAluno %s foi reprovado com media: %2.f\n\n\n",nome,total);
		}else{ 
			if (total>=60){
				printf("\nAluno %s aprovado com media: %2.f\n\n\n",nome,total);
				}else{ 
					if (total>=30 ){
						printf("\nAluno %s precisa fazer prova, ficou com media: %2.f\n\n\n",total,nome);
					}
				}
			}					    
    }
}
