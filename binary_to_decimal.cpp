#include<iostream>
using namespace std;
int main(){
    int n,r,dn=0 ;
    cin>>n;
    int power=1;
     while(n>0){
        r=n%10;
        
         dn=dn+r*power;
         power*=2;
         n=n/10;
         
        
    }
    cout<<dn;
    return 0;
}