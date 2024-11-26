 #include<stdio.h>
int main(){
int n,i=1,f=1;
printf("enter the value of n");
scanf("%d\n",&n);
while(i<=n){
i++;
f=i*i;
printf("%d\n",f);
}
return 0;
}