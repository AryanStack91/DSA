#include <bits/stdc++.h> 
using namespace std;
vector<int> reverse(vector<int> v){
	int s = 0;
	int e = v.size() - 1;
        while (s < e) {
          swap(v[s++], v[e--]);
        }
		return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> v;
      int i =n -1;
	  int j = m -1;
	 int carry = 0;

	  while(i>=0 &&j >=0){
		  int val1 = a[i];
		  int val2 = b[j];
		  int sum = val1 + val2 + carry;
		  carry = sum/10;
		  sum = sum%10;
		  v.push_back(sum);
               i--;
			   j--;
	  }
	   while(i>=0){
		  int val1 = a[i];
		  int sum = val1 + carry;
		  carry = sum/10;
		  sum = sum%10;
		  v.push_back(sum);
               i--;

	  }
	   while(j >=0){
		  int val2 = b[j];
		  int sum = val2 + carry;
		  carry = sum/10;
		  sum = sum%10;
		  v.push_back(sum);
               j--;
	  }
	    while(carry != 0){
		  int sum = carry;
		  carry = sum/10;
		  sum = sum%10;
		  v.push_back(sum);
	  }
	   
	  return reverse(v);
}
int main(){
    vector<int> a{4,5,1};
    vector<int> b{7,9,6};
}