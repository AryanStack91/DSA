#include<bits/stdc++.h>
using namespace std;
void subsequence(int n , vector<int> ds , int arr[],int index){
   if (index == n){
      for(auto it : ds){
        cout << it << " ";
      }
      if(ds.size() == 0){
        cout<<"{}" <<" ";
      }
      cout<<endl;
      return ;
   }

   // for taking the index
   ds.push_back(arr[index]);
   subsequence(n,ds,arr,index+1);

   // for not taking the particular index
   ds.pop_back();
   subsequence(n,ds,arr,index+1);

}
      
int main(){
    int arr[] = {3,1,2};
    vector<int> ds;
    int n = 3;
    subsequence(n , ds , arr , 0);

    return 0;
}