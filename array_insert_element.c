#include<stdio.h>
int main(){
    int arr[100],position,i,n,value;
    printf("enter the number elements in array\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the location where you want to insert an elements\n");
    scanf("%d",&position);
    printf("enter the value to insert ");
    scanf("%d",&value);
    for(i=n-1;i>=position-1;i--)
    arr[i+1]=arr[i];
    arr[position-1]=value;
    printf("resultant array\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}