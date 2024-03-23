#include<iostream>
// #include<forward_list>
using namespace std;
class Node {
    public :    
    int data;
    Node *next;

    Node(int data=0){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &ptr,int data){
    Node *n1=new Node(data);
    n1->next=ptr;
    ptr=n1;
}

void traversal(Node* &head){
    Node *n1=head;
    while(n1!=NULL){
        cout<<n1->data <<" ";
        n1=n1->next;
    }
}

void insertAtTail(Node* &head,int data){
    Node *n1=head;
    while(n1->next!=NULL){
        n1=n1->next;
    };
    Node *n2=new Node(data);
    n1->next=n2;

}

void reverse(Node* &head,int k ){
int count=1;
Node *prev=NULL,*next=head->next,*curr=head;
while(count<k){
    prev=curr;
    curr=next;
    next=next->next;
    curr->next=prev;
    count++;
};
    head->next=next;
    head=curr;
};

void findElem(Node* &head, int data)
{
    Node * ptr =head;
    while(ptr!=NULL){
        if(ptr->data==data){
            cout<<"value find"<<endl;
            return;
        }
        ptr=ptr->next;
    }
    cout<<"not found"<<endl;
    return ;
}
int main(){


    Node* head=new Node(5);
    // traversal(head);
    // cout<<"head is " <<&head <<endl;
    insertAtHead(head,1);
    // traversal(head);
    insertAtTail(head,10);
    insertAtTail(head,11);
    insertAtTail(head,21);
    insertAtTail(head,31);
    // findElem(head,100);
    traversal(head);
    findElem(head,10);



    return 0;
}