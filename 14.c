#include<stdio.h>
int main(){
    char l;
    printf("enter the character ");
    scanf("%c",&l);
    if(l>= 'A' && l<= 'Z'){
        printf("%c is capital",l);
    }
    else if ( l>= 'a' && l<='z'){
        printf("%c is small",l);
    }else if ( l>= '0'  &&  l<=  '9');{
        printf("%c is digit",l);
    }
    return 0;

}