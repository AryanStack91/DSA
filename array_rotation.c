#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    int rot;
    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\n enter the number of rotation");
    scanf("%d",&rot);
    for(int i=1;i<=rot;i++){
        int last =arr[n-1];
        for(int j=n-1;j>=0;j--){
            arr[j+1]=arr[j];
            
        }
        arr[0]=last;
    }
    printf("array after rotation");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    
     printf("\n");
        return 0;
    }
}