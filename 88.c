#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int *p;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=a;
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
}
 