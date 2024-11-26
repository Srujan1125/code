 #include<stdio.h>
int main(){
    // sum of all odd and even numbers
    int n,i,sum=0;
 printf("enter the number ");
 scanf("%d",&n);
 for (i=1; i<=n; i++){
    sum+=i;
    printf("sum is %d\n",sum);
 }
    
return 0;
}