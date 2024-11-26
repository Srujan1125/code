#include<stdio.h>
int main(){
    int num[10],count1=0,count2=0;
    printf("enter the numbers ");
    for(int i=0; i<10;i++){
    scanf("%d\n",&num[i]);
    if (num[i]>0){
        count1++;
    }else if (num[i]<0){
        count2++;
    }
    }
    printf("positive integers are %d\n",count1);
    printf("negative numbers are %d\n",count2);
    printf("the number zero elements are %d\n ",(10-count1-count2));
    return 0;
}