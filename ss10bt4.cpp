#include<stdio.h>
int main(){
	int n,min;
	printf("Moi nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	int size=sizeof(array)/sizeof(int );
	for(int i=0;i<size;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<size;i++){
		min=array[i];
		for(int j=i+1;j<size;j++){
			if(array[j]<min){
				min=array[j];
				array[j]=array[i];
				array[i]=min;
			}
		}
	}
	printf("phan tu theo thu tu tang dan la: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
