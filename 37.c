 #include<stdio.h>
int main(){
int n;
printf("enter the value of n");
scanf("%d\n",&n);
for(int i=2; i<=n; i+=2){
    printf("%d\n",i);
}
return 0;
}