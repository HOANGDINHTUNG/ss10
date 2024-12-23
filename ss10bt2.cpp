#include<stdio.h>
int main(){
	int n,temp;
	printf("Moi nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	int size=sizeof(array)/sizeof(int );
	for(int i=0;i<size;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++){
			if(array[j+1]<array[j]){
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("mang mang sau khi xep: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
