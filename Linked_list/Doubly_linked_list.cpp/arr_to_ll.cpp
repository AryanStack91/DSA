#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;

  public:
    Node(int data1, Node* next1 ,Node* prev1){
        data  = data1;
        next = next1;
        prev = prev1;

    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};

void printlist(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        cout<<curr -> data<<" ";
        curr = curr -> next;
    }
}
int main(){

    int arr[5] = {1,2,3,4,5};

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < 5; i++){
        Node* temp = new Node(arr[i]);
        prev -> next = temp;
        prev = temp;
    }
    printlist(head);
}