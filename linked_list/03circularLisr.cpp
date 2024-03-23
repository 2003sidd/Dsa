#include<iostream>
using namespace std;

class CircularLL{
    public:
    int data;
    CircularLL* next;
    CircularLL(int data){
        this->data=data;
        this->next=this;
    }
};
void AddAtHead(int data,CircularLL* &head){
    CircularLL *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    };
    CircularLL *q=new CircularLL(data);
    q->next=head;
    ptr->next=q;
    head=q;
}
void addNode(int data,CircularLL* &ptr){
    CircularLL *p=ptr;

    while(p->next!=ptr){
        // cout<<p->data<<endl;
        p=p->next;
    }
    CircularLL *q=new CircularLL(data);
    p->next=q;
    q->next=ptr;
    
}

void traversal(CircularLL* &ptr){
    CircularLL *p=ptr;
        do{
          cout<<p->data<<endl;
          p=p->next;
        } while (p!=ptr);
        
}

int main(){
    CircularLL *head=new CircularLL(10);
    // cout<<"head is" <<head<<endl;
    // cout<<"data is" <<head->data <<" " <<head ->next<<endl;
    addNode(20,head);
    addNode(30,head);
    addNode(40,head);
    traversal(head);
    AddAtHead(5,head);
    traversal(head);
};