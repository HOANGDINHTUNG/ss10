#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	int size=sizeof(array)/sizeof(int );
	for(int i=0;i<size;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	for(int i=1;i<size;i++){
		int key=array[i];
		int j=i-1;
		while(j>=0&&key<array[j]){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
	printf("phan tu theo thu tu tang dan la: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
