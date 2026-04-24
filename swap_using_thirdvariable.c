    #include<stdio.h>
    int main(){
        int a,b,c;
        printf("enter the number to be swapped");
        scanf("%d%d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("%d %d",a,b);
    }