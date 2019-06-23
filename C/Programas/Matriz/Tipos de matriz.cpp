#include<stdio.h>
#include<stdlib.h>

#define D 3 //dimensão 

int main(void)
{
 int m[D][D];
 int i,j;
 
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
         printf("Informe elemento linha %d coluna %d: ",i,j);
         scanf("%d",&m[i][j]);                       
       }
     }
     puts("Primaria");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
        if(i==j)
          printf(" %d ",m[i][j]);
          else
              printf(" x ");
       }
       printf("\n");
     }
     puts("Acima Primaria");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
        if(i<j)//linha menor que coluna
          printf(" %d ",m[i][j]);
          else
              printf(" x ");
          }
       printf("\n");
       }
       puts("Abaixo Primaria");
       for(i=0;i<D;i++)
       {
        for(j=0;j<D;j++)
        {
         if(i>j)//linha maior que coluna
           printf(" %d ",m[i][j]);
           else
              printf(" x ");
          }
        printf("\n");
       }
     puts("\nSecundaria");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
        if(i+j+1==D) // ou (i+j==D-1)
          printf(" %d ",m[i][j]);
          else
              printf(" x ");
       }
       printf("\n");
     }
     puts("\nAcima da Secundaria");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
        if(i+j<D-1)
          printf(" %d ",m[i][j]);
          else
              printf(" x ");
       }
       printf("\n");
     }
     puts("\nAbaixo da Secundaria");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
        if(i+j>D-1)
          printf(" %d ",m[i][j]);
          else
              printf(" x ");
       }
       printf("\n");
     }
     puts("\nTransposta");
     for(i=0;i<D;i++)
     {
       for(j=0;j<D;j++)
       {
          printf(" %d ",m[j][i]); //somente a impressão esta trocada
       }
       printf("\n");
     }

system("pause>nul");
}
