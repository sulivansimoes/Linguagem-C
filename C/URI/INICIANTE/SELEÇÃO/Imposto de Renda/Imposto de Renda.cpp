#include<stdio.h>

int main(void)
{
	float sal,rend=0;
	
	scanf("%f",&sal);
	
	if(sal>=0 && sal<= 2000.00){
		printf("Isento\n");
	}else{
		if(sal>=2000.01 && sal <= 3000.00){
			rend = sal * 0.08;
			printf("%.2f\n",rend);
		}else{
			if(sal>=3000.01 && sal <= 4500.00){
				rend = 1000.00 * 0.08;
				sal = (sal - 3000.00);
				rend = sal * 0.18 + rend;
				printf("%.2f\n",rend);
			}else{
				if(sal>4500.00){
					rend = 1000.00 * 0.18;
					sal = (sal - 4000.00);
					rend = sal * 0.28 + rend;
					printf("%.2f\n",rend);
				}
			}
		}
	}
	return 0;
}
