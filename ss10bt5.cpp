#include<stdio.h>
int main(){
	int n,min,x,index=0,location;
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
	printf("moi nhap vao phan tu can tim kiem: ");
	scanf("%d",&x);
	int left=0;
	int right=size-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(array[mid]==x){
			index=1;
			location=mid;
		}
		if(array[mid]>x){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	if(index==1){
		printf("phan thu %d duoc tim thay tai vi tri %d",x,location);
	}
	else{
		printf("phan tu %d khong tim thay trong mang",x);
	}
	return 0;
}
