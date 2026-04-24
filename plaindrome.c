#include<stdio.h>
int main(){
    int r,n,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }


    
    if(sum=t)
    {
        printf("plaindrome");


    }
    else{
        printf("not plaindrome");
    }
    
    return 0;
}