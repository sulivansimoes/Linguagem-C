/*
	Autor: Súlivan Simões
	Registro: 11/11/2016
	funcionalidade: Sistema para ontrole de cadastro de pessosas.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

#define CARACTER 40
#define REGISTRO 3 	//se alterar o tamanho do registro, tem de se alterar a quantidade de inicializações da variavel p do tipo Pessoa do main, e fazer tratamento na função alterar

/*Structs 'tabelas de campos'*/
struct data
{
	int dia;
	int mes;
	int ano;
};
typedef struct data Data;		// apelido de struct data é Data.

struct pessoa
{
	   int codigo;
       char nome[CARACTER];
       int idade;
       float salario;
       char deletado; 		  // S = Registro deletado; N = Registro não deletado
       Data data_nasc;
};
typedef struct pessoa Pessoa;  // apelido de struct pessoa é Pessoa.

/*Protótipos*/
void tela_inicial();
void incluir(Pessoa  *);
void alterar(Pessoa  *);
void apagar (Pessoa  *);
void lista  (Pessoa  *);
void pesquisa(Pessoa *);
void pesquisa_nome (Pessoa *);
void pesquisa_idade(Pessoa *);
int verifica(Pessoa *);

/*Programas*/
int main(void)
{
  int opcao;
  static Pessoa p[REGISTRO]={{0," ",0,0,'S', },{0," ",0,0,'S', },{0," ",0,0,'S', }};  //tipo statica para preservar os dados
  
  system("cls");
  tela_inicial();
  fflush(stdin);
  scanf("%d",&opcao); 
  switch(opcao)
  {
  	case 0 :
  		exit(0);
  	break;
    case 1 :
         incluir(&p[0]);
	break;	
	case 2 :
		alterar(&p[0]);
	break;
	case 3 :
		apagar(&p[0]);
	break;
	case 4 :
		lista(&p[0]);
	break;
	case 5 :
		pesquisa(&p[0]);
	break;
	default :
		main();
		exit(0); //sai da função corrente.
	break;
  }
}

void tela_inicial()
{
	printf("--------------------CADASTRO DE PESSOAS--------------------\n");
    printf("1. Inserir Registro\n");
    printf("2. Alterar Registro\n");
    printf("3. Apagar Registro \n");
    printf("4. Lista Registros \n");
    printf("5. Pesquisas       \n");
    printf("0. Sair            \n");
    printf("\nInforme opcao: "    );
}

void incluir(Pessoa *p)
{	
	static int cod_pessoa=1;
	int continua,i=0;
	
		system("cls");
		i = verifica(&p[0]);						//i pega o idice que estiver vazio, se existir, do vetor.
		printf("\n----------------------------INCLUSAO DE CADASTRO----------------------------\n");
		(*(p+i)).codigo = (cod_pessoa++); 			//faz com que o codigo da pessoa seja sempre o proximo, não se repetindo.
		printf("Codigo     :%03d\n",(*(p+i)).codigo);
		fflush(stdin);		
		printf("Nome       :"); fflush(stdin); gets(p[i].nome);
		printf("Idade      :"); fflush(stdin); scanf("%d",&(p+i)->idade); 
		strupr(p[i].nome);						  //strupr() transforam nome em letra maiuscula
		printf("Data nasc dd/mm/aaaa :"); 
		fflush(stdin);
		scanf("%d/%d/%d",&(p+i)->data_nasc.dia,&(p+i)->data_nasc.mes,&(p+i)->data_nasc.ano);
		printf("Salario    :"); fflush(stdin); scanf("%f",&(p+i)->salario); 
		(*(p+i)).deletado = 'N';  
	                     
	    do{
			printf("\nINCLUIR OUTRO? - INFORME 1 PARA SIM E 0 PARA VOLTAR :");
			fflush(stdin);
			scanf("%d",&continua);	
		}while(continua!=1 && continua!=0);
		
		if(continua==1){ 
			 incluir(&p[0]);
			 exit(0); //Chama a função e sai da função corrente.
		}else{
			main();
			exit(0); //Chama a função e sai da função corrente.
		}
}

