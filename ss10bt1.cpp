#include<stdio.h>
int main(){
	int n,input,flap=1,location;
	printf("moi nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	int size=sizeof(array)/sizeof(int );
	for(int i=0;i<size;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("moi nhap vao phan tu bat ki de kiem tra: ");
	scanf("%d",&input);
	for(int i=0;i<size;i++){
		if(input==array[i]){
			flap=1;
			location=i;
		}
		else{
			flap=0;
		}
	}
	if(flap==1){
		printf("phan tu ton tai trong mang,vi tri cua phan tu la %d",location);
	}
	else{
		printf("phan tu khong ton tai trong mang!!!");
	}
	return 0;
}
