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
    if(temp==NULL){
        cout<<"DATA IS NOT FOUND IN THE LIST"<<endl;
        return;
    }
s->next=temp->next;
temp->next=NULL;
temp=NULL;
free(temp);
}
}
void deleteInd(Node** tail,int index){
    Node* temp=*tail;
    Node* s=temp;
    if(index==0){
         *tail=(*tail)->next;
     temp->next=NULL;
temp=NULL;
     free(temp);
     return;
    }
    int size=0;
    while(temp!=NULL){
        temp=temp->next;size++;
    }temp=*tail;
    if(index>=size||index<0){
        cout<<"INVALID VALUE OF INDEX IS GIVEN"<<endl;
        return;
    }
    while(index!=0){
        s=temp;
        temp=temp->next;
        index--;
    }
s->next=temp->next;
temp->next=NULL;
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
    s->next=temp->next;
    temp->next=NULL;
    temp=NULL;
    free(temp);
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
Node* temp=tail1;
temp=temp->next->next->next->next->next->next->next->next->next;
deleteAddr(&tail1,temp);
print(tail1);
    return 0;
}