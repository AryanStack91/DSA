#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int n,int b[],int m,int c[]){
      int i = 0,j = 0;
      int k = 0;
      while(i <n && j<m){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            j++;
            k++;
        }
      }
      while(i < n){
        c[k] = a[i];
           k++;
           i++;
      }
        while(j < m){
        c[k] = a[j];
           k++;
           j++;
      }
}
void print(int c[] , int n){
    for(int i =0 ;i<n;i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    int a[5] = {1,3,5,7,9};
    int b[3] = {2,4,6};
    int c[8] = {0};
    merge(a,5,b,3,c) ;
    print(c,8);
}