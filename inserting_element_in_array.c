#include<stdio.h>
int main(){
    int i,arr[100],n,position,value;
    printf("inter the numbers of elments i array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    scanf("%d",&arr[i]);
    printf("enter the position where you want insert an element\n");
    scanf("%d",&position);
    printf("enter the value to insert\n ");
    scanf("%d",&value);
    for(i=n-1;i>=position-1;i--);
    arr[i+1]=arr[i];
    arr[position-1]=value;
    printf("resultant array is\n");
    for(i=0;i<=n;i++)
    printf("%d",arr[i]);
    return 0;



}