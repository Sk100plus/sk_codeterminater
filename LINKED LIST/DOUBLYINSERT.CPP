#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertF(Node*& head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    temp->prev=head;
    head=temp;
} 
void insertB(Node*& tail,int data){
    Node* temp=new Node(data);
    tail->prev=temp;
    temp->next=tail;
    tail=temp;
}

void insertAddress(Node* tail,Node* address,int value){
     Node* temp=new Node(value);
//   Node* prank=tail;
//   if(address==NULL){
//     cout<<"Invalid address found";
//     return;
//   }
//   if(address->next==NULL){
//             address->next=temp;
//             temp->prev=address;
//             return;
//   }
//   while(prank->next!=address->next){
//     prank=prank->next;
//     if(prank==NULL){
//         cout<<"Address didn't find";
//         return;
//     }
//   }
//   temp->next=prank->next;
//   temp->prev=prank;
//   prank->next->prev=temp;
//   prank->next=temp;
temp->prev=address;
temp->next=address->next;
address->next=temp;

}


void insertposValue(Node* tail,int data1,int value){
 Node* temp=new Node(value);
 Node* checkVal=tail;
 while(checkVal->data!=data1){
    checkVal=checkVal->next;
 if(checkVal==NULL){
    cout<<"VALUE DIDN'T FIND !"<<endl;
    return;
 }
 }
 if(checkVal->next==NULL){
    checkVal->next=temp;
    temp->prev=checkVal;
    return;
 }
temp->next=checkVal->next;
temp->prev=checkVal;
checkVal->next->prev=temp;
checkVal->next=temp;
}

void insertposIndex(Node* &tail,int data,int position){
    Node* temp=new Node(data);
    Node* s=NULL;
    Node* ind=tail;
    int size=0;
    if(position<0){
        cout<<"Invalid index";
        return;
    }
    while(ind->next!=NULL){
ind=ind->next;
size++;
    }
     if(size==position-1){
            ind->next=temp;
            temp->prev=ind;
            return;
    }
    ind=tail;
   
    if(position==0){
        temp->next=tail;
    tail->prev=temp;
        tail=temp;
        return;
    }
 
    while(position-1>=0&&ind){                                  
        s=ind;
          ind=ind->next;
        position--;
    }
    if(position-1>=0&&ind==NULL){
        cout<<"POSITION VALUE IS NOT EXIST !"<<endl;
return;
    }
    s->next=temp;
temp->prev=s;
temp->next=ind;
ind->prev=temp;
}


void print(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
  Node* temp=new Node(10);
  Node* tail=temp;
  Node* head=temp;
 
  insertF(head,11);
   insertF(head,12); insertF(head,13); insertF(head,14); insertF(head,15);insertB(tail,9);
    Node* random=head;
   insertAddress(tail,random,6);
   print(tail);

    return 0;

}