# include<stdio.h>
int main(){
   int num,i=1;
   printf("enter the num");
   scanf("%d",&num);
   if(num>0){printf("the factors are:");
   while(num>0 && i<=num){
    if(num%i==0){
    printf("%d,",i);
    }
    i++;
   }
   }else {
    printf("it is invalid");
   }
return 0;
}