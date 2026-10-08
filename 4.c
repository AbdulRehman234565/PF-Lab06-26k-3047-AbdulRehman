#include <stdio.h>
int main(){
	int stored[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int code;
	printf("enter code : ");
	scanf("%d",&code);
	int i;
	int a=0;
	for(i=0;i<20;i++){
		if(code==stored[i])
		{ 
		a=1;
			printf("found at postion %i",i+1);
		
		}
	
	
	
}
if(a==0)
{
printf("out of stock");	
}
}
