 #include<stdio.h>
int main(){
int n;
printf("enter the number");
scanf("%d\n",&n);
if (n!=7 && n!=5 &&n!=1){
if( n%4==0 || n%6==0 || n%7==0 || n%5==0 ){
    printf("it is composite number");
}else{
    printf("it is prime number");
}
}else printf("it is prime number ");
return 0;
}