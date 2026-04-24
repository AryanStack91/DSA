#include<stdio.h>
int main(){
    int n;
    int top=-1;
    printf("enter the number of elements ");
       scanf("%d",&n);
       int a[n];
       for(int i=0;i<n;i++){
        scanf("%d",&a[n]);
       }
       int*sk=(int*)malloc(sizeof(int));
       sk[++top]=a[n-1];
       for(int i=n-2;i>=0;i--){
        if (a[i]>=sk[top]);
        {
            sk[++top]=a[i];
            /* code */
        }
         
       }
       while(top!=-1){
            printf("%d",sk[top]);
               top--;
        }
        free(sk);
       return 0;
}