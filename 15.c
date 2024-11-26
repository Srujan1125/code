#include<stdio.h>
int main(){
    int M,P,C,E,S,T,N;
    printf("enter the marks of M out of 100\n");
    scanf("%d",&M);
    printf("enter the marks of P out of 100\n");
    scanf("%d",&P);
    printf("enter the marks of C out of 100\n");
    scanf("%d",&C);
    printf("enter the marks of E out of 100\n");
    scanf("%d",&E);
    printf("enter the marks of S out of 100\n");
    scanf("%d",&S);
    T=(M+P+C+E+S);
    N=T/5;
    printf("N is %d",N);
    if(N>90){
        printf("it is A++\n");
    }else if (N>80){
        printf("it is A+\n");
    }else if (N>70){
        printf("it is A\n");
    }else if (N>50){
        printf("it is B++\n");
    }
    else{
        printf("it is B+");
    } 
    return 0;
}