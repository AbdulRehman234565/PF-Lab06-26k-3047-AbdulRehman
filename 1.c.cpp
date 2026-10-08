#include <stdio.h>
int main(){
	int dist[5];
	int fuel[5];
	int i;
	float mileage;
	for(i=0;i<5;i++)
	{
		printf("\nEnter Distance for trip %d : ",i+1);
		scanf("%d",&dist[i]);
			printf("\nEnter fuel for trip %d : ",i+1);
		scanf("%d",&fuel[i]);
		mileage = dist[i]/fuel[i];
		printf("\nMileage : %f",mileage);
		if(mileage>15){
			printf("\nGood Mileage");
		}
		else{
				printf("\nBAD Mileage");
		}
		
	}
}
