#include<stdio.h>
int main(){
	int tich,n,i;
	for(int n=1;n<=9;n++){
		printf("Bang cuu chuong %d la:\n",n);
	    for(int i=1;i<=10;i++){
		    tich=n*i;
		    printf("%d x %d = %d\n",n,i,tich);
	    }  
	}
	
	
	
	return 0;
}