int verifica(Pessoa *p)  // FUNCAO QUE VERIFICA SE TEM ESPAÇO PARA MAIS UM CADASTRO.
{
	int i,resposta,opcao; 				//locais
	for(i=0;i<REGISTRO;i++)
	{
		if((*(p+i)).deletado == 'S'){ 	//Se Igual a deletado. 
			resposta = i;
			break;    					//quando encontrar algum indice disponivel para.
		}else{
			resposta = -1;
		}
	}
	if(resposta == -1){ 				//Se não haver mais espaço p/ cadastrar
		do{
			system("cls");
			printf("\nNAO HA MAIS ESPACO PARA CADASTRO.\n\n");
			printf("0. VOLTAR\n");
			printf("1. SAIR DO PROGRAMA\n");
			printf("INFORME UMA DAS OPCOES ACIMA: "); 
			fflush(stdin);
			scanf("%d",&opcao);
			switch(opcao)
			{
		 		case 0 :
				  	main();
				  	exit(0); //Chama uma função e sai da função corrente.
			 	break;
		 		case 1 :
				    exit(0);
				break;	
			}
		}while(opcao != 1 && opcao != 0);  // Enquanto opcao não for valida 0 ou 1, é solicitado.
	}else{
		return resposta;
	}	
}

void alterar(Pessoa *p)
{
	int i,codigo,achou=0,altera,opcao,j;
	
	system("cls");
	printf("\n--------------------------------ALTERACAO DE CADASTRO--------------------------------\n");
	printf("INFORME O CODIGO A SOFRER ALTERACAO: "); scanf("%d",&codigo);
	
	for(i=0;i<REGISTRO;i++)
	{
		if(codigo == (*(p+i)).codigo && (*(p+i)).deletado == 'N'){ //Mostra dados da pessoa, se existir e não estiver deletado.
			achou =1; 
			j=i; 												   //j pega conteudo do i para usar fora do FOR
			printf("\nCODIGO: %03d\n",(*(p+i)).codigo);
			printf("1. NOME    : %s\n",(*(p+i)).nome);
			printf("2. IDADE   : %d\n",(*(p+i)).idade);
			printf("3. SALARIO : %.2f\n",(*(p+i)).salario);
			printf("4. DATA NASC.: %02d/%02d/%d\n",(*(p+i)).data_nasc.dia,(*(p+i)).data_nasc.mes,(*(p+i)).data_nasc.ano);
			break; 													// achou para com o for.
		}
	}
	if(achou == 0){	 //se não achou.
		printf("REGISTRO NAO ENCONTRADO\n\n");
	}else{
		do{
			printf("\n\nESCOLHA O CAMPO QUE DESEJA ALTERAR DE ACORDO COM NUMERCAO ACIMA OU 0 P/ VOLTAR: ");
			scanf("%d",&altera);
		}while(altera != 1 && altera != 2 && altera != 3 && altera != 4 && altera != 0); //enquanto nao for uma condição valida faz solicitação.
		switch(altera)
		{
			case 0 :
				main();
				exit(0); //Chama a função e sai da função corrente. 
			break;
			case 1 :
				printf("NOME ATUAL    : %s\n",(*(p+j)).nome);
				printf("INFORME NOVO NOME: "); 
				fflush(stdin);
				gets(p[j].nome);
				strupr(p[j].nome);						  //strupr() transforam nome em letra maiuscula
				printf("\nAlterado com sucesso.\n\n");
			break;
			case 2 :
				printf("IDADE ATUAL    : %d\n",(*(p+j)).idade);
				printf("INFORME NOVA IDADE: ");
				fflush(stdin);
				scanf("%d",&(p+j)->idade);
				printf("\nAlterado com sucesso.\n\n");
			break;
			case 3 :
				printf("SALARIO ATUAL: %.2f\n",(*(p+j)).salario);
				printf("INFROME NOVO SALARIO: ");
				fflush(stdin);
				scanf("%f",&(p+j)->salario);
				printf("\nAlterado com sucesso.\n\n");
			break;
			case 4 :
				printf("DATA NASCIMENTO ATUAL: %02d",(*(p+j)).data_nasc.dia);
				printf("/%02d/",(*(p+j)).data_nasc.mes);
				printf("%d",(*(p+j)).data_nasc.ano);
				
				printf("\nINFORME NOVA DATA DE NASCIMENTO dd/mm/aaaa :");
				fflush(stdin);
				scanf("%d/%d/%d",&(p+j)->data_nasc.dia,&(p+j)->data_nasc.mes,&(p+j)->data_nasc.ano);
				printf("\nAlterado com sucesso.\n\n");
			break;
		}
	}
	do{
		printf("0. VOLTAR\n");
		printf("1. ALTERAR OUTRO\n");
		printf("2. SAIR DO PROGRAMA");	
		printf("\nESCOLHA DAS OPCOES ACIMA: ");
		fflush(stdin);
		scanf("%d",&opcao);
	}while(opcao != 0 && opcao != 1 && opcao != 2);
	switch(opcao)
	{
		case 0 :
			main();
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 1 :
			alterar(&p[0]);
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 2 :
			exit(0); 
		break;
	} 	
}

