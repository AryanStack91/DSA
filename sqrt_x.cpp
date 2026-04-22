#include<bits/stdc++.h>
using namespace std;
 int sqrtInteger(int n) {
        int s = 0;
        int e = n;
        long long mid = s + (e - s) / 2;
        long long ans = -1;

        while (s <= e) {
            long long square = mid * mid;
            if (square == n)
                return mid;

            if (square < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
 
}
double morePrecesion(int n ,int precision, int temp){
    double factor = 1;
    double ans = temp;
    for(double i =0;i<precision;i++){
        factor = factor/10;
        for(double j=ans ; j*j<n; j =factor+j){
            ans = j;
        }
    }
    return ans;
}

int main(){
  int n;
  cout<<"enter the number "<<endl;
  cin>>n;
  int temp = sqrtInteger(n);
  cout<<"ans is"<<morePrecesion(n,3,temp)<<endl;
}