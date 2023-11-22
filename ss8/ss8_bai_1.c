#include<stdio.h>
int main(){
	int n, min, max; 
	printf("vui long nhap size cua mang? ");
	scanf("%d",&n);
	int ListNumber[n];
	for(int i=0; i<n; i++){
	printf("Nhap tu ban phim = ", i);
	scanf("%d", &ListNumber[i]);
	}
	max = ListNumber[1];
	min = ListNumber[1];
	for(int i =0;i <n; i++){
	if(max<ListNumber[i]){
		max=ListNumber[i]; 
	}
	if(min>ListNumber[i]){
		min=ListNumber[i];
	} 
	printf("ListNumber[%d] = %d\n", i, ListNumber[i]);
	}
	printf("max = %d\n",max);
	printf("min = %d\n", min);
}
