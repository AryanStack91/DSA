#include<stdio.h>
int main(){

    int n;
    printf("enter the elements of an array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i-0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            k++;
            continue;
        }
        if(arr[i]>max)
        max=k;
        k=0;
    }
    printf("max no of consecutive 1`s are %d",max);
    return 0;

}