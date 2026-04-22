#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int age;
    char grade;
};

int main(){

    student student1;

    student1.name = "Aryan";
    student1.age = 20;
    student1.grade = 'A';

    cout <<student1.name<<" "<<student1.age<<" "<<student1.grade<<endl;


    return 0;
}