 #include<stdio.h>
int main(){
int i,n,f=0;
printf("value of n");
scanf("%d",&n);
if(n==0 || n==1){
    printf("%d is neither prime nor composite\n",n);
    return 0;
}for (i=2; i<= n/2; ++i){
    if (n%i==0){
        f=1;
        break;
    }
}if(f==0){
    printf("%d is a prime number\n",n);
}else{
    printf("%d is a not prime number\n",n);
}
return 0;
}