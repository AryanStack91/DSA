#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {2,4,1,6,2,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =1;i<n;i++){
        int temp = arr[i];
        int j =i-1;                          // while(j>=0 && arr[j] > temp){
        for( ; j>=0;j--){                     //arr[j+1] =temp;
            if(arr[j] > temp){                 //j--;   }
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1] =temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}