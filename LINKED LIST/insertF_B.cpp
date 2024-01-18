#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int data;
Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;
}
};
void insertF(Node* &head,int d){
    Node* temp=new Node(d);
    head->next=temp;
    head=temp;
}
void insertB(Node* &tail,int d){
    Node* temp=new Node(d);
    temp->next=tail;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
 
    
int main(){
Node* n1=new Node(1);
Node* head=n1;
Node* tail=n1;
insertF(head,2);
insertF(head,3);
insertF(head,4);
insertF(head,5);
print(tail);

    return 0;
}