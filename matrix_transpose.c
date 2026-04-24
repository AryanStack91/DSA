#include<stdio.h>
int main(){
    int a[5][5],b[5][5];
    int i,j,rows ,columns;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&rows,&columns);
    printf("enter the elements of elements");
    for ( i = 0; i < rows; i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix : \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("the transpose matrix :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
} 