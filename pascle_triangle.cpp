#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pascleTriangle(int n){
    
    vector<vector<int>> pascle(n);

     for(int i = 0; i< n; i++){
        pascle[i].resize(i+1);

        for(int j = 0; j <i+1;j++){
            if(j ==0 || j ==i){
                pascle[i][j] = 1;
            }
            else
            pascle[i][j] = pascle[i-1][j] + pascle[i-1][j-1];
        }
      }
       return pascle;

}
int main(){
    int n;
    cin>>n;

    vector<vector<int>> ans;
    ans = pascleTriangle(n);

for(int i = 0; i < ans.size();i++){
       for(int j = 0 ; j < ans[i].size();j++){
        cout<<ans[i][j]<<" ";
       }
       cout<<endl;
}
}