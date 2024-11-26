# include<stdio.h>
int main(){
   float sales;
   printf("enter the sales");
   scanf("%f",&sales);
   if (sales<=0){
    printf("it is not valid");
   }else if (sales<=500){
    printf("the commission is %f",sales*0.05);
   }else if (sales<=2000){
    printf("the commission is %f",35+(sales-500)*0.1);
   }else if(sales<=5000){
    printf("the commission is %f",185+(sales-2000)*0.12);
   }else{
    printf("the commission is %f",sales*0.125);
   }
return 0;
}