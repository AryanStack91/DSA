#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
     stack<int> s;
     s.push(20);
     s.push(40);
     s.push(60);

     while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
     }
     cout << endl;
    return 0;
}