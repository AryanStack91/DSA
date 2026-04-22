#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
      vector<int> a = {100,80,60,70,60,75,85};

     vector<int> ans(a.size(),0);
          stack<int> s;

     for(int i = 0; i < a.size(); i++){
        while(s.size() > 0 && a[s.top()] <= a[i]){
        s.pop();
     }
     if(s.empty()){
          ans[i] = i + 1;
     }  
     else{
        ans[i] = i - s.top();
     }
     s.push(i);
    }
for(int x : ans){
    cout << x << " ";
}
cout<<endl;
    return 0;
}