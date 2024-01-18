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
Node* sortL(Node* &tail){
  int Zcount=0;
  int Ocount=0;
  int Tcount=0;
  Node* temp=tail;
  while(temp!=NULL){
    if(temp->data==0)
    Zcount++;
    else if(temp->data==1)
    Ocount++;
    else if(temp->data==2)
    Tcount++;

    temp=temp->next;
  }
  temp=tail;
  while(temp!=NULL){
    if(Zcount!=0){
        temp->data=0;
        Zcount--;
    }
     else if(Ocount!=0){
        temp->data=1;
        Ocount--;
    }
    else if(Tcount!=0){
        temp->data=2;
        Tcount--;
    }
    temp=temp->next;
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
    Node* tem=new Node(1);
   Node* tail=tem;
   Node* head=tem;
    insertF(head,0);
    insertF(head,2);
    insertF(head,1);
    insertF(head,0);
    insertT(tail,0);
    print(tail);
     cout<<head->data<<" "<<tail->data<<endl;
       Node* answer= sortL(tail);
            print(answer);
            cout<<head->data<<" "<<tail->data<<endl;
    return 0;
}

// METHOD T SORT 0,1,2 IS WITHOUT USING LINKS
