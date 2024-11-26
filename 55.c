# include<stdio.h>
int main(){
    int num[10],count1=0,count2=0;
    printf("enter the numbers ");
    for (int i=0; i<10; i++){
        scanf("%d\n",&num[i]);
        if (num[i]<=0){
            printf("it is invalid");
        }
        else if (num[i]%2==0){
            count1++;
        }else {
            count2++;
        }
    }
        printf("The number of even are %d\n",count1);
        printf("The number of odd are %d\n",count2);
return 0;
}