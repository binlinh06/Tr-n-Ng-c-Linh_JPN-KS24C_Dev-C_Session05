#include<stdio.h>
int main(){
	int n,sum;
	printf("Nhap vao mot so n:");
	scanf("%d",&n);
	if(n<0){
		printf("So nhap vao ko hop le");
		return 1;
	}else{
		for(int i=0;i<=n;i++){
			printf("lan lap thu: %d,ket qua cua sum la:%d\n",i,sum);
			sum=sum+i;
		}
	}
	printf("Tong la:%d",sum);
	return 0;
}
