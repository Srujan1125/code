# include<stdio.h>
int main(){
    char ch;
printf("enter the character ");
scanf("%c",&ch);
if (ch>='a' &&  ch<='z'  ){
    printf("it is lower case character");
}else{
    printf("it is upper case ");
}
return 0;
}