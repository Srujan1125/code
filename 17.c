# include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the numbers ");
    scanf("%d %d %d",&a, &b ,&c);
    if( a>b && a>c){
        printf("A is max \n");
    }else if (b>a && b>c){
        printf("b is max");
    }else {
        printf("c is max ");
    }
return 0;
}