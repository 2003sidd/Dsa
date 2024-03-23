#include<iostream>
using namespace std;

 class Node{
    public :
     int data;
     Node *prev;
     Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    };

 };

 void addNode(int data, Node* &ptr){
    Node *p=ptr;
    while(ptr->next!=NULL){
        p=p->next;
    };
    Node *q=new Node(data);
    p->next=q;
    q->prev=p;
 }

void traversal(Node* &ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){
Node *head=new Node(10);
addNode(20,head);
addNode(30,head);
addNode(40,head);
traversal(head)
 }