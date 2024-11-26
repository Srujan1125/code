#include<stdio.h>
int main(){
    int size,temp;
    printf("how many numbers you want to enter :");
    scanf("%d",&size);
    int a[size];
    printf("enter the numbers\n ");
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("max number is %d\n",a[size-1]);
    printf("second max number is %d\n",a[size-2]);
    return 0;
}