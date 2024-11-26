#include<stdio.h>
int main(){
    int s,m,h;
    printf("enter the no of seconds ");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=(s%3600)%60;
    printf("the time in");
    printf("hours is %d\n",h);
    printf("   minutes is %d\n",m);
    printf("   seconds is %d\n",s);
    return 0;
}