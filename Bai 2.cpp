#include<stdio.h>
int main(){
	int dung=69;
	int traloi;
	int check=1;
	while(check==1){
		printf("Nhap so bat ky:" );
	    scanf("%d",&traloi);
		if(traloi>69){
		printf("So ban nhap lon hon gia tri can tim\n");
	    }else if(traloi<69){
	    printf("So ban nhap nho hon gia tri can tim\n");
		}else{
		printf("Dung roi\n");
		check=0;
		}
	}
	return 0;
}

