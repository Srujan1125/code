# include<stdio.h>
int main(){
    int arr1[10],arr2[10],arr3[10];
    printf("enter the values of arr1:");
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr1[i]);
    }
    printf("enter the values of arr2:");
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr2[i]);
    }
    for(int i=0; i<10; i++){
        arr3[i]=arr2[i]+arr1[i];
    }
    for(int i=0; i<10; i++){
        printf("the arr3 values are :%d\n",arr3[i]);
    }
return 0;
}