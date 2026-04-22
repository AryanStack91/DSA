#include<iostream>
using namespace std;

class Hero{
    public:
      int value;
    
       int a;
};

int main(){

    // creation of object 
    Hero h1;
    h1.value = 20;
    h1.a = 10; 

    cout<< "size of h1 "<<sizeof(h1)<<endl;
    cout << "health is :" << h1.value<<endl;
    cout << "health is :" << h1.a<<endl;
    return 0;
}