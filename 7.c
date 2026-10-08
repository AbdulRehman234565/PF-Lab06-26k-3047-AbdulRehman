#include <stdio.h>
int main(){
int key[10]={0,'a',2,'b',4,5,'c',7,'f',9};
int digits=0;
int alphabets=0;
int i;
for(i=0;i<10;i++){
	if(key[i]>=0 && key[i]<=9){
			digits++;
	}
	else if(key[i]>='a' && key[i]<='f'){
			alphabets++;	
}	

    
}
printf("\nDIGITS :  %d ",digits);
printf("\nalphabets : %d",alphabets);


}

