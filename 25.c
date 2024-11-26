 #include<stdio.h>
int main(){
int n;
printf("multiplication table of a number  ");
scanf("%d",&n);
for(int i=1; i<=10; i++){
printf("%d x %d =  %d\n",i,n,n*i);
}
return 0;
}