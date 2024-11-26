# include<stdio.h>
int main(){
    char operater;
    double a,b,c;
    printf("enter the operater(+,-,*,/): ");
    scanf("%C",&operater);
    printf("enter the numbers ");
    scanf("%lf%lf",&a,&b);
    switch (operater)
    {
    case  '+':
    c=a+b;
    printf("%lf+%lf=%lf",a,b,c);
    break;
    case '-':
    c=a-b;
    printf("%lf-%lf=%lf",a,b,c);
    break;
    case '*':
    c=a*b;
    printf("%lf*%lf=%lf",a,b,c);
    break;
    case'/':
    c=a/b;
    printf("%lf/%lf=%lf",a,b,c);
    break;
    }
return 0;
}