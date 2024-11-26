#include<stdio.h>
// simple interest calculation
int main(){
    float p,t,r,s;
    printf(" enter p\n");
    scanf("%f",&p);
    printf(" enter t\n");
    scanf("%f",&t);
    printf("enter r\n");
    scanf("%f",&r);
    s=(p*t*r)/100;
    printf(" s is=%f",s);
    return 0;
}