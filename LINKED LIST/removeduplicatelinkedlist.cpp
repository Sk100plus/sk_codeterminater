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
            // temp->next=temp1->next;
            // temp1->next=temp;
            d=temp->data;
            temp->data=temp1->data;
            temp1->data=d;
        }
        temp1=temp1->next;
        }
temp=temp->next;
    }
}
Node* removeD(Node* &tail){
  if(tail==NULL)return NULL;
  Node* curr=tail;
  while(curr!=NULL){
      if(curr->next!=NULL&&(curr->data==curr->next->data)){
          Node* nxt=curr->next->next;
          Node* del=curr->next;
          delete(del);
          curr->next=nxt;
      }
      else
      curr=curr->next;
  }
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
    Node* tem=new Node(101);
   Node* tail=tem;
   Node* head=tem;
    // insertT(tail,100);
    insertF(head,109);
    insertF(head,102);
    // insertF(head,101);
    // insertF(head,103);
    // insertF(head,105);
    insertF(head,102);
    // insertF(head,104);
    insertF(head,101);
    // insertF(head,228);
    print(tail);
        sortL(tail);
            print(tail);
 Node* ta= removeD(tail);
    print(ta);
    return 0;
}