# include<stdio.h>
int main(){
    int num[10],sum=0;
    printf("enter the numbers ");
    for (int i=0; i<=10; i++){
        scanf("%d\n",&num[i]);
        sum+=i;
    }
    printf("sum of the numbers is %d\n",sum);
return 0;
}