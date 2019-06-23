/* Escreva um programa que peça três números inteiros, correspondentes a dia, mês e ano. 
    Peça os números até conseguir valores que estejam na faixa correta (dias entre 1 e 31), mês entre 1 e 12 e ano entre 1900 e 2100. 
    Verifique se o mês e o número de dias batem (incluindo verificação de anos bissextos). 
    Se estiver tudo certo imprima o número que aquele dia corresponde no ano.
    PS: um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto para os anos divisíveis por 400, 
    que também são bissextos.
*/
#define JANEIRO 31
#define FEVEREIRO 28
#define MARCO 31
#define ABRIL 30
#define MAIO 31
#define JUNHO 30
#define JULHO 31
#define AGOSTO 31
#define SETEMBRO 30
#define OUTUBRO 31
#define NOVEMBRO 30

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia,mes,ano, bi=0,soma=0;
    while(1)
    {
            system("cls");
            printf("digite uma data no formato DD/MM/AAAA: ");
            scanf("%d/%d/%d",&dia,&mes,&ano);
            // VALIDA ANO
            if (ano < 1900 || ano > 2100)
            {
               printf("ano incorreto\n");
               system("pause"); 
               continue;
            }
            // VALIDA MES
            if (mes < 1 || mes > 12)
            {
               printf("mes incorreto\n");
               system("pause"); 
               continue;
            }
            // VALIDA DIA            
            if (dia > 1 && dia < 32)
               if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
                  if (dia == 31)
                  {
                      printf("dia incorreto\n");
                      system("pause"); 
                      continue;
                  }
            // VALIDA FEVEREIRO
            if (mes == 2 && dia > 30)
            {
               printf("dia incorreto\n");
               system("pause"); 
               continue;
            }            
            // VALIDA ANO BISSEXTO
             if (ano % 4 == 0)
                if (ano % 100 != 0)
                   bi=1;
                else
                   if (ano % 400 == 0)
                       bi = 1;
            if (mes == 2 && dia == 29 && bi == 0)
            {
                printf("dia incorreto nao eh bissexto\n");
                system("pause"); 
                continue;
            }
            if (mes == 1)
                soma = dia;
            if (mes == 2)
               soma = JANEIRO + dia;
            if (mes == 3)
                soma = JANEIRO + FEVEREIRO + dia; 
            if (mes == 4)
               soma = JANEIRO + FEVEREIRO + MARCO + dia; 
            if (mes == 5)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + dia; 
            if (mes == 6)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + dia; 
            if (mes == 7)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + dia; 
            if (mes == 8)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + JULHO + dia; 
            if (mes == 9)
                soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + JULHO + AGOSTO + dia; 
            if (mes == 10)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + JULHO + AGOSTO + SETEMBRO + dia; 
            if (mes == 11)
                soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + JULHO + AGOSTO + SETEMBRO + OUTUBRO + dia; 
            if (mes == 12)
               soma = JANEIRO + FEVEREIRO + MARCO + ABRIL + MAIO + JUNHO + JULHO + AGOSTO + SETEMBRO + OUTUBRO + NOVEMBRO + dia; 
            if (mes > 2 && bi == 1)
                soma = soma + 1;
            if (bi == 1)
                printf("ANO BISSEXTO\n");
            printf("Hoje eh o dia %d do ano\n", soma);
            system("pause");
            continue;                                                                                                                        
    }
}
