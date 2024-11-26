# include<stdio.h>
int main(){
int f=1,a,n;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    f*=a;
}
printf("%d raised to power %d is: %d",a,n,f);
return 0;
}