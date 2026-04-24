#include<stdio.h>
int main() {
	int n,m;
	printf("enter rows and columns\n");
	scanf("%d %d",&n,&m);
	int a[n][m];
	printf("enter matrix elements\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	 printf("matrix after 90 degree rotation");
	 for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			printf("%d  ",a[j][i]);
		}
	 }
	 printf("matrix after 180 degree rotation");
	 for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			printf("%d ",a[i][j]);
		}
	 }
	 return 0;
}