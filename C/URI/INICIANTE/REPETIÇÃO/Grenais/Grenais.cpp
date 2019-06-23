/*
A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística 
do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio 
em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta 
for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, 
caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo 
Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo 
for encerrado deve ser mostrado as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve 
ser impressa sem acento, conforme o exemplo abaixo.
*/


#include<stdio.h>

int main(void)
{
		int gremio,inter,cond=1,emp=0,gren=0,grem=0,inte=0;
		
		do{ //laço principal
			if(cond==1){
				scanf("%d %d",&inter,&gremio);
				if(gremio>inter){
					grem+=1; 
				}else{
					if(inter==gremio){
						emp+=1;  
					}else{
						if(inter>gremio){
							inte+=1; 
						}
					}
				}
			gren+=1; 
			
			do //valida o preenchimento condição do laço principal
			{
				printf("Novo grenal (1-sim 2-nao)\n");
				scanf("%d",&cond);
				if(cond==1 || cond==2)
					continue;
			}while(cond != 1 && cond != 2);
			
		}else{
			continue;}
			
	}while(cond==1); 
	
	printf("%d grenais\n",gren);
	printf("Inter:%d\n",inte);
	printf("Gremio:%d\n",grem);
	printf("Empates:%d\n",emp);
	
	if(inte>grem){
		printf("Inter venceu mais\n");
	}else{
		if(grem>inte){
			printf("Gremio venceu mais\n");
		}else{
			if(emp>inte && emp>grem){
				printf("Nao houve vencedor\n");
			}
		}
	}
	return 0;
}

/*
Exemplo de Entrada							Exemplo de Saída
3 2
1
2 3
1
3 1
2											Novo grenal (1-sim 2-nao)
											Novo grenal (1-sim 2-nao)
											Novo grenal (1-sim 2-nao)
											3 grenais
											Inter:2
											Gremio:1
											Empates:0
											Inter venceu mais
*/
