#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,2,3,4,4,2,5,6,7,4,3};
    int size =sizeof(arr)/sizeof(arr[0]);

 /*  vector<int> v(size,0);
    for(int i =0;i<size;i++){
        v[arr[i]]++;
    }
    for(int i =0;i<size;i++){
       cout<< "frequency of "<<i<<" "<<v[i]<<endl;
    }
    */
   int maxi=arr[0];
   int s_max=0;
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        maxi=max(arr[i],arr[j]);
        if(s_max!)
    }
}
}