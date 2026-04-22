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
Node * pop_back(Node* head){
    Node* temp = head;
     while(temp -> next -> next != nullptr){
        temp = temp -> next;
     }
     delete temp -> next ->next;
     temp -> next  =nullptr;
     return head; 

}
void print(Node * head){

    while(head != nullptr){
        cout<<head -> data <<" ";
        head = head -> next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {2, 5, 8, 7};
 
    Node* head = conArrtoll(arr);
   head =  pop_back(head);

    print(head);

}