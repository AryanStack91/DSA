#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,3,4,7,6,8,9};
    int n=sizeof(arr)/sizeof(int);
     for(int i=0;i<n;i++){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        i=i+1;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
}