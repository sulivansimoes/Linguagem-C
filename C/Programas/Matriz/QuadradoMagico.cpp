#include <stdio.h>
#include <stdlib.h>

#define  D 3
int main(void)
{
	// variaveis
    int i,j,somP=0,somS=0,somL=0,somC=0;         
    int flag = 1;           //  0= falso  1= verdade
    
    // matrizes
    int m[D][D];             
    
    for (i=0;i<D;i++)
    {
        for(j=0;j<D;j++)
        {
          printf("Informe m[%d][%d]: ",i,j);
          scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<D;i++)
    {
      for(j=0;j<D;j++)
      {
        if(i==j){
          somP +=m[i][j];} //soma diagonal principal
        if(i+j == D-1){
          somS += m[i][j];} //soma diagonal secundaria
      }
    }
    if(somS!=somP){
        flag = 0;
    }else{
          flag = 1;
          for(i=0;i<D;i++)
          {
          	somL =0;
          	somC =0;
            for(j=0;j<D;j++)
            {
              somL+= m[i][j];
              somC+= m[j][i];
            }
            if(somL!=somC)
              break;
          }
          if(somL == somC){
          	if(somL != somP){
          	flag = 0;  }}
      }
      printf("\nMATRIZ CARREGADA\n");
	  for (i=0;i<D;i++)
	    {
	        for(j=0;j<D;j++)
	        {
	          printf("% d ",m[i][j]);
	        }
	        printf("\n");
	  }
      switch(flag)
	  {
	    case 0 :
	    	printf("\nQuadrado nao eh magico\n");
	    break;
	    case 1 :
	    	printf("\nQuadrado eh magico\n");
        break;
        default :
        	printf("\nErro encontrado! Retorno fora dos padrões.\n");
        break;
	  }  
    system("pause>nul");       
}
