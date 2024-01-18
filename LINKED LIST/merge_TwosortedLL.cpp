// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertT(Node* &tail,int data){
    Node* temp=new Node(data);
    temp->next=tail;
    tail=temp;
}
void insertF(Node* &head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}
void sortL(Node* &tail){
    Node* temp=tail;
    int d;
    Node* temp1;
    while(temp->next!=NULL){
           temp1=temp->next;
        while(temp1!=NULL){
                    if(temp->data>temp1->data){
            d=temp->data;
            temp->data=temp1->data;
            temp1->data=d;
        }
        temp1=temp1->next;
        }
temp=temp->next;
    }
}
Node* join(Node* &tail,Node* &head,Node* &tail1){
       head->next=tail1;
        return tail;
}

void print(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* tem=new Node(1);
    Node* tem1=new Node(2);
     Node* tail1=tem1;
   Node* head1=tem1;
   Node* tail=tem;
   Node* head=tem;
    insertF(head,2);
    insertF(head,42);
    insertF(head,61);
    insertF(head,70);
      insertF(head1,212);
    insertF(head1,4);
    insertF(head1,1);
    insertF(head1,0);
    
     cout<<head->data<<" "<<tail->data<<endl;
    print(tail1);
      cout<<head1->data<<" "<<tail1->data<<endl;
       Node* temp= join(tail,head,tail1);
            print(temp);
            cout<<head->data<<" "<<tail->data<<endl;
            sortL(tail);
            print(tail);
    return 0;
}