#include<stdio.h>
int main(){
    int i,n,a=0;
    printf("enter the number");
    scanf("%d",&n);
    if (n<0){
        n-=n;
    }while(n>0){
        i=n%10;
        a=a+i;
        n/=10;
    }
    printf("%d",a);
    return 0;
}