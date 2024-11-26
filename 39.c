# include<stdio.h>
int main(){
    int i,n;
    printf("enter the nth term");
    scanf("%d",&n);
    if (n<=0){
        printf("it is invalid");
    }else {
      for(i=1; i<n; i++){
        printf("%d/%d!+",i,i);
      }
    printf("%d/%d!",n,n);
    }
return 0;
}