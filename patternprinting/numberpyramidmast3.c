 
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int a=n;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);
    }
    printf("\n");
     
    for(int i=1;i<=n;i++){
    
        for(int j=1;j<=nst;j++){
            
            printf("%d",j);
        
        }
           for(int k=1;k<=nsp;k++){
            printf(" ");
           }
           for(int j=n;j>=i;j--){
            printf("%d",j);
            a--;
           }
           nsp+=2;
           nst--;
        printf(" \n");
    }
    return 0;
}