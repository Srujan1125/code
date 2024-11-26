# include<stdio.h>
int main(){
 char operater;
 int a,b,result;
 printf("enter the character");
 scanf("%c",&operater);
 printf("enter the values ");
 scanf("%d%d",&a,&b);
 switch(operater){
    // sum of the numbers 
    case '+':
    result=a+b;
printf("%d+%d=%d",a,b,result);
 }
return 0;
}