#include <stdio.h>
#include <stdlib.h>

#define D 3

int main(void)
{
    int m[D][D],vetA[D],vetB[D],i,j,maior,menor;
    
    for(i=0;i<D;i++)
    {
        for(j=0;j<D;j++)
        {
            printf("Informe m[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }    
    maior = m[0][0];
    menor = m[0][0];
    
    for(i=0;i<D;i++) 
    {
        for(j=1;j<D;j++)
        {
            if(m[i][j] > m[i][j-1]){
                maior = m[i][j]; 
                vetA[i] = maior; }
        }
        
    }
    
    for(i=1;i<D;i++)
    {
        for(j=0;j<D;j++)
        {
            if(m[i][j] < m[i-1][j]){
               menor  = m[i][j]; }
        }
        vetB[j]= menor;
    }
    printf("\nMATRIZ CARREGADA\n");
    for(i=0;i<D;i++)
    {
        for(j=0;j<D;j++)
        {
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<D;i++)
    {
        printf("\nMaior da linha %d:",i);
        printf(" %d ",vetA[i]);
    }
    printf("\n");
    for(i=0;i<D;i++)
    {
        printf("\nMenor de cada coluna %d:",i);
        printf(" %d ",vetB[i]);
    }
 system("pause>nul");   
}
