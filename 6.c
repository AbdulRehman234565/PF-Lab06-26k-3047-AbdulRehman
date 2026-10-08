#include <stdio.h>
int main(){
	int rainfall[6];
	int i;
	int a=0;
	int deficitamount;
	int totaldeficit;
	for(i=0;i<6;i++){
		printf("\nEnter Rainfall  in month %d: ",i+1);
		scanf("%d",&rainfall[i]);
		if(rainfall[i]<100){
			a=1;
			printf("Month %d has deficit  rainfall",i+1);
			   deficitamount = 100.0 - rainfall[i]; 
             totaldeficit = totaldeficit + deficitamount;
		}
	else if(rainfall[i]>100){
		a=0;
			printf("Month %d has surplass rainfall",i+1);
	}
	}
	printf("totaldeficit  : %d",totaldeficit);
	
}
