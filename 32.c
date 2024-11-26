# include<stdio.h>
int main(){
   int a[15],max=0,smax=0,i;
   printf("enter the numbers ");
   scanf("%d",&a[i]);
   for ( i=0; i<=5; i++){
    if (a[i]>max){
        smax=max;
        max=a[i];
    }else if(a[i]>smax && a[i]!=max){
        smax=a[i];
    }
    printf("max is %d\n,smax is %d\n",max,smax);
   }
return 0;
}