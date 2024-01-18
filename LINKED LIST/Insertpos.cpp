#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
this->next=NULL;
this->data=d;
}
};
void insertF(Node* &head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}
void insertB(Node* &tail,int data){
Node* temp=new Node(data);
temp->next=tail;
tail=temp;
}
void print(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAddress(Node* tail,Node* address,int value){
     Node* temp=new Node(value);temp->next=NULL;
     temp->data=value;
     temp->next=address->next;
     address->next=temp;
}

void insertposValue(Node* tail,int data1,int value){
 Node* temp=new Node(value);temp->next=NULL;
 Node* checkVal=tail;
 while(checkVal->data!=data1){
    checkVal=checkVal->next;
 if(checkVal==NULL)break;
 }
 if(checkVal==NULL){
    cout<<"VALUE DIDN'T FIND !"<<endl;
    return;
 }
temp->next=checkVal->next;
checkVal->next=temp;
}

void insertposIndex(Node** tail,int data,int position){
    Node* temp=new Node(data);temp->next=NULL;
    Node* s=NULL;
    Node* ind=*tail;
    if(position==0){
        temp->next=*tail;
        *tail=temp;
        return;
    }
    while(position-1>0&&ind){
        s=ind;
          ind=ind->next;
        position--;
    }
    if(position-1>=0&&ind==NULL){
        cout<<"POSITION VALUE IS NOT EXIST !"<<endl;
return;
    }
   temp->next=ind->next;
   ind->next=temp;
}
int main(){
Node * t1=new Node(1);
Node* tail1=t1;
Node* head1=t1;
insertF(head1,2);
insertF(head1,3);
insertF(head1,4);
insertF(head1,5);
insertF(head1,6);
insertF(head1,7);
insertF(head1,8);
insertF(head1,9);
print(tail1);
// insertposValue(tail1,100,20);
// print(tail1);
Node* temp=tail1;
temp=head1;
insertAddress(tail1,temp,89);
print(tail1);
    return 0;
}