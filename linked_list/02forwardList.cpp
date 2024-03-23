#include<iostream>
using namespace std;

class forward_list {
    public:
    int data;
    forward_list *next;

    forward_list(int data) {
        this->data=data;
        this->next=NULL;
    }  
};

void addAthead(forward_list* &head,int data){
    forward_list* temp=new forward_list(data);
    temp->next=head;
    head=temp;
}
void addAtLast(forward_list* &head,int data){
     while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    forward_list* temp=new forward_list(data);
    temp->next=head;
    head=temp;
}

void print(forward_list* &head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }

    }

int main(){
    cout<<"hello";
    forward_list* head=new forward_list(10);
    addAthead(head,10);
    addAthead(head,20);
    addAtLast(head,60);
    print(head);

}