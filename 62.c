# include<stdio.h>
int main(){
 int temp,n;
   printf("number the elements does array contain");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements of array");
   for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0; i<(n/2); i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
   }
   for(int i=0; i<n; i++){
    printf("the reverse array is :%d\n",arr[i]);
   }
return 0;
}