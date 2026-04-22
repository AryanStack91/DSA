#include<bits/stdc++.h>
using namespace std;
int minimum(int arr[],int n){
       int min=arr[0];
       for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
       }
       cout<<"min no is :"<<min<<endl;
}
int maximum(int arr[],int n){
    /*int ma=INT_MIN*/
    int max=arr[0];
       for(int i=0;i<n;i++){
        //ma=max(ma,num[i]);
        if(arr[i]>max){
            max=arr[i];
        }
       }
       cout<<"max no is :"<<max<<endl;
}
int main(){
    int n;
    cout<<"enter the size of arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   minimum(arr,n);
    maximum(arr,n);
    return 0;
}