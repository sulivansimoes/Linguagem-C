/*
Escreva uma função com três números inteiros como parâmetros de entrada: dia, 
mês e ano. Estes valores representam uma data. A função deve calcular e imprimir o 
dia seguinte da data passada como parâmetro. No main, ler os valores do teclado e 
utilizar esta função. Utilize a função do exercício anterior para saber se o ano é ou não bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

#define MES_TRINTA 30
#define MES_TRINTA_UM 31
#define BISSEXTO 29
#define INVALIDO 100

int checar(int);
void dia_seguinte(int,int,int);

int main(void)
{
	int dia, mes, ano;
	
	printf("Informe data no formato dd/mm/aaaa: ");
	scanf("%d/%d/%d",&dia,&mes,&ano);
	
	if (dia>31 || dia<1 || ano<1900 || mes<1 || mes>12){
		printf("DATA INVALIDA!\n");
	}else{
		dia_seguinte(dia,mes,ano);}
}

void dia_seguinte(int dia, int mes, int ano)
{
	int d,m,a; //locais
 	
	switch(mes)
	{
		case 4: case 6: case 9: case 11: 
			if(dia >= 1 && dia < MES_TRINTA){
				d = dia+1;
				m = mes;
				a = ano;
				}else{ 
					if(dia == MES_TRINTA){
					   d = 1;
					   m = mes+1;
					   a = ano;
					   }else{
							d = INVALIDO;
					   }
				}
		break;
		case 1: case 3: case 5: case 7: case 8: case 10: 
			if(dia >= 1 && dia < MES_TRINTA_UM){
				d = dia + 1;
				m = mes;
				a = ano;
			}else{
				if(dia == MES_TRINTA_UM){
					d = 1;
					m = mes + 1;
					a = ano;
					}else{
						d = INVALIDO;
					}
				}
		break;
		case 12 :
			if(dia >= 1 && dia < MES_TRINTA_UM){
				d = dia + 1;
				m = mes;
				a = ano;
			}else{
				if(dia == MES_TRINTA_UM){
					d = 1;
					m = 1;
					a = ano + 1;
				}else{
					d = INVALIDO;
				}
			}
		break;
		case 2 :
			if(checar(ano) == BISSEXTO){
				if(dia >= 1 && dia < BISSEXTO){
					d = dia + 1;
					m = mes;
					a = ano;
				}else{
					if(dia == BISSEXTO){
						d = 1;
						m = mes+1;
						a = ano;
					}else{
						d = INVALIDO;
					}
				}
			}else{
				if(dia >= 1 && dia < 28){
				  d = dia + 1;
				  m = mes;
				  a = ano;
   			    }else{
   			    	if(dia == 28){
   			    		d = 1;
   			    		m = mes+1;
   			    		a = ano;
					   }else{
					   	 d = INVALIDO;
					   }
				   }
			} 
	}
	
	if(d != INVALIDO){
		printf("\nDIA SEGUINTE\n");
		printf("%02d/%02d/%d",d,m,a);
	}else{
		printf("\nDIA INVALIDO PARA MES INFORMADO.\n");
	}
		system("pause>nul");
}

int checar(int ano)
{
	if(ano%100!=0 && ano%4 == 0 || ano%400 == 0){
		return BISSEXTO;
	}else{
		return 28;
	}		
}
