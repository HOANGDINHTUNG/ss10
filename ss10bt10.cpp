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
		for(int j=col-1,i=0;j>=0;j--,i++){
			printf("%d  ",array[i][j]);
		}
		flap=1;
	}else{
		printf("Ma tran khong co duong cheo chinh!!!!");
	}
	if(flap==1){
		for(int i=0;i<row;i++){
			int max=array[i][row-1-i];
			for(int j=i+1;j<row;j++){
				if(array[j][row-1-j]>max){
					max=array[j][row-1-j];
					array[j][row-1-j]=array[i][row-1-i];
					array[i][row-1-i]=max;
				}
			}
		}
		printf("\nDuong cheo phu cua ma tran sau khi dc xep tu lon toi be la: ");
		for(int j=col-1,i=0;j>=0;j--,i++){
			printf("%d  ",array[i][j]);
		}
	}
	return 0;
}
