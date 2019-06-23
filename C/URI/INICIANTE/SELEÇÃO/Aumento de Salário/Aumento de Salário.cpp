#include<stdio.h>

int main(void)
{
	float sal,nsal=0,reag=0;
	int perc;
	
	scanf("%f",&sal);
	
	if(sal>=0 && sal<=400.00){
		reag = sal*0.15;
		nsal = reag+sal;
		perc = 15;
	}else{
		if(sal>=400.01 && sal<=800.00){
		    reag = sal*0.12;
			nsal = reag+sal;
			perc = 12;	
		}else{
			if(sal>=800.01 && sal<=1200.00){
				reag = sal*0.10;
				nsal = reag+sal;
				perc = 10;	
			}else{
				if(sal>=1200.01 && sal<= 2000.00){
					reag = sal*0.07;
					nsal = reag+sal;
					perc = 7;	
				}else{
					if(sal>2000.00){
						reag = sal*0.04;
						nsal = reag+sal;
						perc = 4;
				}
			}
		  }
		}
	}
	printf("Novo salario: %.2f\n",nsal);
	printf("Reajuste ganho: %.2f\n",reag);
	printf("Em percentual: %d %%\n",perc);
	
	return 0;
}
