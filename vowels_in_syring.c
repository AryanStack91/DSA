#include<stdio.h>
int main(){
    char a[100];
    int i;
    int count=0;
    printf("enter the string\n");
    scanf("%s",&a);

    for(i=0;a[i]!=0;i++){
        if(a[i]=='A' || a[i]=='I'||a[i]=='O'||a[i]=='E'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            count++;
        }
    }
    printf("the total no of vowels are %d",count);
    return 0;
}