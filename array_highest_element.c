#include<stdio.h>
int main(){
    int n,i;
    printf("enter the elements of an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int max=arr[0];
    for(int i=1;i<n;i++){

        if(arr[i]>max)
          max=arr[i];
         
    }
       printf("the max element is  %d",max);
       
    return 0;

}