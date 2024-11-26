#include<stdio.h>
int main(){
    int k;
    printf("enter the number ");
    scanf("%d",&k);
    if(k%2==1){
        printf("the num is odd");
    }
    else{
        printf("the num is even");
    }
    return 0;
}