#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
      cout<<"enter the value of a and b"<<endl;
      cin>>a>>b;
      char c;
      cout<<"operation"<<endl;
      cin>>c;
      switch(c){
           case '+':
             cout<<"sum of and b is:"<<a+b;
           break;
           case '-':
             cout<<"difference of and b is:"<<a-b;
           break;
           case '/':
             cout<<"division of and b is:"<<a/b;
           break;
           case '*':
             cout<<"multiplication of and b is:"<<a*b;
           break;
           default :
             cout<<"invalid";
             break;
              
      }
}