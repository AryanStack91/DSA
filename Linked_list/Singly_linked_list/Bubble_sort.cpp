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

void sort_ll(Node* head){
    Node * ptr1;
    Node* ptr2;
    ptr2 = nullptr;
    if(head == nullptr || head -> next == nullptr){
        return;
    }
  bool swap = true;
    while(swap){
         ptr1 = head;
        while(ptr1->next != ptr2){
            if(ptr1 -> data > ptr1->next->data){
                     int temp = ptr1 -> data;
                     ptr1 -> data = ptr1 -> next ->data;
                     ptr1 -> next -> data = temp;


                     swap = true;
            }
            ptr1 = ptr1 -> next;
        }
    }
    ptr2 = ptr1;

}

void print_list(Node* head){
    while(head != nullptr){
        cout << head -> data <<"->";
        head = head -> next;
    }
}
int main(){
 Node* head = new Node(3);
 head -> next = new Node(1);
 head -> next ->next = new Node(2);
 head -> next ->next->next= new Node(5);
 head -> next ->next -> next = new Node(2);
 sort_ll(head);

 print_list(head);

}