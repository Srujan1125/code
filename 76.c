
#include<stdio.h>
void num(int n);
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    num(n);
}
void num(int n){
    if(n%2==0){
        printf("it is even");
    }
    else{
        printf("it is odd");
    }
}