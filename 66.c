# include<stdio.h>
int main(){
  int arr1[3][3],arr2[3][3],arr3[3][3];
  printf("enter the elements of first matrix:");
  for(int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("%d%d:",i,j);
        scanf("%d",&arr1[i][j]);
    }
  }
  printf("enter the elements of second matrix:");
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d%d:",i,j);
        scanf("%d",&arr2[i][j]);
    }
  }
  printf("addition of two matrix is :");
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d%d: %d\n",i,j,arr3[i][j]);
    }
  }
return 0;
}