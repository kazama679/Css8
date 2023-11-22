#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang n: ");
	scanf("%d",&n);
	int oN[n];
	for(int i=0;i<n;i++){
		printf("oN[%d]=",i);
		scanf("%d",&oN[i]);
	}
	int addValue,addIndex;
	printf("nhap gia tri addValue: ");
	scanf("%d",&addValue);
	printf("nhap gia tri addIndex: ");
	scanf("%d",&addIndex);
	int nN[n+1];
	for(int i=0;i<=addIndex-1;i++){
		printf("nN[%d]=%d\n",i,oN[i]);
	}
	printf("addValue=%d\n",nN[addIndex]);
	for(int i=addIndex+1;i<=sizeof(oN)/sizeof(int);i++){
		printf("nN[%d]=%d\n",i,oN[i]);
	}
	
	return 0;
}