void apagar(Pessoa *p)
{
	int exclui,i,confirma,opcao,achou=0;			//locais
	system("cls");
	printf("\n-------------------------------EXCLUIR REGISTRO-------------------------------\n");
	printf("INFORME CODIGO DO CADASTRO QUE DESEJA EXCLUIR: ");
	scanf("%d",&exclui); 
	
	for(i=0;i<REGISTRO;i++)
	{
		if(exclui == (*(p+i)).codigo && (*(p+i)).deletado != 'S'){	 //acha o codigo a ser excluido no sistema, se existir e não estiver deletado.
			achou = 1;
			printf("CODIGO: %03d\t NOME: %s\n\n",(*(p+i)).codigo,(*(p+i)).nome);
			do{
				printf("CONFIRMA EXCLUSAO DO REGSITRO ? - 1 PARA SIM 0 PARA NAO: "); scanf("%d",&confirma);	// Enquanto opcao não for valida 0 ou 1, é solicitado.	
			}while(confirma != 1 && confirma != 0);
			if(confirma == 1){
				(*(p+i)).deletado = 'S';
				printf("REGISTRO DELETADO COM SUCESSO\n\n");
				break;
			}
		}
	}
	if(achou==0){ //se não achou.
		printf("\nREGISTRO NAO ENCOTRADO.\n\n");}
		
	printf("0. VOLTAR\n");
	printf("1. APAGAR OUTRO\n");
	printf("2. SAIR DO PROGRAMA\n");
	do{
		printf("ESCOLHA UMA DAS OPCOES ACIMA: "); scanf("%d",&opcao);
		switch(opcao)
		{
	 		case 0 :
			  	main();
			  	exit(0); //Chama a função e sai da função corrente.
		 	break;
		 	case 1 :
		 		apagar(&p[0]);
		 		exit(0); //Chama a função e sai da função corrente.
	 		case 2 :
			    exit(0);
			break;	
		}
	}while(opcao != 1 || opcao != 0 || opcao != 2);  // Enquanto opcao não for valida 0 ou 1 ou 2, é solicitado.	
	
}

void lista(Pessoa *p)
{
	int i,opcao;  //locais
	system("cls");
	printf("\n---------------------------------------------LISTA DE REGISTROS---------------------------------------------\n");
	for(i=0;i<REGISTRO;i++){
		if((*(p+i)).deletado == 'N'){ 			//Lista somente os não deltados
			printf("CODIGO: %03d \t",(*(p+i)).codigo);
			printf("NOME: %s \t",(*(p+i)).nome);
			printf("IDADE: %d \t",(*(p+i)).idade);
			printf("DATA NASC.: %02d/%02d/%d \t",(*(p+i)).data_nasc.dia,(*(p+i)).data_nasc.mes,(*(p+i)).data_nasc.ano);
	  	    printf("SALARIO: %.2f\n",(*(p+i)).salario);
	  	    
	  }
	}
	printf("\n-------------------------------------------------------------------------------------------------------------\n\n");
	printf("0. VOLTAR\n");
	printf("1. SAIR\n");
	do{
		printf("ESCOLHA UMA DAS OPCOES ACIMA: "); scanf("%d",&opcao);
		switch(opcao)
		{
	 		case 0 :
			  	main();
			  	exit(0); //Chama a função e sai da função corrente.
		 	break;
		 	case 1 :
		 		exit(0);
		 	break;
		 }
	}while(opcao != 1 && opcao != 0); //solicita enquanto opcao não for valida 0 ou 1.
}

