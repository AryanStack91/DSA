#include<iostream>
using namespace std;
int main(){
    int n,r,bn=0 ;
    cin>>n;
    int power=1;
     while(n>0){
        r=n%2;
        
         bn=bn+r*power;
         power*=10;
         n=n/2;
         
        
    }
   
    cout<<"binary no is:"<<bn;
    return 0;
}