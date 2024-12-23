#include<stdio.h>
int main(){
	int n,m,temp;
	printf("moi nhap vao cot: ");
	scanf("%d",&m);
	printf("moi nhap vao hang: ");
	scanf("%d",&n);
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("array[%d][%d] = ",i,j); 
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("mang truoc khi sap xep: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",array[i][j]);	 
		}
		printf("\n");
	}
	printf("Mang sau khi sap xep theo dong:\n");
    int k=m*n;
    for(int i=0;i<k-1;i++){
    	for(int j=i+1;j<k;j++){
    		if(array[i/m][i%m]>array[j/m][j%m]){
    			temp=array[i/m][i%m];
    			array[i/m][i%m]=array[j/m][j%m];
    			array[j/m][j%m]=temp; 
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",array[i][j]);	 
		}
		printf("\n");
	}
	return 0;
}
