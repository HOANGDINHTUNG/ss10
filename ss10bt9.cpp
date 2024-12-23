#include<stdio.h>
int main(){
	int col,row,flap;
	printf("Moi nhap vao hang: ");
	scanf("%d",&row);
	printf("Moi nhap vao cot: ");
	scanf("%d",&col);
	int array[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	if(row==col){
		printf("Duong cheo chinh cua ma tran truoc khi sap xep la: ");
		for(int i=0;i<row;i++){
			printf("%d  ",array[i][i]);
		}
		flap=1;
	}else{
		printf("Ma tran khong co duong cheo chinh!!!!");
	}
	if(flap==1){
		for(int i=0;i<row;i++){
			int min=array[i][i];
			for(int j=i+1;j<row;j++){
				if(array[j][j]<min){
					min=array[j][j];
					array[j][j]=array[i][i];
					array[i][i]=min;
				}
			}
		}
		printf("\nDuong cheo chinh sau khi duoc sap xep: ");
			for(int i=0;i<row;i++){
			printf("%d  ",array[i][i]);
		}
	}
	return 0;
	
}
