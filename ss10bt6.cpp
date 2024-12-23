#include<stdio.h>
int main(){
	int n,x,index=0,flap=0;
	int result[n];
	printf("Moi nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	int size=sizeof(array)/sizeof(int );
	for(int i=0;i<size;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("moi nhap vao so nguyen x bat ki de tim kiem: ");
	scanf("%d",&x);
	for(int i=0;i<size;i++){
		if(x==array[i]&&flap==0){//dung 1 lan xong bo
			result[index]=i;
			++index;
		}
	}
	printf("so %d tim duoc o vi tri ",x);
	for(int i=0;i<index;i++){
		printf("%d ",result[i]);
	}
	return 0;
}
