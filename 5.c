#include <stdio.h>
int main(){
	int i;
	int temp[7];
	float average=0;
	int sum=0;
	int a=0;
	for(i=0;i<7;i++){
	printf("\nEnter temp of day %d : ",i+1);
	scanf("%d",&temp[i]);
	sum = sum + temp[i];
	if(temp[i]>35){
	
		a = a + 1;
			printf("WARNING ISSUED : %d ",a);
	}
	}
	average = sum/7;
	printf("Average Is : %f",average);
}
