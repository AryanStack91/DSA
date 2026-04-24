 #include<stdio.h>
 int main(){
	int n,r,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int t=n;
	 while(n>0){
        r=n%10;
		sum+=(r*r*r);
		n=n/10;
	 }
	 if(sum==t){
		printf("yes");
	 }
	 else{
		printf("no");
	 }
 }