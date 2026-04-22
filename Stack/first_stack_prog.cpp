#include<iostream>
#include<vector>

using namespace std;

class Stack{
    vector<int> a;

public:
    void push(int val){
         a.push_back(val);
    }    

    void pop(){
           a.pop_back();
    }
    int top() {
        return a[a.size() - 1];
    }

    bool empty() {
        return a.size() == 0;
    }
};

int main(){
     Stack s;
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