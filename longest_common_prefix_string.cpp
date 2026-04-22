#include<bits/stdc++.h>
using namespace std;

string longestcommonprefix(vector<string> &str){
    int n = str.size();
/*
     sort(str.begin(),str.end());

     string s1 = str[0];
     string s2 = str[n - 1];

     int i =  0;
     int j = 0;
     string ans ="";
    while(i <s1.size() && j < s2.size()){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++;
             j++;
        }
        else{
            break;
        }
    }
    return ans;
    */
   string s1 = str[0];
   int ans_length = s1.size();
     
   for(int i = 0; i< n;i++){
    int j = 0;
    while( j < s1.size() && j<n && s1[j] == str[i][j])
    j++;
    ans_length = min(ans_length,j);
   }
   string ans = s1.substr(0,ans_length);
   return ans;
}
int main(){
    int n;
    cout<<"enter no of strings";
    cin>>n;
    cout<<"enter strings";
    vector<string> str(n);
    for(int i = 0; i < n;i++){
        cin>>str[i];
    }
  cout<<"longest common prefix :"<<longestcommonprefix(str)<<endl;
}