#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int oNs[n];
	for(int i=0;i<n;i++){
		printf("oNs[%d]=",i);
		scanf("%d",&oNs[i]);
	}
	int nNs[n-1];
	int dI;
	printf("deleteIndex=");
	scanf("%d",&dI);
	for(int i=0;i<=dI-1;i++){
		printf("nNs[%d]=%d\n",i,oNs[i]);
	}
	for(int i=dI+1;i<sizeof(oNs)/sizeof(int);i++){
		printf("nNs[%d]=%d\n",i,oNs[i]);
	}
	
}
