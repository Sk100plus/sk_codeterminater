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


void deleteVal(Node** tail,int value){
Node* temp=*tail;
//   Node* s=temp;
if(temp->data==value){
    *tail=(*tail)->next;
     temp->next=NULL;
temp=NULL;
     free(temp);
     return;
}
else{
    Node* s=temp;
    while(temp->data!=value){
        s=temp;
        temp=temp->next;
        if(temp==NULL){
            break;
        }
    }
    if(temp->next==NULL){
        s->next=NULL;
        temp=NULL;
        free(temp);
    }
    if(temp==NULL){
        cout<<"DATA IS NOT FOUND IN THE LIST"<<endl;
        return;
    }
s->next=temp->next;
temp->next->prev=s;
temp=NULL;
free(temp);
}
}
void deleteInd(Node** tail,int index){
    Node* temp=*tail;
    Node* s=temp;
    if(index==0){
         *tail=(*tail)->next;
         (*tail)->prev=NULL;
     temp->next=NULL;
temp=NULL;
     free(temp);
     return;
    }
    int size=0;
    while(temp!=NULL){
        temp=temp->next;size++;
    }
    temp=*tail;
    if(index>=size||index<0){
        cout<<"INVALID VALUE OF INDEX IS GIVEN"<<endl;
        return;
    }
    while(index!=0){
        s=temp;
        temp=temp->next;
        index--;
    }
    if(temp==NULL&&s->next==NULL){
         cout<<"INVALID VALUE OF INDEX IS GIVEN"<<endl;
        return;
    }
    if(temp->next==NULL){
        s->next=NULL;
        temp=NULL;
        free(temp);
        return;
    }
s->next=temp->next;
temp->next->prev=s;
temp=NULL;
free(temp);
}
void deleteAddr(Node** tail,Node* addr){
    Node* temp=*tail;
    Node* s=temp;
    if(addr==NULL){
        cout<<"INVALID ADDRESS VALUE"<<endl;
        return;
    }
    if(temp->next==addr->next){
        *tail=(*tail)->next;
        temp->next=NULL;
        temp=NULL;
        free(temp);
        return;
    }
    while(temp->next!=addr->next){
        s=temp;
        temp=temp->next;
    }
    if(s->next==NULL&&temp==NULL){
        cout<<"INVALID VALUE OF ADDRESS PASSED";
        return;
    }
    if(temp->next==NULL){
        s->next=NULL;
        temp=NULL;
        free(temp);
        return;
    }
   s->next=temp->next;
   temp->next->prev=s; 
    temp=NULL;
    free(temp);
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
   deleteAddr(&tail,tail);
   print(tail);

    return 0;

}