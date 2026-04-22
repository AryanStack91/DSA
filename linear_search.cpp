#include<bits/stdc++.h>
using namespace std;
void search(int arr[],int n,int k){
    int count=0;
     for(int i=0;i<n;i++)
     {
            if(arr[i]==k)
            {
                count++;
            }
     }
      if(count>0)
            {
                cout<<"element is present";
            }
            else 
            {
                cout<<"element is not present";
            }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element to search";
    cin>>k;

    search(arr,n,k);
    return 0;
}