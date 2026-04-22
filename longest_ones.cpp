#include<bits/stdc++.h>
using namespace std;

int longestOnes(string str , int k){
    int s = 0;
    int e=0;
    int zero_count = 0;
    int max_length = 0;
    for(;e<str.length();e++){
        if(str[e] =='0'){
            zero_count++;
        }
        while(zero_count > k){
            if(str[s] =='0'){
           zero_count--;
           s++;
            }
        }
        max_length = max(max_length,e - s + 1);
    }
    return max_length;
}
int main(){
    string str;
    cout<<"enter binary strings : ";
    cin>>str;

    int k;
    cout<<"enter max flips : ";
    cin>>k;

    cout<<longestOnes(str,k)<<endl;
}