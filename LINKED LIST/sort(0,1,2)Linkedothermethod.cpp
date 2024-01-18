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
void insertme(Node* &head,Node* curr){
    head->next=curr;
    head=curr;
}
Node* sortL(Node* &tail){
  Node* ZH=new Node(-1);
  Node* ZT=ZH;
  Node* OH=new Node(-1);
    Node* OT=OH;
  Node* TH=new Node(-1);
    Node* TT=TH;
  Node* curr=tail;
  while(curr!=NULL){
    int value=curr->data;
    if(value==0){
    insertme(ZT,curr);
  }
   if(value==1){
    insertme(OT,curr);
  }
 if(value==2){
    insertme(TT,curr);
  }
  curr=curr->next;
  }
  if(OH->next!=NULL){
    ZT->next=OH->next;
  }
  else{
    ZT->next=TH->next;
  }
  OT->next=TH->next;
  TT->next=NULL;
//  setup tail 
    tail=ZH->next;
    // delete dummy nodes
    delete ZH;
    delete OH;
    delete TH;
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
   Node* tail=tem;
   Node* head=tem;
    insertF(head,0);
    insertF(head,2);
    insertF(head,1);
    insertF(head,0);
    insertT(tail,1);
    print(tail);
     cout<<head->data<<" "<<tail->data<<endl;
       Node* answer= sortL(tail);
            print(answer);
            cout<<head->data<<" "<<tail->data<<endl;
    return 0;
}

// TIME COMPLEXXITY=O(n)  and space complexity=O(1);
// THIS IS METHOD OF CHANGING LINKS TO SORT 0,1,2.