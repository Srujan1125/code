# include<stdio.h>
int main(){
    int arr[3][3];
    printf("enter the elements of array:");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d%d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int max,min;
    max=arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("max element is :%d\n",max);
    min=arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("min element is :%d\n",min);
return 0;
}