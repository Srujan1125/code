# include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c ");
scanf("%d",&c);
if (a>b){
    printf("a is max\n");
}else if (a>c){
    printf("a is max");
}else if (b>c){
    printf("b is max");
}else if (b>a){
    printf("b is max");
}else{
    printf("c is max");
}
return 0;
}