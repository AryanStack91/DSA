#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    int top=-1;
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int*sk=(int*)malloc(sizeof(int));
    sk[++top]=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>sk[top])
        sk[++top]=a[i];

    }
    while(top!=-1)
    printf("%d",sk[top--]);
    return 0;
}