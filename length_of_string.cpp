#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[20];
    int count = 0 ;
    cin>>s;
    cout<<s<<endl;
    for(int i = 0;  s[i] != '\0' ;i++){
        count++;
    }
    cout<<"length of string is "<<count;
}