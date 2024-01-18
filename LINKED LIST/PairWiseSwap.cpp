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
 Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        
        Node* t1=head;
        Node* t2=head->next;
        if(t1->next==NULL)return t1;
        if(t2->next==NULL){
            t2->next=t1;
            t1->next=NULL;
            return t2;
        }
        head=t2;
        while(true){
            Node* t3=t2->next;
            t2->next=t1;
            if(t3==NULL||t3->next==NULL){
                t1->next=t3;break;
            }
            t1->next=t3->next;
             t1=t3;
            t2=t1->next;
        }
        return head;
        
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
cout<<endl;
Node* me=pairWiseSwap(tail); 
print(me);
    return 0;
}