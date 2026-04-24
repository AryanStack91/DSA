  #include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,r,n,sum=0;
    printf("enter the starting range ");
    scanf("%d",&i);
    printf("enter the ending range");
    scanf("%d",&j);

    for(k=i;k<=j;k++){
         n=k;
         sum=0;
        while(n>0){
            r=n%10;
            sum=sum+pow(r,(int)(log10(k)+1));
            n=n/10;  
        }
        if(sum==k)
            printf("%d\n ",k);
        
        
    }
    return 0;
}