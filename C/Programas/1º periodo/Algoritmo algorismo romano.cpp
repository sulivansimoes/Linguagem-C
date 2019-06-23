/*Pega algorismo arbico e imprime em algorismo romano*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arabico,romano,c,d,u;
    do
      {
       printf("Informe o algoarismo arabico e 0 para sair: ");
       fflush(stdin);
       scanf("%d",&arabico);
       
       if(arabico > 0 && arabico <1000 && arabico != 0){
       	 c = arabico / 100;
         d = arabico % 100;
		 u = d % 10;         
      
                  
         switch(u){
                   case 1 :
                       printf(" %d = I\n");
                   break;
                   case 2 :
                       printf("2 = II\n");
                   break;
                   case 3 :
                        printf("3 = III\n");
                   break;
                   case 4 :
                        printf("4 = IV\n");
                   break;                     
                   case 5 :
                        printf("5 = V\n");
                   break;
                    }
            }else 
            printf("\nInforme menor que mil");
   		 }while(arabico != 0);
   		 
        
}

