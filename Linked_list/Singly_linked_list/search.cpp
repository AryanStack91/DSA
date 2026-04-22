#include<bits/stdc++.h>
using namespace std;
struct Node {
    public:
       int data;
       Node* next;
    
    public:
    Node(int data1, Node* next1){
          data = data1;
          next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* conArrtoll(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
void search(Node* head,int x){
    Node* curr = head;
    while(curr){
        if(curr -> data == x){
            cout<<"yes";
        }
        curr = curr -> next;
    }
    cout<<"No";
}
int main(){
    vector<int> arr = {2, 5, 8, 7};
 
    Node* head = conArrtoll(arr);
    search(head,4);


}