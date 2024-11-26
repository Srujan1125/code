#include<stdio.h>
int main(){
    int m,p,c,e,s,total,percent;
    printf("enter the marks : ");
    scanf("%d%d%d%d%d",&m,&p,&c,&e,&s);
    total=m+p+c+e+s;
    percent=(total/500)*100;
    printf("total is : %d\n",total);
    printf("percent is : %d",percent);
    return 0;
}