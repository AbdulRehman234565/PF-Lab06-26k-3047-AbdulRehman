#include <stdio.h>

int main() {
	int seat[30];
	int i;
	int sum=0;
	int a=0;
	printf("if seat occupied (1) or empty (0)");
	for(i=0;i<30;i++){
		printf("\nseat number %d : ",i+1);
		scanf("%d",&seat[i]);
		if(seat[i]==1){
			sum++;
		}
		else{
			a++;
		}
	}
	printf("\nSEAT OCCUPIED ARE : %d",sum);
	printf("\nSEAT empty ARE : %d",a);
}
