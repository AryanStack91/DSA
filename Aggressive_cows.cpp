#include<bits/stdc++.h>
#include <vector>
 using namespace std;
 bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    	int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
        sort(stalls.begin(), stalls.end());

    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
 int main(){
        vector<int> stalls;
     int n ;
     cout<<"enter the no of elements"<<endl;
     cin>>n;
     cout<<"enter the elements"<<endl; 
     for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        stalls.push_back(x);
      }
 
    int k ;
    cout<<"enter the no of cows"<<endl;
    cin>>k;
    int temp = aggressiveCows(stalls,k);
    cout<<temp;
    return 0;
 }