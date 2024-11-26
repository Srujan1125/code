# include<stdio.h>
int main(){
   int a=0,n,b=1,fib;
   printf("enter the num of terms ");
   scanf("%d",&n);
   printf("the fabanocci series upto n is %d,%d,",a,b);
   for(int i=3; i<=n; i++){
    fib=a+b;
    printf("%d,",fib);
    a=b;
    b=fib;
   }
return 0;
}