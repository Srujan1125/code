#include<stdio.h>
int main(){
    int M,P,C,E,CM;
    printf("enter the marks of M out of 200");
    scanf("%d",&M);
    printf("enter the marks of P out of 200");
    scanf("%d",&P);
    printf("enter the marks of C out of 200");
    scanf("%d",&C);
    printf("enter the marks E out 100");
    scanf("%d",&E);
    CM=(M/2+P/2+C/2+E);
    printf("cut of marks is %d",CM);
    return 0;
}