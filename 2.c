#include <stdio.h>
int main(){
	int n;
	int i;
	int a=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			a=1;
			break;
		}
	
	}
		if(a==0){
			printf("PRINE NUMBER");
		}
		else  { 
		printf("NOT PRIME");
		}
}
