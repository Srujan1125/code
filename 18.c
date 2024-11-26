# include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter the numbers ");
    scanf("%d%d%d",&a,&b,&c);
    max = (a>b) ? (a>c ? a:b):(b>c ? b:c);
    printf("the maximum number is %d\n",max);
return 0;
}