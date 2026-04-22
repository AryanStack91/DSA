#include<bits/stdc++.h>
using namespace std;
void subsequence(int n , vector<int> ds , int arr[],int index,int sum,int s){
   if (index == n){
      if(s == sum){
      for(auto it : ds){
        cout << it << " ";
       }
       cout<<endl;

    }
      return ;
   
   }

   // for taking the index
   ds.push_back(arr[index]);
   s += arr[index];
   subsequence(n,ds,arr,index+1,sum ,s);

   // for not taking the particular index
   s -= arr[index];
   ds.pop_back();
   subsequence(n,ds,arr,index+1,sum,s);

}
      
int main(){
    int arr[] = {1,2,1};
    vector<int> ds;
    int sum = 2;
    int n = 3;
    int s = 0;
    subsequence(n , ds , arr , 0,sum,s);

    return 0;
}