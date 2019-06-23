/*
Implementar uma função para calcular o tempo em minutos entre o início e o fim de um evento, utilizando a seguinte struct:
struct horaMinuto {
int hora;
int minuto;
};
O protótipo da função é:
int duracao (struct horaMinuto inicio, struct horaMinuto fim)
*/

#include <stdio.h>
#include <stdlib.h>

struct horaMinuto{
	int hora;
	int minuto;
};

int duracao(struct horaMinuto inicio, struct horaMinuto fim);

int main()
{
	//variaveis tipo HoraMinuto
	struct horaMinuto inicio;
	struct horaMinuto fim;
	
	printf("Informe hora inicial do envento HH:MM :");
	scanf("%d:%d",&inicio.hora,&inicio.minuto);
	
	printf("Informe hora final do evento HH:MM : ");
	scanf("%d:%d",&fim.hora,&fim.minuto);
	
/*	if(fim.hora> inicio.hora){
		printf("HORA INICIAL TEM QUE SER MAOR QUE HORA FINAL\n");
	}*/
	
	printf("\nTempo de duracao do evento: %d minutos",duracao(inicio,fim));
	
	system("pause>nul");
	
}

int duracao(struct horaMinuto inicio, struct horaMinuto fim)
{
	int minutos=0, tot_inicio=0, tot_fim=0,aux; //locais
	
	//minutos = inicio.hora/60;
	minutos += inicio.hora%60;
//	minutos += inicio.minuto;
	tot_inicio = minutos;
	
	//minutos = fim.hora/60;
	minutos += fim.hora%60;
//	minutos += fim.minuto;
	tot_fim += minutos;
	
/*	if(tot_inicio > tot_fim){ // faz tratamento para minutos não ficarem negativo.
		aux = tot_inicio;
		tot_inicio = tot_fim;
		tot_fim = aux;
	}*/
	
	minutos = tot_fim - tot_inicio;
	
	return minutos;
}
