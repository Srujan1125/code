# include<stdio.h>
int main(){
float gross_salary,houserent,gst,basic_salary;
printf("enter the amount of basic_salary");
scanf("%f",&basic_salary);
houserent=0.5*basic_salary;
gst=0.2*basic_salary;
gross_salary=gst+basic_salary+houserent;
printf("gross_salary is %f",gross_salary);
return 0;
}