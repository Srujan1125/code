# include<stdio.h>
int main(){
    int arr[3][3];
    printf("enter the values of the matrix");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d%d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        printf("sum of row%d is %d\n",(i+1),sum);
    }
return 0;
}