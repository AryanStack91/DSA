#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number of elements =");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
