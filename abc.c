#include <stdio.h>
 int main()
{
int i,j;
for(i=1;i<=6;i++)
{
    for(j=i+1;j<=7;j++)
        printf("%d",j);
    printf("\n");
}
return 0;
}