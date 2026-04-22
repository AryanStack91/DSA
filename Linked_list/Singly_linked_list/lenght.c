#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* newnode(int data){
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node*));
    node1 -> data = data;
    node1 -> next = NULL;

    return node1;
}

void print(struct Node* head){
    while(head != NULL){
        printf("%d ", head -> data);
         head = head -> next;
    }
 }
int len(struct Node* head){
    int length = 0;
    while(head != NULL){
        length++;
         head = head -> next;
    }
  return length;
}
int main(){
    struct Node* head  = NULL;
    struct Node* first  = NULL;
    struct Node* second  = NULL;
    struct Node* third  = NULL;
    head = newnode(10);
    first = newnode(20);
    second = newnode(30);
    third = newnode(40);

     head -> next = first;
     first -> next = second;
     second -> next = third;
 

    printf("linked list is :");
    print(head);
    printf("\nlength of linked list is : %d\n",len(head));

    return 0;     

     
}