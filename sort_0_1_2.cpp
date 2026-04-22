#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = {0,1,0,1,1,0,1,0};
    int n= sizeof(arr)/sizeof(int);
    int i=0;
    int j=n-1;
    while(i<j){
         while(arr[i]==0){
            i++;
         }
         while(arr[j]==1){
            j--;
         }
         while((arr[i]==1) && (arr[j]==0)){
            swap(arr[i],arr[j]);
            i++;
            j--;
         }
    }
    
    
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
}