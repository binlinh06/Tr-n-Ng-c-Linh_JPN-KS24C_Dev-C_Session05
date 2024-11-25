#include<stdio.h>
int main(){
	int n,tich;
	do{
		printf("Xin moi 1 so nguyen duong tu 1 den 10: ");
		scanf("%d",&n);
		if(n<1||n>10){
			printf("Ko hop le!");
			return 1;
		}
	}while(n<1||n>10);
	printf("Bang cuu chuong %d la:\n",n);
	for(int i=1;i<=10;i++){
		tich=n*i;
		printf("%d x %d = %d\n",n,i,tich);
	}
		return 0;
}
