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
Node * insert_back(Node* head,int val){
    if(head == nullptr) return new Node(val);
    Node* temp = head;
     while(temp -> next  != nullptr){
        temp = temp -> next;
     }
      Node* newNode = new Node(val);
      temp -> next = newNode;
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
   head =  insert_back(head,10);

    print(head);

}