#include<bits/stdc++.h>
using namespace std;
 int binary_search(int arr[],int n,int key){
    
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = low +((high-low)/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
        mid=(low+high)/2;
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key element";
    cin>>key;
   int result = binary_search(arr,n,key);
   if(result == -1){
    cout<<"element is absent ";
   }
   else
     cout<<"element is present at index"<<" "<<result;
    return 0;
}