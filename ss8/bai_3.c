#include<stdio.h>
int main(){
	int n,sum;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int fN;
	for(int i=0;i<n;i++){
		printf("nhap gia tri cua phan tu: ");
		scanf("%d",&a[i]);
	}
	    printf("findNumber: ");
		scanf("%d",&fN);
	for(int i=0;i<n;i++){
		if(fN==a[i]){
			printf("%d\n",a[i]);
			sum+=a[i];
		}
	}
	printf("tong cac phan tu trong mang co gia tri = %d la: %d",fN,sum);
}
