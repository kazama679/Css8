#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++){
		printf("num[%d]=",i);
		scanf("%d",&num[i]);
	}
	int uI,uV;
	printf("updateIndex=");
	scanf("%d",&uI);
	printf("updateValue=");
	scanf("%d",&uV);
	printf("num[%d]=%d",uI,uV);
}
