# include<stdio.h>
#include<math.h>
int main(){
   int num,temp,a=0,i;
   printf("enter the num\n");
   scanf("%d",&num);
   temp=num;
   while(num>0){
    i=num%10;
    a=(i*i*i)+a;
    num/=10;
   }
   if (a==temp){
    printf("it is armstrong ");
   }else{
    printf("it is not armstrong");
   }
return 0;
}