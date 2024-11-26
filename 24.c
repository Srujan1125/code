 #include<stdio.h>
 #include<math.h>
int main(){
int x,n,a;
printf("enter the values");
scanf("%d%d",&x,&n);
if (n==1){
    a=1+x;
    printf("%d",a);
}else if (n==2){
    a=1+x/n;
    printf("%d",a);
}else if (n==3){
    a=1+pow(x,n);
    printf("%d",a);
}else {
    a=1+x*n;
    printf("%d",a);
}
return 0;
}