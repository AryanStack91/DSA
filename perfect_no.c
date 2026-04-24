#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
      {if(n%i==0)
      sum=sum+i;}
        if(sum==n)
          printf("perfect number");
        else
          printf("not perfect num");
        return 0;

}