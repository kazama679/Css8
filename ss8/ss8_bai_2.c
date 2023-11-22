#include<stdio.h>
int main(){
	int row,col,i,j;
	printf("nhap so hang va so cot cua mang: ");
	scanf("%d %d",&row,&col);
	int a[row][col];
	float sum;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]%2==0){
			    printf("%d\n",a[i][j]);
		 	    sum+=a[i][j];
		    }
		}
	}
	printf("Tong cac phan tu so chan trong mang la: %.2f",sum);
}
