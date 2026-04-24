#include<stdio.h>
int main(){
    int arr1[50],arr2[50],i,size1,size2,k,merge[100];
    printf("enter the array\n");
    scanf("%d",&size1);
    printf("array1 elements");
    for(i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
        merge[i]=arr1[i];
      
    }
    k=i;
    printf("\n enter array2 size");
    scanf("%d",&size2);
    printf("enter array 2 elements");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
        merge[k]=arr2[i];
        k++;
    }
    printf("\n the new array after merging elements");
    for(i=0;i<k;i++)
    printf("%d",merge[i]);
    return 0;



}