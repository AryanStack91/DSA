#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int n, int key){
     int low = 0;
    int high = n-1;
    int ans = -1;
    while (low<=high)
    {
        int mid = low +((high-low)/2);
        if(arr[mid]==key){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
        mid=(low+high)/2;
    }
    return ans;
}
int last(int arr[],int n,int key){
     int low = 0;
    int high = n-1;
    int ans = 0;
    while (low<=high)
    { 
        int mid = low +((high-low)/2);
        if(arr[mid]==key){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
        mid=(low+high)/2;
    }
}
int main(){
    int arr[9]={1,2,3,4,3,3,3,3,6};
    int f = first(arr,9,3);
    cout<<"first occurence at"<<f<<endl;
    int l = last(arr,9,3);
     cout<<"last occurence at"<<l<<endl;

}