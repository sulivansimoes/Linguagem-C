/*
A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica 
do resultado de v�rios GRENAIS. Escreva um programa para ler o n�mero de gols marcados pelo Inter e pelo Gr�mio 
em um GRENAL. Logo ap�s escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta 
for 1, o algoritmo deve ser executado novamente solicitando o n�mero de gols marcados pelos times em uma nova partida, 
caso contr�rio deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estat�stica.
- O n�mero de vit�rias do Inter.
- O n�mero de vit�rias do Gr�mio.
- O n�mero de Empates.
- Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada cont�m 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo 
Gr�mio respectivamente. Em seguida h�ver� um inteiro (1 ou 2), correspondente � repeti��o do programa.

Sa�da
Ap�s cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo 
for encerrado deve ser mostrado as estat�sticas conforme a descri��o apresentada acima. Obs: a palavra "Gremio" deve 
ser impressa sem acento, conforme o exemplo abaixo.
*/


#include<stdio.h>

int main(void)
{
		int gremio,inter,cond=1,emp=0,gren=0,grem=0,inte=0;
		
		do{ //la�o principal
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
			
			do //valida o preenchimento condi��o do la�o principal
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
Exemplo de Entrada							Exemplo de Sa�da
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
