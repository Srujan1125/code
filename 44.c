# include<stdio.h>
int main(){
   float units;
   printf("enter the units ");
   scanf("%f",&units);
   if(units<=0){
    printf("it is invalid");
   }else if(units<200){
    printf("the charge is %f",0.5*units );
   }else if(units>210 && units<400){
    printf("the charge is %f",100+(units-200)*0.65);
   }else if(units>401 && units<600){
    printf("the charge is %f",230+(units-400)*0.8);
   }else if (units>600){
     printf("the charge is %f",425+(units-600)*1.25);
   }
return 0;
}