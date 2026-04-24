#include<stdio.h>
int main(){
    int arr[100],i,n,position;
    printf("enter the elements in the given array\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the location where you want to delete the elements\n");
    scanf("%d",&position);
    if(position>=n+1){
        printf("delete not possible\n");

    }
    else{
        for(i=position-1;i<n-1;i++)
        arr[i]=arr[i+1];
        printf("resultsnt arrayis\n");
        for(i=0;i<n-1;i++)
        printf("%d",arr[i]);
    }
    return 0;
}