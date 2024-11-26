# include<stdio.h>
int main(){
   int arr1[10],arr2[10],arr3[10];
   printf("enter the values of arr1:");
   for(int i=0; i<10; i++){
    scanf("%d\n",&arr1[i]);
   }
   printf("enter the values of arr2:");
   for(int i=0; i<10; i++){
    scanf("%d\n",&arr2[i]);
   }
   for(int i=0; i<10; i++){
       arr3[i]=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=arr3[i];
   }
   for(int i=0; i<10; i++){
    printf("the elements of array1 :%d\n",arr1[i]);
   }
   for(int i=0; i<10; i++){
    printf("the elements of array2 :%d\n",arr2[i]);
   }
return 0;
}