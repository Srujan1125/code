# include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the last number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n<0){
            printf("end");
            break;
        }
        sum+=i;
    }
    printf("%d",sum);
return 0;
}