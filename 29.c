# include<stdio.h>
int main(){
   int n,t,p=0,r;
   printf("enter the number ");
   scanf("%d",&n);
   t=n;
   while (n>0){
    r=n%10;
    p=p*10+r;
    n/=10;
   }
   if (p==t){
    printf("it is palidrome ");
   }else {
    printf("it  is not palidrome");
   }
return 0;
}