void pesquisa(Pessoa *p)
{
	int opcao;
	system("cls");
	printf("----------------------------PESQUISAS----------------------------\n");
	printf("1. PESQUISAR POR INTERVALO DE IDADES\n");
	printf("2. PESQUISAR POR NOMES\n");
	printf("0. VOLTAR\n\n");
	do{
		printf("ESCOLHA UMA DAS OPCOES ACIMA: ");
		fflush(stdin);
		scanf("%d",&opcao);
			switch(opcao)
			{
				case 0 :
					main();
					exit(0);	//Chama a função e sai da função corrente.
				break;
				case 1 :
					pesquisa_idade(&p[0]);
					exit(0); //Chama a função e sai da função corrente.
				break;
				case 2 :
					pesquisa_nome(&p[0]);
					exit(0); //Chama a função e sai da função corrente.
				break;
			}
		}while(opcao != 0 && opcao != 1 && opcao != 2);
}

void pesquisa_idade(Pessoa *p)
{
	int inicial,final,i,achou=0,opcao;
	
	system("cls");
	printf("--------------------------------PESQUISA POR IDADE--------------------------------\n");
	printf("INFORME IDADE INICIAL: "); scanf("%d",&inicial);
	printf("INFORME IDADE FINAL  : "); scanf("%d",&final);
	printf("-------------------------------RESULTADO DA PESQUISA-------------------------------\n");
	for(i=0;i<REGISTRO;i++)
	{
		if((*(p+i)).deletado == 'N'){ 		//Imprime somente não deltados
			if((*(p+i)).idade >= inicial && (*(p+i)).idade <= final){
				achou = 1;
				printf("CODIGO: %03d\t",(*(p+i)).codigo);
				printf("NOME: %s\t",(*(p+i)).nome);
				printf("IDADE: %d\t",(*(p+i)).idade);
				printf("DATA NASC.: %02d/%02d/%d \t",(*(p+i)).data_nasc.dia,(*(p+i)).data_nasc.mes,(*(p+i)).data_nasc.ano);
				printf("SALARIO: %.2f\n",(*(p+i)).salario);
			}
		}
	}
	if(achou == 0){ //Se não tiver nenhum registro.
		printf("NENHUM REGISTRO ENCONTRADO.\n");
	}
	printf("-----------------------------------------------------------------------------------\n");
	printf("0. VOLTAR\n");
	printf("1. NOVA PESQUISA\n");
	printf("2. SAIR DO PROGRAMA\n");
	
	do{
	//	system("cls");
		printf("INFORME UMA OPCOES ACIMA: ",&opcao); 
		fflush(stdin);
		scanf("%d",&opcao);
	}while(opcao != 0 && opcao != 1 && opcao != 2);
	
	switch(opcao)
	{
		case 0 :
			main();
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 1 :
			pesquisa(&p[0]);
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 2 :
			exit(0);
		break;
	}
}

void pesquisa_nome(Pessoa *p)
{
	int i,achou=0,opcao;
	char procura[CARACTER];
	
	system("cls");
	printf("-----------------------------------------PESQUISA POR NOME-----------------------------------------\n");
	printf("INFORME NOME A SER PROCURADO: ");
	fflush(stdin);
	gets(procura);
	strupr(procura);		//strupr() transforam procura em letra maiuscula
	printf("---------------------------------------RESULTADO DA PESQUISA----------------------------------------\n");
	for(i=0;i<REGISTRO;i++)
	{
		if((*(p+i)).deletado== 'N'){				//Mostrara apenas não deletados
			if(strcmp(procura,(*(p+i)).nome)==0){   // se nomes forem iguais 
				achou = 1;
				printf("CODIGO: %03d\t",(*(p+i)).codigo);
				printf("NOME: %s\t",(*(p+i)).nome);
				printf("IDADE: %d\t",(*(p+i)).idade);
				printf("DATA NASC.: %02d/%02d/%d \t",(*(p+i)).data_nasc.dia,(*(p+i)).data_nasc.mes,(*(p+i)).data_nasc.ano);
				printf("SALARIO: %.2f\n",(*(p+i)).salario);				
			}	
		}
	}
	if(achou == 0){ //Se não tiver nenhum registro.
		printf("NENHUM REGISTRO ENCONTRADO.\n");
	}
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("0. VOLTAR\n");
		printf("1. NOVA PESQUISA\n");
		printf("2. SAIR DO PROGRAMA\n");
		printf("INFORME UMA OPCOES ACIMA: ",&opcao); 
		fflush(stdin);
		scanf("%d",&opcao);
	}while(opcao != 0 && opcao != 1 && opcao != 2);
	
	switch(opcao)
	{
		case 0 :
			main();
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 1 :
			pesquisa(&p[0]);
			exit(0); //Chama a função e sai da função corrente.
		break;
		case 2 :
			exit(0);
		break;
	}	
}

